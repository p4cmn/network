#pragma once

#include <QObject>
#include <QThread>
#include "station/view/stationview.h"
#include "station/model/stationmodel.h"

class StationController: public QObject {
    Q_OBJECT
private:
    StationView* view;
    StationModel* model;
    QThread* modelThread;

public:
    explicit StationController(StationView *view, QObject *parent = nullptr);
    ~StationController();
};
