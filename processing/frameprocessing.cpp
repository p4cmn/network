#include "frameprocessing.h"
#include <QDebug>

constexpr qsizetype FLAG_SIZE = 2;
constexpr qsizetype ADDRESS_SIZE = 1;
constexpr qsizetype DATA_SIZE = 10;
constexpr qsizetype FCS_SIZE = 1;
constexpr qsizetype FRAME_SIZE = FLAG_SIZE + 6 * ADDRESS_SIZE + DATA_SIZE + FCS_SIZE;

QList<QByteArray> fragmentData(const QByteArray &data,
                               uint8_t sourceAddress,
                               uint8_t destinationAddress,
                               uint8_t priority,
                               uint8_t reservation,
                               uint8_t isToken,
                               uint8_t monitorBit) {
    QList<QByteArray> frames;
    qsizetype totalFrames = (data.size() + DATA_SIZE - 1) / DATA_SIZE;

    for (qsizetype i = 0; i < totalFrames; ++i) {
        QByteArray frame;

        frame.append(createFlag());
        frame.append(createSourceAddress(sourceAddress));
        frame.append(createDestinationAddress(destinationAddress));

        frame.append(static_cast<char>(priority));
        frame.append(static_cast<char>(reservation));
        frame.append(static_cast<char>(isToken));
        frame.append(static_cast<char>(monitorBit));

        QByteArray dataSegment = createDataSegment(data, i * DATA_SIZE, DATA_SIZE);
        QByteArray fcs = createFCS(dataSegment);
        distortRandomBit(dataSegment);
        frame.append(dataSegment);
        frame.append(fcs);
        frames.append(frame);
    }

    return frames;
}

QByteArray createFlag() {
    return QByteArray::fromHex("246A");
}

QByteArray createSourceAddress(uint8_t sourceAddress) {
    return QByteArray(1, static_cast<char>(sourceAddress));
}

QByteArray createDestinationAddress(uint8_t destinationAddress) {
    return QByteArray(1, static_cast<char>(destinationAddress));
}

QByteArray createDataSegment(const QByteArray& data, qsizetype start, int dataSize) {
    return data.mid(start, dataSize).leftJustified(dataSize, 0, true);
}

QByteArray createFCS(const QByteArray& data) {
    return generateFCS(data, polynomial);
}

Frame defragmentData(char byte, bool &isFrameComplete) {
    Frame frame;
    static QByteArray frameBuffer;
    static bool frameStarted = false;
    isFrameComplete = false;

    if (!frameStarted) {
        frameStarted = appendFlagByte(frameBuffer, byte);
        return {};
    }

    frameBuffer.append(byte);

    if (isFrameReady(frameBuffer)) {
        frame.sourceAddress = static_cast<uint8_t>(frameBuffer[FLAG_SIZE]);
        frame.destinationAddress = static_cast<uint8_t>(frameBuffer[FLAG_SIZE + ADDRESS_SIZE]);
        frame.priority = static_cast<uint8_t>(frameBuffer[FLAG_SIZE + 2 * ADDRESS_SIZE]);
        frame.reservation = static_cast<uint8_t>(frameBuffer[FLAG_SIZE + 2 * ADDRESS_SIZE + 1]);
        frame.isToken = static_cast<uint8_t>(frameBuffer[FLAG_SIZE + 2 * ADDRESS_SIZE + 2]);
        frame.monitorBit = static_cast<uint8_t>(frameBuffer[FLAG_SIZE + 2 * ADDRESS_SIZE + 3]);
        qDebug() << frame.sourceAddress
                 << frame.destinationAddress
                 << frame.priority
                 << frame.reservation
                 << frame.isToken
                 << frame.monitorBit;

        frame.data = extractDataSegment(frameBuffer);
        frame.fcs = frameBuffer.right(FCS_SIZE);
        if (decodeAndCorrect(frame.data, frame.fcs, polynomial, syndromeTable)) {
            isFrameComplete = true;
            printFrameStructure(frameBuffer, false, false);
            while (!frame.data.isEmpty() && frame.data.endsWith('\0')) {
                frame.data.chop(1);
            }
            frameBuffer.clear();
            frameStarted = false;
            return frame;
        }
        frameBuffer.clear();
        frameStarted = false;
    }
    return {};
}

bool appendFlagByte(QByteArray &buffer, char byte) {
    QByteArray flag = QByteArray::fromHex("246A");
    static int flagIndex = 0;

    if (byte == flag[flagIndex]) {
        buffer.append(byte);
        flagIndex++;
        if (flagIndex == FLAG_SIZE) {
            flagIndex = 0;
            return true;
        }
    } else {
        buffer.clear();
        flagIndex = 0;
    }
    return false;
}

bool isFrameReady(const QByteArray &buffer) {
    return buffer.size() == FRAME_SIZE;
}

QByteArray extractDataSegment(const QByteArray &buffer) {
    return buffer.mid(FLAG_SIZE + 6 * ADDRESS_SIZE, DATA_SIZE);
}

void printFrameStructure(const QByteArray &frame, bool isTransmit, bool isCollision) {
    QString prefix = isTransmit ? (isCollision ? "c" : "t") : "r";

    QByteArray flag = frame.left(FLAG_SIZE);
    uint8_t srcAddr = static_cast<uint8_t>(frame[FLAG_SIZE]);
    uint8_t destAddr = static_cast<uint8_t>(frame[FLAG_SIZE + ADDRESS_SIZE]);
    QByteArray dataSegment = frame.mid(FLAG_SIZE + 6 * ADDRESS_SIZE, DATA_SIZE);
    QByteArray fcs = frame.right(FCS_SIZE);

    qDebug() << prefix
             << "| FLAG:" << flag.toHex(' ')
             << "| SRC:" << QString::number(srcAddr)
             << "| DEST:" << QString::number(destAddr)
             << "| DATA:" << dataSegment.toHex(' ')
             << "| FCS:" << fcs.toHex(' ')
             << "|";
}
