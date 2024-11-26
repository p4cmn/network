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

void TransmitterModel::transmitData(const QByteArray &data,
                                    uint8_t sourceAddress,
                                    uint8_t destinationAddress,
                                    uint8_t priority,
                                    uint8_t reservation,
                                    uint8_t isToken,
                                    uint8_t monitorBit) {
    QList<QByteArray> frames = fragmentData(data,
                                            sourceAddress,
                                            destinationAddress,
                                            priority,
                                            reservation,
                                            isToken,
                                            monitorBit);
    for(const auto& frame: frames) {
        printFrameStructure(frame, true, false);
        serialPort->write(frame);
    }
}
