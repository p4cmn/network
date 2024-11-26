#pragma once

#include <QList>
#include <QByteArray>
#include "fcsoperations.h"

struct Frame {
    QByteArray FLAG;
    uint8_t sourceAddress;
    uint8_t destinationAddress;
    uint8_t priority;
    uint8_t reservation;
    uint8_t isToken;
    uint8_t monitorBit;
    QByteArray data;
    QByteArray fcs;
};

QList<QByteArray> fragmentData(const QByteArray &data,
                               uint8_t sourceAddress,
                               uint8_t destinationAddress,
                               uint8_t priority = 0,
                               uint8_t reservation = 0,
                               uint8_t isToken = 0,
                               uint8_t monitorBit = 0);

QByteArray createFlag();
QByteArray createSourceAddress(uint8_t sourceAddress);
QByteArray createDestinationAddress(uint8_t destinationAddress);
QByteArray createDataSegment(const QByteArray& data, qsizetype start, int dataSize);
QByteArray createFCS(const QByteArray& data);

Frame defragmentData(char byte, bool &isFrameComplete);
bool appendFlagByte(QByteArray &buffer, char byte);
bool isFrameReady(const QByteArray &buffer);
QByteArray extractDataSegment(const QByteArray &buffer);
//bool verifyFCS(const QByteArray& dataSegment, const QByteArray& receivedFCS);
void printFrameStructure(const QByteArray &frame
                         , bool isTransmit
                         , bool isCollision);
