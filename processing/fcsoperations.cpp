#include "fcsoperations.h"
#include <QDebug>

constexpr qsizetype TABLE_SIZE = 87;
std::vector<bool> polynomial = {1, 0, 0, 0, 0, 0, 1, 1};
std::unordered_map<std::string, size_t> syndromeTable = generateSyndromeTable(TABLE_SIZE, polynomial);

void distortRandomBit(QByteArray& data) {
    if (data.isEmpty()) {
        return;
    }
    size_t probability = rand() % 100;
    if (probability < 70) {
        size_t byteIndex = rand() % data.size();
        size_t bitIndex = rand() % 8;
        data[byteIndex] ^= (1 << bitIndex);
    }
}

vector<bool> convertByteArrayToBitArray(const QByteArray& dataInBytes, size_t bitLength) {
    vector<bool> bitArray;
    bitArray.reserve(bitLength);

    size_t bitIndex = 0;
    for (qsizetype i = 0; i < dataInBytes.size(); ++i) {
        for (int j = 7; j >= 0 && bitIndex < bitLength; --j) {
            bool bit = (dataInBytes[i] >> j) & 1;
            bitArray.push_back(bit);
            bitIndex++;
        }
    }
    return bitArray;
}

QByteArray convertBitArrayToByteArray(const vector<bool>& dataInBits, size_t bitLength) {
    QByteArray byteArray;
    size_t bytesLength = (bitLength + 7) / 8;
    byteArray.resize(bytesLength);
    byteArray.fill(0);
    for (size_t i = 0; i < bitLength; ++i) {
        size_t byteIndex = i / 8;
        size_t bitIndex = 7 - (i % 8);
        if (dataInBits[i]) {
            byteArray[byteIndex] |= (1 << bitIndex);
        }
    }
    return byteArray;
}

void shiftLeft(vector<bool>& bitArray, size_t degree) {
    bitArray.resize(bitArray.size() + degree, 0);
}

vector<bool> dividePolynomials(const vector<bool>& dividend, const vector<bool>& divisor) {
    vector<bool> remainder = dividend;
    size_t divisorLength = divisor.size();
    for (size_t i = 0; i <= remainder.size() - divisorLength; ++i) {
        if (remainder[i]) {
            for (size_t j = 0; j < divisorLength; ++j) {
                remainder[i + j] = remainder[i + j] ^ divisor[j];
            }
        }
    }
    vector<bool> result(remainder.end() - (divisorLength - 1), remainder.end());
    return result;
}

void addRemainder(vector<bool> &shiftedBitArray, const vector<bool> &remainder) {
    for(size_t i = 0; i < remainder.size(); ++i) {
        size_t bitIndex = shiftedBitArray.size() - remainder.size();
        shiftedBitArray[bitIndex + i] = remainder[i];
    }
}

QByteArray generateFCS(const QByteArray& data, const vector<bool>& polynomial) {
    size_t dataBitLength = data.size() * 8;
    vector<bool> bitArray = convertByteArrayToBitArray(data, dataBitLength);
    size_t degree = polynomial.size() - 1;
    shiftLeft(bitArray, degree);
    vector<bool> remainder = dividePolynomials(bitArray, polynomial);
    QByteArray fcs = convertBitArrayToByteArray(remainder, degree);
    if (fcs.size() < 1) {
        fcs.prepend('\0');
    }
    return fcs;
}

string bitArrayToString(const vector<bool>& bitArray) {
    string result;
    for (bool bit : bitArray) {
        result += bit ? '1' : '0';
    }
    return result;
}

unordered_map<string, size_t> generateSyndromeTable(size_t totalBits, const vector<bool>& polynomial) {
    unordered_map<string, size_t> syndromeTable;
    for (size_t i = 0; i < totalBits; ++i) {
        vector<bool> errorVector(totalBits, false);
        errorVector[i] = true;
        vector<bool> syndrome = dividePolynomials(errorVector, polynomial);
        string syndromeKey = bitArrayToString(syndrome);
        syndromeTable[syndromeKey] = i;
    }
    return syndromeTable;
}

bool decodeAndCorrect(QByteArray& data, QByteArray& receivedFCS, const vector<bool>& polynomial, const unordered_map<string, size_t>& syndromeTable) {
    size_t dataBitLength = data.size() * 8;
    size_t degree = polynomial.size() - 1;
    vector<bool> bitArray = convertByteArrayToBitArray(data, dataBitLength);
    vector<bool> remainder = convertByteArrayToBitArray(receivedFCS, degree);
    shiftLeft(bitArray, degree);
    addRemainder(bitArray, remainder);
    vector<bool> syndrome = dividePolynomials(bitArray, polynomial);
    bool errorDetected = false;
    for (bool bit : syndrome) {
        if (bit) {
            errorDetected = true;
            break;
        }
    }
    if (!errorDetected) {
        return true;
    }
    string syndromeKey = bitArrayToString(syndrome);
    auto it = syndromeTable.find(syndromeKey);
    if (it != syndromeTable.end()) {
        size_t errorPosition = it->second;
        if (errorPosition < dataBitLength + degree) {
            qsizetype byteIndex = errorPosition / 8;
            size_t bitIndex = 7 - (errorPosition % 8);
            if (byteIndex < data.size()) {
                data[byteIndex] ^= (1 << bitIndex);
            } else {
                size_t fcsBitPosition = errorPosition - dataBitLength;
                qsizetype fcsByteIndex = fcsBitPosition / 8;
                size_t fcsBitIndex = 7 - (fcsBitPosition % 8);
                if (fcsByteIndex < receivedFCS.size()) {
                    receivedFCS[fcsByteIndex] ^= (1 << fcsBitIndex);
                }
            }
        }
        return true;
    } else {
        return false;
    }
}
