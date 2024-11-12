#pragma once

#include <QObject>
#include <QList>
#include "transmitter/view/transmitterview.h"
#include "transmitter/controller/transmittercontroller.h"
#include "receiver/view/receiverview.h"
#include "receiver/controller/receivercontroller.h"

class MainModel : public QObject {
    Q_OBJECT

public:
    explicit MainModel(QObject *parent = nullptr);
    ~MainModel();

public slots:
    void addTransmitter();
    void addReceiver();
    void removeAll();

signals:
    void transmitterAdded(TransmitterView* view);
    void receiverAdded(ReceiverView* view);
    void allRemoved();

private:
    QList<TransmitterView*> transmitterViews;
    QList<TransmitterController*> transmitterControllers;
    QList<ReceiverView*> receiverViews;
    QList<ReceiverController*> receiverControllers;
};