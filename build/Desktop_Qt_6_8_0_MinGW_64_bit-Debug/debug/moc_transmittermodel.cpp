/****************************************************************************
** Meta object code from reading C++ file 'transmittermodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../transmitter/model/transmittermodel.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'transmittermodel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSTransmitterModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSTransmitterModelENDCLASS = QtMocHelpers::stringData(
    "TransmitterModel",
    "configurePort",
    "",
    "portName",
    "transmitData",
    "data",
    "uint8_t",
    "sourceAddress",
    "destinationAddress",
    "priority",
    "reservation",
    "isToken",
    "monitorBit"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSTransmitterModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   62,    2, 0x0a,    1 /* Public */,
       4,    7,   65,    2, 0x0a,    3 /* Public */,
       4,    6,   80,    2, 0x2a,   11 /* Public | MethodCloned */,
       4,    5,   93,    2, 0x2a,   18 /* Public | MethodCloned */,
       4,    4,  104,    2, 0x2a,   24 /* Public | MethodCloned */,
       4,    3,  113,    2, 0x2a,   29 /* Public | MethodCloned */,
       4,    2,  120,    2, 0x2a,   33 /* Public | MethodCloned */,
       4,    1,  125,    2, 0x2a,   36 /* Public | MethodCloned */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QByteArray, 0x80000000 | 6, 0x80000000 | 6, 0x80000000 | 6, 0x80000000 | 6, 0x80000000 | 6, 0x80000000 | 6,    5,    7,    8,    9,   10,   11,   12,
    QMetaType::Void, QMetaType::QByteArray, 0x80000000 | 6, 0x80000000 | 6, 0x80000000 | 6, 0x80000000 | 6, 0x80000000 | 6,    5,    7,    8,    9,   10,   11,
    QMetaType::Void, QMetaType::QByteArray, 0x80000000 | 6, 0x80000000 | 6, 0x80000000 | 6, 0x80000000 | 6,    5,    7,    8,    9,   10,
    QMetaType::Void, QMetaType::QByteArray, 0x80000000 | 6, 0x80000000 | 6, 0x80000000 | 6,    5,    7,    8,    9,
    QMetaType::Void, QMetaType::QByteArray, 0x80000000 | 6, 0x80000000 | 6,    5,    7,    8,
    QMetaType::Void, QMetaType::QByteArray, 0x80000000 | 6,    5,    7,
    QMetaType::Void, QMetaType::QByteArray,    5,

       0        // eod
};

Q_CONSTINIT const QMetaObject TransmitterModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSTransmitterModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTransmitterModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSTransmitterModelENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TransmitterModel, std::true_type>,
        // method 'configurePort'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'transmitData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>,
        // method 'transmitData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>,
        // method 'transmitData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>,
        // method 'transmitData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>,
        // method 'transmitData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>,
        // method 'transmitData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>,
        // method 'transmitData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>
    >,
    nullptr
} };

void TransmitterModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TransmitterModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->configurePort((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->transmitData((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[7]))); break;
        case 2: _t->transmitData((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[6]))); break;
        case 3: _t->transmitData((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[5]))); break;
        case 4: _t->transmitData((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[4]))); break;
        case 5: _t->transmitData((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[3]))); break;
        case 6: _t->transmitData((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[2]))); break;
        case 7: _t->transmitData((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *TransmitterModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TransmitterModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTransmitterModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TransmitterModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
