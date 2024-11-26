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
    ui->cycleButton->setEnabled(false);
    ui->cycleButton->setVisible(false);

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
    ui->sourceAddressComboBox->addItem("");
    ui->destinationAddressComboBox->addItem("");
    for (qsizetype i = 1; i <= stationCount; ++i) {
        ui->sourceAddressComboBox->addItem(QString::number(i));
        ui->destinationAddressComboBox->addItem(QString::number(i));
    }
    ui->sourceAddressComboBox->setCurrentIndex(0);
    ui->destinationAddressComboBox->setCurrentIndex(0);

    ui->stationPriorityComboBox->addItem("");
    ui->stationPriorityComboBox->addItem("0");
    ui->stationPriorityComboBox->addItem("1");
    ui->stationPriorityComboBox->setCurrentIndex(0);

    connect(ui->monitoreCheckBox, &QCheckBox::checkStateChanged, this, [this] {
        if(ui->monitoreCheckBox->isChecked()) {
            ui->cycleButton->setVisible(true);
        } else {
            ui->cycleButton->setVisible(false);
        }
    });

    connect(ui->cycleButton, &QPushButton::clicked, this, [this] {
        emit onCycleButtonClicked();
    });

    connect(ui->configButton, &QPushButton::clicked, this, [this, stationCount]() {
        if(!isConfigured) {
            isConfigured = true;
            ui->transmitTextEdit->setEnabled(true);
            ui->transmitButton->setEnabled(true);
            ui->cycleButton->setEnabled(true);
        }
        emit selectedMonitor(ui->monitoreCheckBox->isChecked());
        emit configureTransmitter(ui->transmitterPortNameComboBox->currentText());
        emit configureReceiver(ui->receiverPortNameComboBox->currentText());
        emit selectedPriorityLevel(static_cast<uint8_t>(ui->stationPriorityComboBox->currentText().toUInt()));
        emit selectedStationNumber(static_cast<uint8_t>(ui->sourceAddressComboBox->currentText().toUInt()));
        emit calculatedTotalStations(stationCount);
    });

    connect(ui->transmitButton, &QPushButton::clicked, this, [this] {
        emit sendData(ui->transmitTextEdit->toPlainText().toUtf8(),
                      ui->sourceAddressComboBox->currentText().toUInt(),
                      ui->destinationAddressComboBox->currentText().toUInt(),
                      ui->stationPriorityComboBox->currentText().toUInt());
    });
}

StationView::~StationView() {
    delete ui;
}

void StationView::displayReceivedData(const QByteArray& data) {
    ui->receiveTextEdit->append(data);
}
