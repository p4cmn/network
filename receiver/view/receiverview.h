#pragma once

#include <QWidget>

namespace Ui {
class ReceiverView;
}

class ReceiverView : public QWidget {
    Q_OBJECT

private:
    Ui::ReceiverView *ui;

public:
    explicit ReceiverView(QWidget *parent = nullptr);
    ~ReceiverView();

signals:
    void configurePort(const QString &portName);

public slots:
    void displayData(const QByteArray &data);

};
