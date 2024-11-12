#pragma once

#include <QObject>
#include "manager/model/mainmodel.h"
#include "manager/view/mainwindow.h"

class MainController : public QObject {
    Q_OBJECT

private:
    MainWindow *view;
    MainModel *model;

public:
    explicit MainController(MainWindow *view, MainModel *model, QObject *parent = nullptr);

signals:
    void requestAddTransmitter();
    void requestAddReceiver();
    void requestAddStation();
    void requestRemoveAll();

private slots:
    void handleTransmitterAdded(TransmitterView* view);
    void handleReceiverAdded(ReceiverView* view);
    void handleStationAdded(StationView* view);
    void handleAllRemoved();

};
