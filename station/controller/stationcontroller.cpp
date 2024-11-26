#include "stationcontroller.h"

StationController::StationController(StationView *view, QObject *parent)
    : QObject(parent), view(view), model(new StationModel), modelThread(new QThread(this)) {

    model->moveToThread(modelThread);

    connect(view, &StationView::configureTransmitter, model, &StationModel::configureTransmitter, Qt::QueuedConnection);
    connect(view, &StationView::configureReceiver, model, &StationModel::configureReceiver, Qt::QueuedConnection);
    connect(view, &StationView::sendData, model, &StationModel::prepareData, Qt::QueuedConnection);
    connect(view, &StationView::selectedPriorityLevel, model, &StationModel::setPriorityLevel, Qt::QueuedConnection);
    connect(view, &StationView::calculatedTotalStations, model, &StationModel::setTotalStations, Qt::QueuedConnection);
    connect(view, &StationView::onCycleButtonClicked, model, &StationModel::handleCycle, Qt::QueuedConnection);
    connect(view, &StationView::selectedMonitor, model, &StationModel::setIsMonitore, Qt::QueuedConnection);
    connect(view, &StationView::selectedStationNumber, model, &StationModel::setSourceAddress, Qt::QueuedConnection);
    connect(model, &StationModel::dataReceived, view, &StationView::displayReceivedData, Qt::QueuedConnection);

    modelThread->start();
}

StationController::~StationController() {
    modelThread->quit();
    modelThread->wait();
    delete model;
}
