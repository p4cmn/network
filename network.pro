QT += core gui serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++21

SOURCES += \
    main.cpp \
    manager/controller/maincontroller.cpp \
    manager/model/mainmodel.cpp \
    manager/view/mainwindow.cpp \
    processing/csmacdprocessing.cpp \
    processing/fcsoperations.cpp \
    processing/frameprocessing.cpp \
    receiver/controller/receivercontroller.cpp \
    receiver/model/receivermodel.cpp \
    receiver/view/receiverview.cpp \
    station/controller/stationcontroller.cpp \
    station/model/stationmodel.cpp \
    station/view/stationview.cpp \
    transmitter/controller/transmittercontroller.cpp \
    transmitter/model/transmittermodel.cpp \
    transmitter/view/transmitterview.cpp

HEADERS += \
    manager/controller/maincontroller.h \
    manager/model/mainmodel.h \
    manager/view/mainwindow.h \
    processing/csmacdprocessing.h \
    processing/fcsoperations.h \
    processing/frameprocessing.h \
    receiver/controller/receivercontroller.h \
    receiver/model/receivermodel.h \
    receiver/view/receiverview.h \
    station/controller/stationcontroller.h \
    station/model/stationmodel.h \
    station/view/stationview.h \
    transmitter/controller/transmittercontroller.h \
    transmitter/model/transmittermodel.h \
    transmitter/view/transmitterview.h

FORMS += \
    manager/view/mainwindow.ui \
    receiver/view/receiverview.ui \
    station/view/stationview.ui \
    transmitter/view/transmitterview.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    .gitignore \
    README.md
