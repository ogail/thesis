/****************************************************************************
** Meta object code from reading C++ file 'CaseVisualizer.h'
**
** Created: Tue Mar 20 01:13:01 2012
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../CaseVisualizer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CaseVisualizer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CaseVisualizer[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x08,
      42,   15,   15,   15, 0x08,
      77,   15,   15,   15, 0x08,
     104,   15,   15,   15, 0x08,
     128,   15,   15,   15, 0x08,
     176,   15,   15,   15, 0x08,
     201,   15,   15,   15, 0x08,
     227,   15,   15,   15, 0x08,
     253,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CaseVisualizer[] = {
    "CaseVisualizer\0\0on_actionShow_triggered()\0"
    "on_lstCases_itemSelectionChanged()\0"
    "on_btnDeleteCase_clicked()\0"
    "on_btnNewCase_clicked()\0"
    "on_lstCases_itemDoubleClicked(QListWidgetItem*)\0"
    "on_actionNew_triggered()\0"
    "on_actionSave_triggered()\0"
    "on_actionOpen_triggered()\0"
    "PointerGroupClicked(int)\0"
};

const QMetaObject CaseVisualizer::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_CaseVisualizer,
      qt_meta_data_CaseVisualizer, 0 }
};

const QMetaObject *CaseVisualizer::metaObject() const
{
    return &staticMetaObject;
}

void *CaseVisualizer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CaseVisualizer))
        return static_cast<void*>(const_cast< CaseVisualizer*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int CaseVisualizer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_actionShow_triggered(); break;
        case 1: on_lstCases_itemSelectionChanged(); break;
        case 2: on_btnDeleteCase_clicked(); break;
        case 3: on_btnNewCase_clicked(); break;
        case 4: on_lstCases_itemDoubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 5: on_actionNew_triggered(); break;
        case 6: on_actionSave_triggered(); break;
        case 7: on_actionOpen_triggered(); break;
        case 8: PointerGroupClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        }
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
