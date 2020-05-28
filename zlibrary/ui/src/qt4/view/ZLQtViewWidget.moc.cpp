/****************************************************************************
** Meta object code from reading C++ file 'ZLQtViewWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ZLQtViewWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ZLQtViewWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ZLQtViewWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   16,   15,   15, 0x08,
      49,   16,   15,   15, 0x08,
      78,   16,   15,   15, 0x08,
     107,   16,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ZLQtViewWidget[] = {
    "ZLQtViewWidget\0\0value\0onVerticalSliderMoved(int)\0"
    "onHorizontalSliderMoved(int)\0"
    "onVerticalSliderClicked(int)\0"
    "onHorizontalSliderClicked(int)\0"
};

void ZLQtViewWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ZLQtViewWidget *_t = static_cast<ZLQtViewWidget *>(_o);
        switch (_id) {
        case 0: _t->onVerticalSliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->onHorizontalSliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->onVerticalSliderClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->onHorizontalSliderClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ZLQtViewWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ZLQtViewWidget::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ZLQtViewWidget,
      qt_meta_data_ZLQtViewWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ZLQtViewWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ZLQtViewWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ZLQtViewWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ZLQtViewWidget))
        return static_cast<void*>(const_cast< ZLQtViewWidget*>(this));
    if (!strcmp(_clname, "ZLViewWidget"))
        return static_cast< ZLViewWidget*>(const_cast< ZLQtViewWidget*>(this));
    return QObject::qt_metacast(_clname);
}

int ZLQtViewWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
