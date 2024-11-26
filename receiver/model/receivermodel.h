#pragma once

#include <QObject>
#include <QByteArray>
#include <QSerialPort>
#include "processing/frameprocessing.h"

class ReceiverModel : public QObject {
    Q_OBJECT

private:
    QSerialPort *serialPort;
    Frame receivedData;

public:
    explicit ReceiverModel(QObject *parent = nullptr);
    ~ReceiverModel();

    bool openPort(const QString &portName);
    void closePort();

public slots:
    void configurePort(const QString &portName);

signals:
    void dataReceived(const Frame &data);

private slots:
    void readData();

};

