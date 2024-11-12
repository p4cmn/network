#pragma once

#include <QObject>
#include "receiver/model/receivermodel.h"
#include "transmitter/model/transmittermodel.h"

class StationModel : public QObject {
    Q_OBJECT

private:
    uint8_t stationNumber;
    uint8_t priorityLevel;
    TransmitterModel *transmitterModel;
    ReceiverModel *receiverModel;

public:
    explicit StationModel(QObject *parent = nullptr);
    ~StationModel();

    void configureTransmitter(const QString &portName);
    void configureReceiver(const QString &portName);

    uint8_t getStationNumber() const;
    uint8_t getPriorityLevel() const;

signals:
    void dataReceived(const QByteArray &data);

private slots:
    void handleReceivedData(const QByteArray &data);

public slots:
    void transmitData(const QByteArray &data);
    void setStationNumber(uint8_t number);
    void setPriorityLevel(uint8_t level);

};
