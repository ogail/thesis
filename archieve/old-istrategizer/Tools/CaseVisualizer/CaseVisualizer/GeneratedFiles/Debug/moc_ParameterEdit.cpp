/****************************************************************************
** Meta object code from reading C++ file 'ParameterEdit.h'
**
** Created: Tue Mar 20 01:13:00 2012
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ParameterEdit.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ParameterEdit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ParameterEdit[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x08,
      38,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ParameterEdit[] = {
    "ParameterEdit\0\0on_btnCancel_clicked()\0"
    "on_btnOK_clicked()\0"
};

const QMetaObject ParameterEdit::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ParameterEdit,
      qt_meta_data_ParameterEdit, 0 }
};

const QMetaObject *ParameterEdit::metaObject() const
{
    return &staticMetaObject;
}

void *ParameterEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ParameterEdit))
        return static_cast<void*>(const_cast< ParameterEdit*>(this));
    return QDialog::qt_metacast(_clname);
}

int ParameterEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_btnCancel_clicked(); break;
        case 1: on_btnOK_clicked(); break;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
