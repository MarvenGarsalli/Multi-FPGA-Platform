/****************************************************************************
** Meta object code from reading C++ file 'clock_and_reset_model.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../pcd_project1/clock_and_reset_model.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'clock_and_reset_model.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Clock_and_Reset_model_t {
    QByteArrayData data[20];
    char stringdata0[300];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Clock_and_Reset_model_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Clock_and_Reset_model_t qt_meta_stringdata_Clock_and_Reset_model = {
    {
QT_MOC_LITERAL(0, 0, 21), // "Clock_and_Reset_model"
QT_MOC_LITERAL(1, 22, 17), // "defineClock_Reset"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 12), // "typeDefClock"
QT_MOC_LITERAL(4, 54, 10), // "clockModel"
QT_MOC_LITERAL(5, 65, 12), // "typeDefReset"
QT_MOC_LITERAL(6, 78, 10), // "resetModel"
QT_MOC_LITERAL(7, 89, 11), // "definedUnit"
QT_MOC_LITERAL(8, 101, 1), // "c"
QT_MOC_LITERAL(9, 103, 1), // "r"
QT_MOC_LITERAL(10, 105, 1), // "s"
QT_MOC_LITERAL(11, 107, 26), // "on_addclocknetwork_clicked"
QT_MOC_LITERAL(12, 134, 26), // "on_addresetnetwork_clicked"
QT_MOC_LITERAL(13, 161, 30), // "on_fpgaRef_currentIndexChanged"
QT_MOC_LITERAL(14, 192, 5), // "index"
QT_MOC_LITERAL(15, 198, 24), // "on_clearClockBtn_clicked"
QT_MOC_LITERAL(16, 223, 24), // "on_clearResetBtn_clicked"
QT_MOC_LITERAL(17, 248, 16), // "on_okBtn_clicked"
QT_MOC_LITERAL(18, 265, 29), // "on_fpgaRef_currentTextChanged"
QT_MOC_LITERAL(19, 295, 4) // "arg1"

    },
    "Clock_and_Reset_model\0defineClock_Reset\0"
    "\0typeDefClock\0clockModel\0typeDefReset\0"
    "resetModel\0definedUnit\0c\0r\0s\0"
    "on_addclocknetwork_clicked\0"
    "on_addresetnetwork_clicked\0"
    "on_fpgaRef_currentIndexChanged\0index\0"
    "on_clearClockBtn_clicked\0"
    "on_clearResetBtn_clicked\0on_okBtn_clicked\0"
    "on_fpgaRef_currentTextChanged\0arg1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Clock_and_Reset_model[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   59,    2, 0x06 /* Public */,
       7,    3,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   71,    2, 0x08 /* Private */,
      12,    0,   72,    2, 0x08 /* Private */,
      13,    1,   73,    2, 0x08 /* Private */,
      15,    0,   76,    2, 0x08 /* Private */,
      16,    0,   77,    2, 0x08 /* Private */,
      17,    0,   78,    2, 0x08 /* Private */,
      18,    1,   79,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, QMetaType::QString,    8,    9,   10,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   19,

       0        // eod
};

void Clock_and_Reset_model::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Clock_and_Reset_model *_t = static_cast<Clock_and_Reset_model *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->defineClock_Reset((*reinterpret_cast< typeDefClock(*)>(_a[1])),(*reinterpret_cast< typeDefReset(*)>(_a[2]))); break;
        case 1: _t->definedUnit((*reinterpret_cast< typeDefClock(*)>(_a[1])),(*reinterpret_cast< typeDefReset(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 2: _t->on_addclocknetwork_clicked(); break;
        case 3: _t->on_addresetnetwork_clicked(); break;
        case 4: _t->on_fpgaRef_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_clearClockBtn_clicked(); break;
        case 6: _t->on_clearResetBtn_clicked(); break;
        case 7: _t->on_okBtn_clicked(); break;
        case 8: _t->on_fpgaRef_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Clock_and_Reset_model::*_t)(typeDefClock , typeDefReset );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Clock_and_Reset_model::defineClock_Reset)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Clock_and_Reset_model::*_t)(typeDefClock , typeDefReset , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Clock_and_Reset_model::definedUnit)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject Clock_and_Reset_model::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_Clock_and_Reset_model.data,
      qt_meta_data_Clock_and_Reset_model,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Clock_and_Reset_model::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Clock_and_Reset_model::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Clock_and_Reset_model.stringdata0))
        return static_cast<void*>(const_cast< Clock_and_Reset_model*>(this));
    return QFrame::qt_metacast(_clname);
}

int Clock_and_Reset_model::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void Clock_and_Reset_model::defineClock_Reset(typeDefClock _t1, typeDefReset _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Clock_and_Reset_model::definedUnit(typeDefClock _t1, typeDefReset _t2, QString _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
