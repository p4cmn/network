#pragma once

#include <QObject>
#include <QThread>
#include "transmitter/view/transmitterview.h"
#include "transmitter/model/transmittermodel.h"

class TransmitterController : public QObject {
    Q_OBJECT

private:
    TransmitterView *view;
    TransmitterModel *model;
    QThread *modelThread;

public:
    explicit TransmitterController(TransmitterView *view, QObject *parent = nullptr);
    ~TransmitterController();
};

