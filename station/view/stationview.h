#pragma once

#include <QWidget>

namespace Ui {
class StationView;
}

class StationView : public QWidget
{
    Q_OBJECT

private:
    bool isConfigured;
    Ui::StationView *ui;

public:
    explicit StationView(QWidget *parent = nullptr);
    ~StationView();

signals:
    void configureTransmitter(const QString& portName);
    void configureReceiver(const QString& portName);
    void sendData(const QByteArray& data, unsigned char source, unsigned char destination, unsigned char priority);
    void selectedPriorityLevel(uint8_t level);
    void calculatedTotalStations(uint8_t totalStations);
    void onCycleButtonClicked();
    void selectedMonitor(bool isMonitore);
    void selectedStationNumber(uint8_t number);

public slots:
    void displayReceivedData(const QByteArray& data);

};
