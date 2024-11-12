#pragma once

#include <ctime>
#include <vector>
#include <string>
#include <cstdlib>
#include <iostream>
#include <QByteArray>
#include <unordered_map>

using std::vector;
using std::unordered_map;
using std::string;

extern std::vector<bool> polynomial;
extern std::unordered_map<std::string, size_t> syndromeTable;

void distortRandomBit(QByteArray& data);
QByteArray convertBitArrayToByteArray(const vector<bool>& dataInBits, size_t bitLength);
vector<bool> convertByteArrayToBitArray(const QByteArray& dataInBytes, size_t bitLength);
vector<bool> dividePolynomials(const vector<bool>& dividend, const vector<bool>& divisor);
void shiftLeft(vector<bool>& bitArray, size_t degree);
void addRemainder(vector<bool>& shiftedBitArray, const vector<bool>& remainder);
QByteArray generateFCS(const QByteArray& data, const vector<bool>& polynomial);
unordered_map<string, size_t> generateSyndromeTable(size_t totalBits, const vector<bool>& polynomial);
bool decodeAndCorrect(QByteArray& data, QByteArray& receivedFCS, const vector<bool>& polynomial, const unordered_map<string, size_t>& syndromeTable);
