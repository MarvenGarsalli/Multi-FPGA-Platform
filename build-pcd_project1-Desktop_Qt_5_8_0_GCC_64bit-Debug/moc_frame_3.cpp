/****************************************************************************
** Meta object code from reading C++ file 'frame_3.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../pcd_project1/frame_3.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'frame_3.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Frame_3_t {
    QByteArrayData data[14];
    char stringdata0[103];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Frame_3_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Frame_3_t qt_meta_stringdata_Frame_3 = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Frame_3"
QT_MOC_LITERAL(1, 8, 5), // "tapa1"
QT_MOC_LITERAL(2, 14, 0), // ""
QT_MOC_LITERAL(3, 15, 12), // "typeDefClock"
QT_MOC_LITERAL(4, 28, 1), // "t"
QT_MOC_LITERAL(5, 30, 12), // "typeDefReset"
QT_MOC_LITERAL(6, 43, 3), // "res"
QT_MOC_LITERAL(7, 47, 5), // "tapa2"
QT_MOC_LITERAL(8, 53, 5), // "tapa3"
QT_MOC_LITERAL(9, 59, 6), // "langa1"
QT_MOC_LITERAL(10, 66, 20), // "QVector<typeDefBank>"
QT_MOC_LITERAL(11, 87, 1), // "b"
QT_MOC_LITERAL(12, 89, 6), // "langa2"
QT_MOC_LITERAL(13, 96, 6) // "langa3"

    },
    "Frame_3\0tapa1\0\0typeDefClock\0t\0"
    "typeDefReset\0res\0tapa2\0tapa3\0langa1\0"
    "QVector<typeDefBank>\0b\0langa2\0langa3"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Frame_3[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x08 /* Private */,
       7,    2,   49,    2, 0x08 /* Private */,
       8,    2,   54,    2, 0x08 /* Private */,
       9,    1,   59,    2, 0x08 /* Private */,
      12,    1,   62,    2, 0x08 /* Private */,
      13,    1,   65,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 10,   11,

       0        // eod
};

void Frame_3::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Frame_3 *_t = static_cast<Frame_3 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->tapa1((*reinterpret_cast< typeDefClock(*)>(_a[1])),(*reinterpret_cast< typeDefReset(*)>(_a[2]))); break;
        case 1: _t->tapa2((*reinterpret_cast< typeDefClock(*)>(_a[1])),(*reinterpret_cast< typeDefReset(*)>(_a[2]))); break;
        case 2: _t->tapa3((*reinterpret_cast< typeDefClock(*)>(_a[1])),(*reinterpret_cast< typeDefReset(*)>(_a[2]))); break;
        case 3: _t->langa1((*reinterpret_cast< QVector<typeDefBank>(*)>(_a[1]))); break;
        case 4: _t->langa2((*reinterpret_cast< QVector<typeDefBank>(*)>(_a[1]))); break;
        case 5: _t->langa3((*reinterpret_cast< QVector<typeDefBank>(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Frame_3::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_Frame_3.data,
      qt_meta_data_Frame_3,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Frame_3::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Frame_3::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Frame_3.stringdata0))
        return static_cast<void*>(const_cast< Frame_3*>(this));
    if (!strcmp(_clname, "MainFrame"))
        return static_cast< MainFrame*>(const_cast< Frame_3*>(this));
    return QFrame::qt_metacast(_clname);
}

int Frame_3::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
