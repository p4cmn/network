#include <QSerialPortInfo>
#include "receiverview.h"
#include "ui_receiverview.h"

ReceiverView::ReceiverView(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ReceiverView) {

    ui->setupUi(this);
    ui->receiveTextEdit->setEnabled(false);

    const auto ports = QSerialPortInfo::availablePorts();
    for (const QSerialPortInfo &portInfo : ports) {
        ui->portNameComboBox->addItem(portInfo.portName());
    }

    connect(ui->configButton, &QPushButton::clicked, this, [this]() {
        emit configurePort(ui->portNameComboBox->currentText());
    });
}

ReceiverView::~ReceiverView() {
    delete ui;
}

void ReceiverView::displayData(const Frame &data) {
    ui->receiveTextEdit->append(data.data);
}
