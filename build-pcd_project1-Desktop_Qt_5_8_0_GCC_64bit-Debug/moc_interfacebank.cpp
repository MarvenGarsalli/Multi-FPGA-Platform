/****************************************************************************
** Meta object code from reading C++ file 'interfacebank.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../pcd_project1/interfacebank.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'interfacebank.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_InterfaceBank_t {
    QByteArrayData data[13];
    char stringdata0[220];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InterfaceBank_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InterfaceBank_t qt_meta_stringdata_InterfaceBank = {
    {
QT_MOC_LITERAL(0, 0, 13), // "InterfaceBank"
QT_MOC_LITERAL(1, 14, 10), // "bankSignal"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 20), // "QVector<typeDefBank>"
QT_MOC_LITERAL(4, 47, 1), // "b"
QT_MOC_LITERAL(5, 49, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(6, 73, 19), // "on_clearBtn_clicked"
QT_MOC_LITERAL(7, 93, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(8, 117, 22), // "on_nbBank_valueChanged"
QT_MOC_LITERAL(9, 140, 4), // "arg1"
QT_MOC_LITERAL(10, 145, 23), // "on_addInterBank_clicked"
QT_MOC_LITERAL(11, 169, 28), // "on_InterfaceName_textChanged"
QT_MOC_LITERAL(12, 198, 21) // "on_pushButton_clicked"

    },
    "InterfaceBank\0bankSignal\0\0"
    "QVector<typeDefBank>\0b\0on_pushButton_3_clicked\0"
    "on_clearBtn_clicked\0on_pushButton_2_clicked\0"
    "on_nbBank_valueChanged\0arg1\0"
    "on_addInterBank_clicked\0"
    "on_InterfaceName_textChanged\0"
    "on_pushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InterfaceBank[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    1,   60,    2, 0x08 /* Private */,
      10,    0,   63,    2, 0x08 /* Private */,
      11,    1,   64,    2, 0x08 /* Private */,
      12,    0,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,

       0        // eod
};

void InterfaceBank::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        InterfaceBank *_t = static_cast<InterfaceBank *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->bankSignal((*reinterpret_cast< QVector<typeDefBank>(*)>(_a[1]))); break;
        case 1: _t->on_pushButton_3_clicked(); break;
        case 2: _t->on_clearBtn_clicked(); break;
        case 3: _t->on_pushButton_2_clicked(); break;
        case 4: _t->on_nbBank_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_addInterBank_clicked(); break;
        case 6: _t->on_InterfaceName_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_pushButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (InterfaceBank::*_t)(QVector<typeDefBank> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InterfaceBank::bankSignal)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject InterfaceBank::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_InterfaceBank.data,
      qt_meta_data_InterfaceBank,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *InterfaceBank::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InterfaceBank::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_InterfaceBank.stringdata0))
        return static_cast<void*>(const_cast< InterfaceBank*>(this));
    return QDialog::qt_metacast(_clname);
}

int InterfaceBank::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void InterfaceBank::bankSignal(QVector<typeDefBank> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
