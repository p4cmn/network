#include "stationmodel.h"
#include <QDebug>

StationModel::StationModel(QObject *parent)
    : QObject(parent)
    , transmitterModel(new TransmitterModel(this))
    , receiverModel(new ReceiverModel(this)) {

    connect(receiverModel, &ReceiverModel::dataReceived, this, &StationModel::handleReceivedData);
}

StationModel::~StationModel() {
    delete transmitterModel;
    delete receiverModel;
}

void StationModel::transmitData(const QByteArray &data) {
    transmitterModel->transmitData(data);
}

void StationModel::configureTransmitter(const QString &portName) {
    transmitterModel->configurePort(portName);
}

void StationModel::configureReceiver(const QString &portName) {
    receiverModel->configurePort(portName);
}

void StationModel::setStationNumber(uint8_t number) {
    if (this->stationNumber != number) {
        this->stationNumber = number;
    }
}

void StationModel::setPriorityLevel(uint8_t level) {
    if(this->priorityLevel != level) {
        this->priorityLevel = level;
    }
}

uint8_t StationModel::getStationNumber() const {
    return stationNumber;
}

uint8_t StationModel::getPriorityLevel() const {
    return priorityLevel;
}

void StationModel::handleReceivedData(const QByteArray &data) {
    emit dataReceived(data);
}
