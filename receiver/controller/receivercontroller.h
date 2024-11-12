#pragma once

#include <QObject>
#include <QThread>
#include "receiver/view/receiverview.h"
#include "receiver/model/receivermodel.h"


class ReceiverController : public QObject {
    Q_OBJECT

public:
    explicit ReceiverController(ReceiverView *view, QObject *parent = nullptr);
    ~ReceiverController();

private:
    ReceiverView *view;
    ReceiverModel *model;
    QThread *modelThread;
};
