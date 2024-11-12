#include "receivermodel.h"
#include "processing/frameprocessing.h"
#include <QDebug>

ReceiverModel::ReceiverModel(QObject *parent)
    : QObject(parent), serialPort(new QSerialPort(this)) {

    connect(serialPort, &QSerialPort::readyRead, this, &ReceiverModel::readData);
}

ReceiverModel::~ReceiverModel() {
    closePort();
}

bool ReceiverModel::openPort(const QString &portName) {
    if (serialPort->isOpen()) {
        serialPort->close();
    }
    serialPort->setPortName(portName);
    return serialPort->open(QIODevice::ReadOnly);
}

void ReceiverModel::closePort() {
    if (serialPort->isOpen()) {
        serialPort->close();
    }
}

void ReceiverModel::configurePort(const QString &portName) {
    openPort(portName);
}

void ReceiverModel::readData() {
    while (serialPort->bytesAvailable()) {
        QByteArray temp = serialPort->read(1);
        char byte = temp[0];
        bool isFrameComplete;
        receivedData = defragmentData(byte, isFrameComplete);

        if (isFrameComplete) {
            emit dataReceived(receivedData);
            receivedData.clear();
        }
    }
}
