/****************************************************************************
** Meta object code from reading C++ file 'ChoosePlanStepDialog.h'
**
** Created: Tue Mar 20 01:13:01 2012
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ChoosePlanStepDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ChoosePlanStepDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ChoosePlanStepDialog[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      29,   22,   21,   21, 0x08,
      70,   21,   21,   21, 0x08,
      93,   21,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ChoosePlanStepDialog[] = {
    "ChoosePlanStepDialog\0\0p_item\0"
    "on_comboBox_currentIndexChanged(QString)\0"
    "on_btnCancel_clicked()\0on_btnOK_clicked()\0"
};

const QMetaObject ChoosePlanStepDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ChoosePlanStepDialog,
      qt_meta_data_ChoosePlanStepDialog, 0 }
};

const QMetaObject *ChoosePlanStepDialog::metaObject() const
{
    return &staticMetaObject;
}

void *ChoosePlanStepDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ChoosePlanStepDialog))
        return static_cast<void*>(const_cast< ChoosePlanStepDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ChoosePlanStepDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_comboBox_currentIndexChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: on_btnCancel_clicked(); break;
        case 2: on_btnOK_clicked(); break;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
