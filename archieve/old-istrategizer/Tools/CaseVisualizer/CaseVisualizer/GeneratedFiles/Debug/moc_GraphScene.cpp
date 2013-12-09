/****************************************************************************
** Meta object code from reading C++ file 'GraphScene.h'
**
** Created: Tue Mar 20 01:13:01 2012
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../GraphScene.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GraphScene.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GraphScene[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      19,   12,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      48,   11,   11,   11, 0x08,
      61,   11,   11,   11, 0x08,
      76,   11,   11,   11, 0x08,
      86,   11,   11,   11, 0x08,
      99,   11,   11,   11, 0x08,
     112,   11,   11,   11, 0x08,
     129,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_GraphScene[] = {
    "GraphScene\0\0p_node\0NodeSelected(GraphNodeView*)\0"
    "UpdateView()\0NodeSelected()\0NewNode()\0"
    "DeleteNode()\0DeleteEdge()\0DisconnectNode()\0"
    "DuplicateNode()\0"
};

const QMetaObject GraphScene::staticMetaObject = {
    { &QGraphicsScene::staticMetaObject, qt_meta_stringdata_GraphScene,
      qt_meta_data_GraphScene, 0 }
};

const QMetaObject *GraphScene::metaObject() const
{
    return &staticMetaObject;
}

void *GraphScene::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GraphScene))
        return static_cast<void*>(const_cast< GraphScene*>(this));
    return QGraphicsScene::qt_metacast(_clname);
}

int GraphScene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsScene::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: NodeSelected((*reinterpret_cast< GraphNodeView*(*)>(_a[1]))); break;
        case 1: UpdateView(); break;
        case 2: NodeSelected(); break;
        case 3: NewNode(); break;
        case 4: DeleteNode(); break;
        case 5: DeleteEdge(); break;
        case 6: DisconnectNode(); break;
        case 7: DuplicateNode(); break;
        }
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void GraphScene::NodeSelected(GraphNodeView * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
