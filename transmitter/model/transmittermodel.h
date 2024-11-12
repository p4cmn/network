#pragma once

#include <QObject>
#include <QByteArray>
#include <QSerialPort>

class TransmitterModel : public QObject {
    Q_OBJECT

private:
    QSerialPort *serialPort;

public:
    explicit TransmitterModel(QObject *parent = nullptr);
    ~TransmitterModel();

    bool openPort(const QString &portName);
    void closePort();
    bool sendData(const QByteArray &data);

public slots:
    void configurePort(const QString &portName);
    void transmitData(const QByteArray &data);
};


