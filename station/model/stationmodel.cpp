#include "stationmodel.h"
#include <QDebug>

StationModel::StationModel(QObject *parent)
    : QObject(parent)
    , transmitterModel(new TransmitterModel)
    , receiverModel(new ReceiverModel)
    , transmitterThread(new QThread(this))
    , receiverThread(new QThread(this)) {

    transmitterModel->moveToThread(transmitterThread);
    receiverModel->moveToThread(receiverThread);

    transmitterThread->start();
    receiverThread->start();

    connect(receiverModel, &ReceiverModel::dataReceived, this, &StationModel::transmitDataCyclicaly, Qt::QueuedConnection);
}

StationModel::~StationModel() {
    transmitterThread->quit();
    transmitterThread->wait();
    receiverThread->quit();
    receiverThread->wait();
    delete transmitterModel;
    delete receiverModel;
}

void StationModel::transmitData(const QByteArray& data,
                                uint8_t sourceAddress,
                                uint8_t destinationAddress,
                                uint8_t priority,
                                uint8_t reservation,
                                uint8_t isToken,
                                uint8_t monitorBit) {
    qDebug() << "Send station: " << sourceAddress;
    QMetaObject::invokeMethod(transmitterModel, "transmitData", Qt::QueuedConnection
                              , Q_ARG(QByteArray, data)
                              , Q_ARG(uint8_t, sourceAddress)
                              , Q_ARG(uint8_t, destinationAddress)
                              , Q_ARG(uint8_t, priority)
                              , Q_ARG(uint8_t, reservation)
                              , Q_ARG(uint8_t, isToken)
                              , Q_ARG(uint8_t, monitorBit));
}

void StationModel::configureTransmitter(const QString &portName) {
    QMetaObject::invokeMethod(transmitterModel, "configurePort", Qt::QueuedConnection, Q_ARG(QString, portName));
}

void StationModel::configureReceiver(const QString &portName) {
    QMetaObject::invokeMethod(receiverModel, "configurePort", Qt::QueuedConnection, Q_ARG(QString, portName));
}

bool StationModel::getIsMonitore() const {
    return isMonitore;
}

bool StationModel::getIsCycle() const {
    return isCycle;
}

uint8_t StationModel::getTotalStations() const {
    return totalStations;
}

void StationModel::setPriorityLevel(uint8_t level) {
    priorityLevel = level;
}

void StationModel::setTotalStations(uint8_t totalStations) {
    this->totalStations = totalStations;
}

void StationModel::setIsMonitore(bool isMonitore) {
    this->isMonitore = isMonitore;
}

void StationModel::setSourceAddress(uint8_t address) {
    this->sourceAddress = address;
}

uint8_t StationModel::getSourceAddress() const {
    return sourceAddress;
}

void StationModel::handleCycle() {
    if (!isMonitore) {
        qDebug() << "Cannot start cycle. This station is not a monitor.";
        return;
    }
    isCycle = !isCycle;
    if (isCycle) {
        uint8_t nextStation = (sourceAddress % totalStations) + 1;
        qDebug() << "Cycle started. Generating token.";
        transmitData(QByteArray("TOKEN"), sourceAddress, nextStation, 0, 0, 1, 1);
    } else {
        qDebug() << "Cycle stopped.";
    }
}

void StationModel::transmitDataCyclicaly(const Frame &frame) {
    QThread::msleep(2000);
    uint8_t nextStation = (sourceAddress % totalStations) + 1;
    if (isMonitore && !isCycle) {
        qDebug() << "Cycle is not running. Ignoring frame.";
        return;
    }
    uint8_t priority = frame.priority;
    uint8_t reservateion = frame.reservation;
    if(isMonitore) {
        if(frame.isToken) {
            if(priority < reservateion) {
                priority = reservateion;
                reservateion = 0;
            }
        }
    }
    if (frame.isToken) {
        if(priority < priorityLevel) {
            if(hasDataToSend) {
                reservateion = std::max(reservateion, priorityLevel);
                transmitData(QByteArray("TOKEN"), sourceAddress, nextStation, priority, reservateion, 1, 0);
                qDebug() << "Tok has d <";
                return;
            } else {
                transmitData(QByteArray("TOKEN"), sourceAddress, nextStation, priority, reservateion, 1, 0);
                qDebug() << "Tok has not d <";
                return;
            }
        } else if (priority == priorityLevel){
            if(hasDataToSend) {
                qDebug() << "Tok has d =";
                transmitData(dataToSend, sourceAddress, destinationAddress, priority, reservateion, 0, 0);
                hasDataToSend = false;
                dataToSend.clear();
                return;
            } else {
                qDebug() << "Tok has not d =";
                transmitData(QByteArray("TOKEN"), sourceAddress, nextStation, priority, reservateion, 1, 0);
                return;
            }
        } else {
            qDebug() << "Tok >";
            transmitData(QByteArray("TOKEN"), sourceAddress, nextStation, priority, reservateion, 1, 0);
            return;
        }
    } else {
        if(frame.destinationAddress == sourceAddress) {
            emit dataReceived(frame.data);
            transmitData(QByteArray("TOKEN"), sourceAddress, nextStation, reservateion, 0, 1, 0);
            return;
        } else {
            transmitData(frame.data, frame.sourceAddress, frame.destinationAddress, priority, reservateion, 0, 0);
            return;
        }
    }
}

void StationModel::prepareData(const QByteArray &data, uint8_t sourceAddress, uint8_t destinationAddress, uint8_t priority) {
    if (isMonitore && !isCycle) {
        qDebug() << "Cycle is not running. Cannot prepare data.";
        return;
    }
    if (hasDataToSend) {
        qDebug() << "Already have data waiting to be sent.";
        return;
    }
    hasDataToSend = true;
    dataToSend = data;
    this->sourceAddress = sourceAddress;
    this->destinationAddress = destinationAddress;
    this->priorityLevel = priority;
    qDebug() << "Data prepared for sending:" << "Source:" << sourceAddress << "Destination:" << destinationAddress << "Data:" << data;
}
