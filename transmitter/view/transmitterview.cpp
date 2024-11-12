#include <QDebug>
#include <QSerialPortInfo>
#include "transmitterview.h"
#include "ui_transmitterview.h"

TransmitterView::TransmitterView(QWidget *parent)
    : QWidget(parent)
    , isConfigured(false)
    , ui(new Ui::TransmitterView) {

    ui->setupUi(this);
    ui->transmitTextEdit->setEnabled(false);
    ui->transmitButton->setEnabled(false);

    const auto ports = QSerialPortInfo::availablePorts();
    for (const QSerialPortInfo &portInfo : ports) {
        ui->portNameComboBox->addItem(portInfo.portName());
    }

    connect(ui->configButton, &QPushButton::clicked, this, [this]() {
        if(!isConfigured) {
            isConfigured = true;
            ui->transmitTextEdit->setEnabled(true);
            ui->transmitButton->setEnabled(true);
        }
        emit configurePort(ui->portNameComboBox->currentText());
    });

    connect(ui->transmitButton, &QPushButton::clicked, this, [this]() {
        emit sendData(ui->transmitTextEdit->toPlainText().toUtf8());
    });
}

TransmitterView::~TransmitterView() {
    delete ui;
}
