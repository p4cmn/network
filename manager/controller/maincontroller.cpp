#include "maincontroller.h"
#include <QDebug>

MainController::MainController(MainWindow *view, MainModel *model, QObject *parent)
    : QObject(parent), view(view), model(model) {

    connect(view, &MainWindow::createTransmitterClicked, this, &MainController::requestAddTransmitter);
    connect(view, &MainWindow::createReceiverClicked, this, &MainController::requestAddReceiver);
    connect(view, &MainWindow::createStationClicked, this, &MainController::requestAddStation);
    connect(view, &MainWindow::closeAllClicked, this, &MainController::requestRemoveAll);

    connect(this, &MainController::requestAddTransmitter, model, &MainModel::addTransmitter);
    connect(this, &MainController::requestAddReceiver, model, &MainModel::addReceiver);
    connect(this, &MainController::requestAddStation, model, &MainModel::addStation);
    connect(this, &MainController::requestRemoveAll, model, &MainModel::removeAll);

    connect(model, &MainModel::transmitterAdded, this, &MainController::handleTransmitterAdded);
    connect(model, &MainModel::receiverAdded, this, &MainController::handleReceiverAdded);
    connect(model, &MainModel::stationAdded, this, &MainController::handleStationAdded);
    connect(model, &MainModel::allRemoved, this, &MainController::handleAllRemoved);
}

void MainController::handleTransmitterAdded(TransmitterView* view) {
    view->show();
}

void MainController::handleReceiverAdded(ReceiverView* view) {
    view->show();
}

void MainController::handleStationAdded(StationView* view) {
    view->show();
}

void MainController::handleAllRemoved() {
    qDebug() << "All transmitters and receivers have been removed";
}
