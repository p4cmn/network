/****************************************************************************
** Meta object code from reading C++ file 'stationmodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../station/model/stationmodel.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stationmodel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSStationModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSStationModelENDCLASS = QtMocHelpers::stringData(
    "StationModel",
    "dataReceived",
    "",
    "data",
    "setPriorityLevel",
    "uint8_t",
    "level",
    "setTotalStations",
    "totalStations",
    "setIsMonitore",
    "isMonitore",
    "setSourceAddress",
    "address",
    "handleCycle",
    "prepareData",
    "sourceAddress",
    "destinationAddress",
    "priority",
    "transmitDataCyclicaly",
    "Frame",
    "frame"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSStationModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   62,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    1,   65,    2, 0x0a,    3 /* Public */,
       7,    1,   68,    2, 0x0a,    5 /* Public */,
       9,    1,   71,    2, 0x0a,    7 /* Public */,
      11,    1,   74,    2, 0x0a,    9 /* Public */,
      13,    0,   77,    2, 0x0a,   11 /* Public */,
      14,    4,   78,    2, 0x0a,   12 /* Public */,
      18,    1,   87,    2, 0x08,   17 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    8,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, 0x80000000 | 5,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray, 0x80000000 | 5, 0x80000000 | 5, 0x80000000 | 5,    3,   15,   16,   17,
    QMetaType::Void, 0x80000000 | 19,   20,

       0        // eod
};

Q_CONSTINIT const QMetaObject StationModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSStationModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSStationModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSStationModelENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<StationModel, std::true_type>,
        // method 'dataReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        // method 'setPriorityLevel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>,
        // method 'setTotalStations'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>,
        // method 'setIsMonitore'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setSourceAddress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>,
        // method 'handleCycle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'prepareData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>,
        // method 'transmitDataCyclicaly'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Frame &, std::false_type>
    >,
    nullptr
} };

void StationModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StationModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->dataReceived((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 1: _t->setPriorityLevel((*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[1]))); break;
        case 2: _t->setTotalStations((*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[1]))); break;
        case 3: _t->setIsMonitore((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->setSourceAddress((*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[1]))); break;
        case 5: _t->handleCycle(); break;
        case 6: _t->prepareData((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[4]))); break;
        case 7: _t->transmitDataCyclicaly((*reinterpret_cast< std::add_pointer_t<Frame>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (StationModel::*)(const QByteArray & );
            if (_t _q_method = &StationModel::dataReceived; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *StationModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StationModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSStationModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int StationModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void StationModel::dataReceived(const QByteArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
