/****************************************************************************
** Meta object code from reading C++ file 'stationview.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../station/view/stationview.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stationview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSStationViewENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSStationViewENDCLASS = QtMocHelpers::stringData(
    "StationView",
    "configureTransmitter",
    "",
    "portName",
    "configureReceiver",
    "sendData",
    "data",
    "source",
    "destination",
    "priority",
    "selectedPriorityLevel",
    "uint8_t",
    "level",
    "calculatedTotalStations",
    "totalStations",
    "onCycleButtonClicked",
    "selectedMonitor",
    "isMonitore",
    "selectedStationNumber",
    "number",
    "displayReceivedData"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSStationViewENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   68,    2, 0x06,    1 /* Public */,
       4,    1,   71,    2, 0x06,    3 /* Public */,
       5,    4,   74,    2, 0x06,    5 /* Public */,
      10,    1,   83,    2, 0x06,   10 /* Public */,
      13,    1,   86,    2, 0x06,   12 /* Public */,
      15,    0,   89,    2, 0x06,   14 /* Public */,
      16,    1,   90,    2, 0x06,   15 /* Public */,
      18,    1,   93,    2, 0x06,   17 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      20,    1,   96,    2, 0x0a,   19 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::UChar, QMetaType::UChar, QMetaType::UChar,    6,    7,    8,    9,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, 0x80000000 | 11,   19,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray,    6,

       0        // eod
};

Q_CONSTINIT const QMetaObject StationView::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSStationViewENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSStationViewENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSStationViewENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<StationView, std::true_type>,
        // method 'configureTransmitter'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'configureReceiver'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'sendData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        QtPrivate::TypeAndForceComplete<unsigned char, std::false_type>,
        QtPrivate::TypeAndForceComplete<unsigned char, std::false_type>,
        QtPrivate::TypeAndForceComplete<unsigned char, std::false_type>,
        // method 'selectedPriorityLevel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>,
        // method 'calculatedTotalStations'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>,
        // method 'onCycleButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'selectedMonitor'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'selectedStationNumber'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>,
        // method 'displayReceivedData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>
    >,
    nullptr
} };

void StationView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StationView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->configureTransmitter((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->configureReceiver((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->sendData((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<uchar>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<uchar>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<uchar>>(_a[4]))); break;
        case 3: _t->selectedPriorityLevel((*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[1]))); break;
        case 4: _t->calculatedTotalStations((*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[1]))); break;
        case 5: _t->onCycleButtonClicked(); break;
        case 6: _t->selectedMonitor((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->selectedStationNumber((*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[1]))); break;
        case 8: _t->displayReceivedData((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (StationView::*)(const QString & );
            if (_t _q_method = &StationView::configureTransmitter; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (StationView::*)(const QString & );
            if (_t _q_method = &StationView::configureReceiver; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (StationView::*)(const QByteArray & , unsigned char , unsigned char , unsigned char );
            if (_t _q_method = &StationView::sendData; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (StationView::*)(uint8_t );
            if (_t _q_method = &StationView::selectedPriorityLevel; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (StationView::*)(uint8_t );
            if (_t _q_method = &StationView::calculatedTotalStations; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (StationView::*)();
            if (_t _q_method = &StationView::onCycleButtonClicked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (StationView::*)(bool );
            if (_t _q_method = &StationView::selectedMonitor; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (StationView::*)(uint8_t );
            if (_t _q_method = &StationView::selectedStationNumber; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
    }
}

const QMetaObject *StationView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StationView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSStationViewENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int StationView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void StationView::configureTransmitter(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void StationView::configureReceiver(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void StationView::sendData(const QByteArray & _t1, unsigned char _t2, unsigned char _t3, unsigned char _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void StationView::selectedPriorityLevel(uint8_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void StationView::calculatedTotalStations(uint8_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void StationView::onCycleButtonClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void StationView::selectedMonitor(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void StationView::selectedStationNumber(uint8_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
