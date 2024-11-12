/********************************************************************************
** Form generated from reading UI file 'transmitterview.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSMITTERVIEW_H
#define UI_TRANSMITTERVIEW_H

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

class Ui_TransmitterView
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_6;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_9;
    QComboBox *portNameComboBox;
    QSpacerItem *horizontalSpacer_10;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *configButton;
    QSpacerItem *horizontalSpacer_2;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label;
    QSpacerItem *horizontalSpacer_8;
    QTextEdit *transmitTextEdit;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *transmitButton;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QWidget *TransmitterView)
    {
        if (TransmitterView->objectName().isEmpty())
            TransmitterView->setObjectName("TransmitterView");
        TransmitterView->resize(300, 350);
        verticalLayout_3 = new QVBoxLayout(TransmitterView);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        label_2 = new QLabel(TransmitterView);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);


        verticalLayout_3->addLayout(horizontalLayout_2);

        frame = new QFrame(TransmitterView);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_9);

        portNameComboBox = new QComboBox(frame);
        portNameComboBox->setObjectName("portNameComboBox");

        horizontalLayout_5->addWidget(portNameComboBox);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_10);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        configButton = new QPushButton(frame);
        configButton->setObjectName("configButton");

        horizontalLayout_3->addWidget(configButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout_3->addWidget(frame);

        frame_2 = new QFrame(TransmitterView);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout = new QVBoxLayout(frame_2);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_7);

        label = new QLabel(frame_2);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_8);


        verticalLayout->addLayout(horizontalLayout);

        transmitTextEdit = new QTextEdit(frame_2);
        transmitTextEdit->setObjectName("transmitTextEdit");

        verticalLayout->addWidget(transmitTextEdit);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        transmitButton = new QPushButton(frame_2);
        transmitButton->setObjectName("transmitButton");

        horizontalLayout_4->addWidget(transmitButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_3->addWidget(frame_2);


        retranslateUi(TransmitterView);

        QMetaObject::connectSlotsByName(TransmitterView);
    } // setupUi

    void retranslateUi(QWidget *TransmitterView)
    {
        TransmitterView->setWindowTitle(QCoreApplication::translate("TransmitterView", "Transmitter", nullptr));
        label_2->setText(QCoreApplication::translate("TransmitterView", "Transmitter", nullptr));
        configButton->setText(QCoreApplication::translate("TransmitterView", "Configurate", nullptr));
        label->setText(QCoreApplication::translate("TransmitterView", "Enter message", nullptr));
        transmitButton->setText(QCoreApplication::translate("TransmitterView", "Send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TransmitterView: public Ui_TransmitterView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSMITTERVIEW_H
