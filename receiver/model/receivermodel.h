#pragma once

#include <QObject>
#include <QByteArray>
#include <QSerialPort>

class ReceiverModel : public QObject {
    Q_OBJECT

private:
    QSerialPort *serialPort;
    QByteArray receivedData;

public:
    explicit ReceiverModel(QObject *parent = nullptr);
    ~ReceiverModel();

    bool openPort(const QString &portName);
    void closePort();

public slots:
    void configurePort(const QString &portName);

signals:
    void dataReceived(const QByteArray &data);

private slots:
    void readData();

};

