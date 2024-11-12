#pragma once

#include <QList>
#include <QByteArray>
#include "fcsoperations.h"

QList<QByteArray> fragmentData(const QByteArray &data
                               , uint8_t sourceAddress
                               , uint8_t destinationAddress);

QByteArray createFlag();
QByteArray createSourceAddress(uint8_t sourceAddress);
QByteArray createDestinationAddress(uint8_t destinationAddress);
QByteArray createDataSegment(const QByteArray& data, qsizetype start, int dataSize);
QByteArray createFCS(const QByteArray& data);

QByteArray defragmentData(char byte, bool &isFrameComplete);
bool appendFlagByte(QByteArray &buffer, char byte);
bool isFrameReady(const QByteArray &buffer);
QByteArray extractDataSegment(const QByteArray &buffer);
//bool verifyFCS(const QByteArray& dataSegment, const QByteArray& receivedFCS);
void printFrameStructure(const QByteArray &frame
                         , bool isTransmit
                         , bool isCollision);
