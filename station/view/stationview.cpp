
#include "stationview.h"
#include <QSerialPortInfo>
#include "ui_stationview.h"

StationView::StationView(QWidget *parent)
    : QWidget(parent)
    , isConfigured(false)
    , ui(new Ui::StationView) {

    ui->setupUi(this);
    ui->transmitTextEdit->setEnabled(false);
    ui->transmitButton->setEnabled(false);
    ui->receiveTextEdit->setEnabled(false);

    const auto ports = QSerialPortInfo::availablePorts();
    for (const QSerialPortInfo &portInfo : ports) {
        ui->receiverPortNameComboBox->addItem(portInfo.portName());
        ui->transmitterPortNameComboBox->addItem(portInfo.portName());
    }

    ui->receiverPortNameComboBox->insertItem(0, "");
    ui->receiverPortNameComboBox->setCurrentIndex(0);
    ui->transmitterPortNameComboBox->insertItem(0, "");
    ui->transmitterPortNameComboBox->setCurrentIndex(0);

    qsizetype stationCount = ports.size() / 2;
    ui->stationNumberComboBox->addItem("");
    for (qsizetype i = 1; i <= stationCount; ++i) {
        ui->stationNumberComboBox->addItem(QString::number(i));
    }
    ui->stationNumberComboBox->setCurrentIndex(0);

    ui->stationPriorityComboBox->addItem("");
    ui->stationPriorityComboBox->addItem("0");
    ui->stationPriorityComboBox->addItem("1");
    ui->stationPriorityComboBox->setCurrentIndex(0);

    connect(ui->configButton, &QPushButton::clicked, this, [this]() {
        if(!isConfigured) {
            isConfigured = true;
            ui->transmitTextEdit->setEnabled(true);
            ui->transmitButton->setEnabled(true);
        }
        emit configureTransmitter(ui->transmitterPortNameComboBox->currentText());
        emit configureReceiver(ui->receiverPortNameComboBox->currentText());
        emit selectedStationNumber(static_cast<uint8_t>(ui->stationNumberComboBox->currentText().toUInt()));
        emit selectedPriorityLevel(static_cast<uint8_t>(ui->stationPriorityComboBox->currentText().toUInt()));
    });

    connect(ui->transmitButton, &QPushButton::clicked, this, [this] {
        emit sendData(ui->transmitTextEdit->toPlainText().toUtf8());
    });
}

StationView::~StationView() {
    delete ui;
}

void StationView::displayReceivedData(const QByteArray& data) {
    ui->receiveTextEdit->append(data);
}

