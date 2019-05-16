/****************************************************************************
** Meta object code from reading C++ file 'register.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Leds_Cmake/register.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'register.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Register_t {
    QByteArrayData data[13];
    char stringdata0[221];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Register_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Register_t qt_meta_stringdata_Register = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Register"
QT_MOC_LITERAL(1, 9, 24), // "on__txtR_name_textEdited"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 4), // "arg1"
QT_MOC_LITERAL(4, 40, 26), // "on__txtR_LsName_textEdited"
QT_MOC_LITERAL(5, 67, 31), // "on__txtR_national_id_textEdited"
QT_MOC_LITERAL(6, 99, 25), // "on__txtR_usrnm_textEdited"
QT_MOC_LITERAL(7, 125, 25), // "on__txtR_psswd_textEdited"
QT_MOC_LITERAL(8, 151, 25), // "on__birthdate_dateChanged"
QT_MOC_LITERAL(9, 177, 4), // "date"
QT_MOC_LITERAL(10, 182, 21), // "on_buttonBox_accepted"
QT_MOC_LITERAL(11, 204, 13), // "calcular_edad"
QT_MOC_LITERAL(12, 218, 2) // "bd"

    },
    "Register\0on__txtR_name_textEdited\0\0"
    "arg1\0on__txtR_LsName_textEdited\0"
    "on__txtR_national_id_textEdited\0"
    "on__txtR_usrnm_textEdited\0"
    "on__txtR_psswd_textEdited\0"
    "on__birthdate_dateChanged\0date\0"
    "on_buttonBox_accepted\0calcular_edad\0"
    "bd"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Register[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x08 /* Private */,
       4,    1,   57,    2, 0x08 /* Private */,
       5,    1,   60,    2, 0x08 /* Private */,
       6,    1,   63,    2, 0x08 /* Private */,
       7,    1,   66,    2, 0x08 /* Private */,
       8,    1,   69,    2, 0x08 /* Private */,
      10,    0,   72,    2, 0x08 /* Private */,
      11,    1,   73,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QDate,    9,
    QMetaType::Void,
    QMetaType::Int, QMetaType::QDate,   12,

       0        // eod
};

void Register::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Register *_t = static_cast<Register *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on__txtR_name_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->on__txtR_LsName_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on__txtR_national_id_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on__txtR_usrnm_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on__txtR_psswd_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on__birthdate_dateChanged((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 6: _t->on_buttonBox_accepted(); break;
        case 7: { int _r = _t->calcular_edad((*reinterpret_cast< QDate(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject Register::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Register.data,
      qt_meta_data_Register,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Register::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Register::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Register.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Register::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
