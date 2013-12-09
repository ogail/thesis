/****************************************************************************
** Meta object code from reading C++ file 'CaseView.h'
**
** Created: Tue Mar 20 01:13:01 2012
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../CaseView.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CaseView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CaseView[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      25,   10,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CaseView[] = {
    "CaseView\0\0p_row,p_column\0"
    "OnCellChanged(int,int)\0"
};

const QMetaObject CaseView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CaseView,
      qt_meta_data_CaseView, 0 }
};

const QMetaObject *CaseView::metaObject() const
{
    return &staticMetaObject;
}

void *CaseView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CaseView))
        return static_cast<void*>(const_cast< CaseView*>(this));
    return QWidget::qt_metacast(_clname);
}

int CaseView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: OnCellChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
