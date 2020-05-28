/****************************************************************************
** Meta object code from reading C++ file 'ZLQtPreviewWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ZLQtPreviewWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ZLQtPreviewWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ZLQtAbstractPageWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   23,   23,   23, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ZLQtAbstractPageWidget[] = {
    "ZLQtAbstractPageWidget\0\0onActionActivated()\0"
};

void ZLQtAbstractPageWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ZLQtAbstractPageWidget *_t = static_cast<ZLQtAbstractPageWidget *>(_o);
        switch (_id) {
        case 0: _t->onActionActivated(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ZLQtAbstractPageWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ZLQtAbstractPageWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ZLQtAbstractPageWidget,
      qt_meta_data_ZLQtAbstractPageWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ZLQtAbstractPageWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ZLQtAbstractPageWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ZLQtAbstractPageWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ZLQtAbstractPageWidget))
        return static_cast<void*>(const_cast< ZLQtAbstractPageWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int ZLQtAbstractPageWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_ZLQtButtonAction[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ZLQtButtonAction[] = {
    "ZLQtButtonAction\0\0onClicked()\0"
};

void ZLQtButtonAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ZLQtButtonAction *_t = static_cast<ZLQtButtonAction *>(_o);
        switch (_id) {
        case 0: _t->onClicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ZLQtButtonAction::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ZLQtButtonAction::staticMetaObject = {
    { &QPushButton::staticMetaObject, qt_meta_stringdata_ZLQtButtonAction,
      qt_meta_data_ZLQtButtonAction, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ZLQtButtonAction::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ZLQtButtonAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ZLQtButtonAction::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ZLQtButtonAction))
        return static_cast<void*>(const_cast< ZLQtButtonAction*>(this));
    return QPushButton::qt_metacast(_clname);
}

int ZLQtButtonAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
