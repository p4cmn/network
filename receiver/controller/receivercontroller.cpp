#include "receivercontroller.h"

ReceiverController::ReceiverController(ReceiverView *view, QObject *parent)
    : QObject(parent), view(view), model(new ReceiverModel), modelThread(new QThread(this)) {

    model->moveToThread(modelThread);

    connect(view, &ReceiverView::configurePort, model, &ReceiverModel::configurePort, Qt::QueuedConnection);
    connect(model, &ReceiverModel::dataReceived, view, &ReceiverView::displayData, Qt::QueuedConnection);

    modelThread->start();
}

ReceiverController::~ReceiverController() {
    modelThread->quit();
    modelThread->wait();
    delete model;
}
