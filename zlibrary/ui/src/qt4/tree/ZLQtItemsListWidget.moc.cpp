/****************************************************************************
** Meta object code from reading C++ file 'ZLQtItemsListWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ZLQtItemsListWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ZLQtItemsListWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ZLQtItemsListWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      26,   21,   20,   20, 0x05,
      53,   21,   20,   20, 0x05,
      86,   20,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
     105,   21,   20,   20, 0x0a,
     140,  134,   20,   20, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ZLQtItemsListWidget[] = {
    "ZLQtItemsListWidget\0\0item\0"
    "nodeClicked(ZLQtTreeItem*)\0"
    "nodeDoubleClicked(ZLQtTreeItem*)\0"
    "wantMoreChildren()\0onNodeClicked(ZLQtTreeItem*)\0"
    "value\0onSliderMoved(int)\0"
};

void ZLQtItemsListWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ZLQtItemsListWidget *_t = static_cast<ZLQtItemsListWidget *>(_o);
        switch (_id) {
        case 0: _t->nodeClicked((*reinterpret_cast< ZLQtTreeItem*(*)>(_a[1]))); break;
        case 1: _t->nodeDoubleClicked((*reinterpret_cast< ZLQtTreeItem*(*)>(_a[1]))); break;
        case 2: _t->wantMoreChildren(); break;
        case 3: _t->onNodeClicked((*reinterpret_cast< ZLQtTreeItem*(*)>(_a[1]))); break;
        case 4: _t->onSliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ZLQtItemsListWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ZLQtItemsListWidget::staticMetaObject = {
    { &QScrollArea::staticMetaObject, qt_meta_stringdata_ZLQtItemsListWidget,
      qt_meta_data_ZLQtItemsListWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ZLQtItemsListWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ZLQtItemsListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ZLQtItemsListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ZLQtItemsListWidget))
        return static_cast<void*>(const_cast< ZLQtItemsListWidget*>(this));
    return QScrollArea::qt_metacast(_clname);
}

int ZLQtItemsListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void ZLQtItemsListWidget::nodeClicked(ZLQtTreeItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ZLQtItemsListWidget::nodeDoubleClicked(ZLQtTreeItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ZLQtItemsListWidget::wantMoreChildren()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
static const uint qt_meta_data_ZLQtTreeItem[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   14,   13,   13, 0x05,
      42,   14,   13,   13, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_ZLQtTreeItem[] = {
    "ZLQtTreeItem\0\0item\0clicked(ZLQtTreeItem*)\0"
    "doubleClicked(ZLQtTreeItem*)\0"
};

void ZLQtTreeItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ZLQtTreeItem *_t = static_cast<ZLQtTreeItem *>(_o);
        switch (_id) {
        case 0: _t->clicked((*reinterpret_cast< ZLQtTreeItem*(*)>(_a[1]))); break;
        case 1: _t->doubleClicked((*reinterpret_cast< ZLQtTreeItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ZLQtTreeItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ZLQtTreeItem::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_ZLQtTreeItem,
      qt_meta_data_ZLQtTreeItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ZLQtTreeItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ZLQtTreeItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ZLQtTreeItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ZLQtTreeItem))
        return static_cast<void*>(const_cast< ZLQtTreeItem*>(this));
    return QFrame::qt_metacast(_clname);
}

int ZLQtTreeItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void ZLQtTreeItem::clicked(ZLQtTreeItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ZLQtTreeItem::doubleClicked(ZLQtTreeItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
