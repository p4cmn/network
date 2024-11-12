#pragma once

#include <QWidget>

namespace Ui {
class TransmitterView;
}

class TransmitterView : public QWidget {
    Q_OBJECT

private:
    bool isConfigured;
    Ui::TransmitterView *ui;   

public:
    explicit TransmitterView(QWidget *parent = nullptr);
    ~TransmitterView();

signals:
    void configurePort(const QString &portName);
    void sendData(const QByteArray &data);

};


