/****************************************************************************
** Meta object code from reading C++ file 'PlanStepView.h'
**
** Created: Tue Mar 20 01:13:00 2012
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../PlanStepView.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PlanStepView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PlanStepView[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      21,   14,   13,   13, 0x08,
      75,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PlanStepView[] = {
    "PlanStepView\0\0p_item\0"
    "on_tblParameters_itemDoubleClicked(QTableWidgetItem*)\0"
    "EditSelectedParameter()\0"
};

const QMetaObject PlanStepView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PlanStepView,
      qt_meta_data_PlanStepView, 0 }
};

const QMetaObject *PlanStepView::metaObject() const
{
    return &staticMetaObject;
}

void *PlanStepView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PlanStepView))
        return static_cast<void*>(const_cast< PlanStepView*>(this));
    return QWidget::qt_metacast(_clname);
}

int PlanStepView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_tblParameters_itemDoubleClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 1: EditSelectedParameter(); break;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
