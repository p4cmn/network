#pragma once

#include <QObject>
#include <QThread>
#include "processing/frameprocessing.h"
#include "receiver/model/receivermodel.h"
#include "transmitter/model/transmittermodel.h"

class StationModel : public QObject {
    Q_OBJECT

private:
    TransmitterModel* transmitterModel;
    ReceiverModel* receiverModel;
    QThread* transmitterThread;
    QThread* receiverThread;

    bool isCycle = false;
    bool isMonitore = false;
    bool hasDataToSend = false;

    uint8_t sourceAddress = 0;
    uint8_t destinationAddress = 0;
    uint8_t priorityLevel = 0;
    uint8_t totalStations = 1;

    QByteArray dataToSend;

    // Поля для работы с токеном
    //uint8_t tokenPriority = 0;       // Поле P в токене
    //uint8_t reservationPriority = 0; // Поле R в токене

public:
    explicit StationModel(QObject* parent = nullptr);
    ~StationModel();

    void configureTransmitter(const QString& portName);
    void configureReceiver(const QString& portName);

    bool getIsMonitore() const;
    bool getIsCycle() const;
    uint8_t getTotalStations() const;
    uint8_t getPriorityLevel() const;
    uint8_t getSourceAddress() const;

public slots:
    void setPriorityLevel(uint8_t level);
    void setTotalStations(uint8_t totalStations);
    void setIsMonitore(bool isMonitore);
    void setSourceAddress(uint8_t address);

    void handleCycle();
    void prepareData(const QByteArray& data, uint8_t sourceAddress, uint8_t destinationAddress, uint8_t priority);

signals:
    void dataReceived(const QByteArray& data);

private slots:
    void transmitDataCyclicaly(const Frame& frame);

private:
    void transmitData(const QByteArray& data, uint8_t sourceAddress, uint8_t destinationAddress,
                      uint8_t priority = 0, uint8_t reservation = 0, uint8_t isToken = 0, uint8_t monitorBit = 0);
};
