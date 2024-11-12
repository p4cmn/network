#include "mainmodel.h"

MainModel::MainModel(QObject *parent) : QObject(parent) {}

MainModel::~MainModel() {
    removeAll();
}

void MainModel::addTransmitter() {
    auto *view = new TransmitterView;
    auto *controller = new TransmitterController(view);
    transmitterViews.append(view);
    transmitterControllers.append(controller);
    emit transmitterAdded(view);
}

void MainModel::addReceiver() {
    auto *view = new ReceiverView;
    auto *controller = new ReceiverController(view);
    receiverViews.append(view);
    receiverControllers.append(controller);
    emit receiverAdded(view);
}

void MainModel::addStation() {
    auto *view = new StationView;
    auto *controller = new StationController(view);
    stationViews.append(view);
    stationControllers.append(controller);
    emit stationAdded(view);
}

void MainModel::removeAll() {
    for (auto *view : transmitterViews) {
        view->close();
        delete view;
    }
    transmitterViews.clear();

    for (auto *controller : transmitterControllers) {
        delete controller;
    }
    transmitterControllers.clear();

    for (auto *view : receiverViews) {
        view->close();
        delete view;
    }
    receiverViews.clear();

    for (auto *controller : receiverControllers) {
        delete controller;
    }
    receiverControllers.clear();

    for (auto *view : stationViews) {
        view->close();
        delete view;
    }
    stationViews.clear();

    for (auto *controller : stationControllers) {
        delete controller;
    }
    stationControllers.clear();

    emit allRemoved();
}
