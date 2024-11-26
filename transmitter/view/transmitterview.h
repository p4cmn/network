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
    void sendData(const QByteArray &data,
                  uint8_t sourceAddress = 0,
                  uint8_t destinationAddress = 0,
                  uint8_t priority = 0,
                  uint8_t reservation = 0,
                  uint8_t isToken = 0,
                  uint8_t monitorBit = 0);

};


