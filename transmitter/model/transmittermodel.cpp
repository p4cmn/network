#include <QDebug>
#include "transmittermodel.h"
#include "processing/frameprocessing.h"
#include "processing/csmacdprocessing.h"

TransmitterModel::TransmitterModel(QObject *parent)
    : QObject(parent), serialPort(new QSerialPort(this)) {}

TransmitterModel::~TransmitterModel() {
    closePort();
}

bool TransmitterModel::openPort(const QString &portName) {
    if (serialPort->isOpen()) {
        serialPort->close();
    }
    serialPort->setPortName(portName);
    return serialPort->open(QIODevice::WriteOnly);
}

void TransmitterModel::closePort() {
    if (serialPort->isOpen()) {
        serialPort->close();
    }
}

bool TransmitterModel::sendData(const QByteArray &data) {
    if (serialPort->isOpen()) {
        serialPort->write(data);
        return true;
    }
    return false;
}

void TransmitterModel::configurePort(const QString &portName) {
    openPort(portName);
}

void TransmitterModel::transmitData(const QByteArray &data) {
    uint8_t sourceAddress = static_cast<uint8_t>(serialPort->portName().remove("COM").toInt());

    uint8_t destinationAddress = 0;

    QList<QByteArray> frames = fragmentData(data, sourceAddress, destinationAddress);

    const int maxAttempts = 10;
    for (QByteArray &frame : frames) {
        int attemptCount = 0;
        while (attemptCount < maxAttempts) {
            if (isChannelBusy()) {
                qDebug() << "The channel is busy. Expectation...";
                QThread::msleep(100);
            }
            if (isCollisionDetected()) {
                QByteArray brokenFrame = frame;
                distortMultipleBytes(brokenFrame, 2);
                printFrameStructure(brokenFrame, true, true);
                sendData(brokenFrame);
                QByteArray jamSignal = createJamSignal();
                qDebug() << "Sending jam signal due to collision.";
                sendData(jamSignal);

                attemptCount++;
                if (attemptCount >= maxAttempts) {
                    qDebug() << "The number of transmission attempts has been exceeded. Error.";
                    break;
                }

                int backoffTime = calculateBackoffDelay(attemptCount);
                //qDebug() << "Delay before retry: " << backoffTime << " ms.";
                QThread::msleep(backoffTime);
                continue;
            }
            if(attemptCount < maxAttempts){
                sendData(frame);
                printFrameStructure(frame, true, false);
                break;
            }
        }
    }
}
