/********************************************************************************
** Form generated from reading UI file 'stationview.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATIONVIEW_H
#define UI_STATIONVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StationView
{
public:
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_13;
    QLabel *stationLabel;
    QSpacerItem *horizontalSpacer_14;
    QSpacerItem *horizontalSpacer_10;
    QFrame *frame_6;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_15;
    QSpacerItem *horizontalSpacer_29;
    QLabel *configurationLabel;
    QSpacerItem *horizontalSpacer_30;
    QHBoxLayout *horizontalLayout_17;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *receiverLabel;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QComboBox *receiverPortNameComboBox;
    QSpacerItem *horizontalSpacer_4;
    QFrame *frame_5;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer_21;
    QLabel *stationNumber;
    QSpacerItem *horizontalSpacer_22;
    QHBoxLayout *horizontalLayout_14;
    QSpacerItem *horizontalSpacer_27;
    QComboBox *stationNumberComboBox;
    QSpacerItem *horizontalSpacer_28;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_23;
    QLabel *Station;
    QSpacerItem *horizontalSpacer_24;
    QHBoxLayout *horizontalLayout_13;
    QSpacerItem *horizontalSpacer_25;
    QComboBox *stationPriorityComboBox;
    QSpacerItem *horizontalSpacer_26;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_11;
    QLabel *transmitterLabel;
    QSpacerItem *horizontalSpacer_12;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_7;
    QComboBox *transmitterPortNameComboBox;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *configButton;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_16;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_15;
    QLabel *label;
    QSpacerItem *horizontalSpacer_16;
    QTextEdit *receiveTextEdit;
    QSpacerItem *horizontalSpacer_31;
    QFrame *frame_4;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_17;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_18;
    QTextEdit *transmitTextEdit;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_19;
    QPushButton *transmitButton;
    QSpacerItem *horizontalSpacer_20;

    void setupUi(QWidget *StationView)
    {
        if (StationView->objectName().isEmpty())
            StationView->setObjectName("StationView");
        StationView->resize(550, 550);
        verticalLayout_7 = new QVBoxLayout(StationView);
        verticalLayout_7->setObjectName("verticalLayout_7");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_9);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_13);

        stationLabel = new QLabel(StationView);
        stationLabel->setObjectName("stationLabel");

        horizontalLayout_7->addWidget(stationLabel);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_14);


        horizontalLayout_5->addLayout(horizontalLayout_7);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_10);


        verticalLayout_7->addLayout(horizontalLayout_5);

        frame_6 = new QFrame(StationView);
        frame_6->setObjectName("frame_6");
        frame_6->setFrameShape(QFrame::Shape::StyledPanel);
        frame_6->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_6 = new QVBoxLayout(frame_6);
        verticalLayout_6->setObjectName("verticalLayout_6");
        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        horizontalSpacer_29 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_29);

        configurationLabel = new QLabel(frame_6);
        configurationLabel->setObjectName("configurationLabel");

        horizontalLayout_15->addWidget(configurationLabel);

        horizontalSpacer_30 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_30);


        verticalLayout_6->addLayout(horizontalLayout_15);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        frame = new QFrame(frame_6);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        receiverLabel = new QLabel(frame);
        receiverLabel->setObjectName("receiverLabel");

        horizontalLayout->addWidget(receiverLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        receiverPortNameComboBox = new QComboBox(frame);
        receiverPortNameComboBox->setObjectName("receiverPortNameComboBox");

        horizontalLayout_2->addWidget(receiverPortNameComboBox);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout_17->addWidget(frame);

        frame_5 = new QFrame(frame_6);
        frame_5->setObjectName("frame_5");
        frame_5->setFrameShape(QFrame::Shape::StyledPanel);
        frame_5->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_5 = new QVBoxLayout(frame_5);
        verticalLayout_5->setObjectName("verticalLayout_5");
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_21);

        stationNumber = new QLabel(frame_5);
        stationNumber->setObjectName("stationNumber");

        horizontalLayout_11->addWidget(stationNumber);

        horizontalSpacer_22 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_22);


        verticalLayout_5->addLayout(horizontalLayout_11);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        horizontalSpacer_27 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_27);

        stationNumberComboBox = new QComboBox(frame_5);
        stationNumberComboBox->setObjectName("stationNumberComboBox");

        horizontalLayout_14->addWidget(stationNumberComboBox);

        horizontalSpacer_28 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_28);


        verticalLayout_5->addLayout(horizontalLayout_14);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        horizontalSpacer_23 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_23);

        Station = new QLabel(frame_5);
        Station->setObjectName("Station");

        horizontalLayout_12->addWidget(Station);

        horizontalSpacer_24 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_24);


        verticalLayout_5->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        horizontalSpacer_25 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_25);

        stationPriorityComboBox = new QComboBox(frame_5);
        stationPriorityComboBox->setObjectName("stationPriorityComboBox");

        horizontalLayout_13->addWidget(stationPriorityComboBox);

        horizontalSpacer_26 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_26);


        verticalLayout_5->addLayout(horizontalLayout_13);


        horizontalLayout_17->addWidget(frame_5);

        frame_2 = new QFrame(frame_6);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_11);

        transmitterLabel = new QLabel(frame_2);
        transmitterLabel->setObjectName("transmitterLabel");

        horizontalLayout_6->addWidget(transmitterLabel);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_12);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        transmitterPortNameComboBox = new QComboBox(frame_2);
        transmitterPortNameComboBox->setObjectName("transmitterPortNameComboBox");

        horizontalLayout_4->addWidget(transmitterPortNameComboBox);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);


        verticalLayout_2->addLayout(horizontalLayout_4);


        horizontalLayout_17->addWidget(frame_2);


        verticalLayout_6->addLayout(horizontalLayout_17);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        configButton = new QPushButton(frame_6);
        configButton->setObjectName("configButton");

        horizontalLayout_3->addWidget(configButton);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        verticalLayout_6->addLayout(horizontalLayout_3);


        verticalLayout_7->addWidget(frame_6);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        frame_3 = new QFrame(StationView);
        frame_3->setObjectName("frame_3");
        frame_3->setFrameShape(QFrame::Shape::StyledPanel);
        frame_3->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_3);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_15);

        label = new QLabel(frame_3);
        label->setObjectName("label");

        horizontalLayout_8->addWidget(label);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_16);


        verticalLayout_3->addLayout(horizontalLayout_8);

        receiveTextEdit = new QTextEdit(frame_3);
        receiveTextEdit->setObjectName("receiveTextEdit");
        receiveTextEdit->setEnabled(false);

        verticalLayout_3->addWidget(receiveTextEdit);


        horizontalLayout_16->addWidget(frame_3);

        horizontalSpacer_31 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_31);

        frame_4 = new QFrame(StationView);
        frame_4->setObjectName("frame_4");
        frame_4->setFrameShape(QFrame::Shape::StyledPanel);
        frame_4->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_4);
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_17);

        label_2 = new QLabel(frame_4);
        label_2->setObjectName("label_2");

        horizontalLayout_9->addWidget(label_2);

        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_18);


        verticalLayout_4->addLayout(horizontalLayout_9);

        transmitTextEdit = new QTextEdit(frame_4);
        transmitTextEdit->setObjectName("transmitTextEdit");
        transmitTextEdit->setEnabled(false);

        verticalLayout_4->addWidget(transmitTextEdit);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_19);

        transmitButton = new QPushButton(frame_4);
        transmitButton->setObjectName("transmitButton");

        horizontalLayout_10->addWidget(transmitButton);

        horizontalSpacer_20 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_20);


        verticalLayout_4->addLayout(horizontalLayout_10);


        horizontalLayout_16->addWidget(frame_4);


        verticalLayout_7->addLayout(horizontalLayout_16);


        retranslateUi(StationView);

        QMetaObject::connectSlotsByName(StationView);
    } // setupUi

    void retranslateUi(QWidget *StationView)
    {
        StationView->setWindowTitle(QCoreApplication::translate("StationView", "Form", nullptr));
        stationLabel->setText(QCoreApplication::translate("StationView", "Station", nullptr));
        configurationLabel->setText(QCoreApplication::translate("StationView", "Configuration", nullptr));
        receiverLabel->setText(QCoreApplication::translate("StationView", "Receiver port", nullptr));
        stationNumber->setText(QCoreApplication::translate("StationView", "Station number", nullptr));
        Station->setText(QCoreApplication::translate("StationView", "Station priority", nullptr));
        transmitterLabel->setText(QCoreApplication::translate("StationView", "Transmitter port", nullptr));
        configButton->setText(QCoreApplication::translate("StationView", "Configurate", nullptr));
        label->setText(QCoreApplication::translate("StationView", "Data received:", nullptr));
        label_2->setText(QCoreApplication::translate("StationView", "Enter data:", nullptr));
        transmitButton->setText(QCoreApplication::translate("StationView", "Send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StationView: public Ui_StationView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATIONVIEW_H
