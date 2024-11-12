#include "TransmitterController.h"

TransmitterController::TransmitterController(TransmitterView *view, QObject *parent)
    : QObject(parent), view(view), model(new TransmitterModel), modelThread(new QThread(this)) {

    model->moveToThread(modelThread);

    connect(view, &TransmitterView::configurePort, model, &TransmitterModel::configurePort, Qt::QueuedConnection);
    connect(view, &TransmitterView::sendData, model, &TransmitterModel::transmitData, Qt::QueuedConnection);

    modelThread->start();
}

TransmitterController::~TransmitterController() {
    modelThread->quit();
    modelThread->wait();
    delete model;
}
