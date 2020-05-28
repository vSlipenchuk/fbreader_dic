/****************************************************************************
** Meta object code from reading C++ file 'ZLQtApplicationWindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ZLQtApplicationWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ZLQtApplicationWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ZLQtApplicationWindow[] = {

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
      23,   22,   22,   22, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ZLQtApplicationWindow[] = {
    "ZLQtApplicationWindow\0\0onRefresh()\0"
};

void ZLQtApplicationWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ZLQtApplicationWindow *_t = static_cast<ZLQtApplicationWindow *>(_o);
        switch (_id) {
        case 0: _t->onRefresh(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ZLQtApplicationWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ZLQtApplicationWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ZLQtApplicationWindow,
      qt_meta_data_ZLQtApplicationWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ZLQtApplicationWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ZLQtApplicationWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ZLQtApplicationWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ZLQtApplicationWindow))
        return static_cast<void*>(const_cast< ZLQtApplicationWindow*>(this));
    if (!strcmp(_clname, "ZLDesktopApplicationWindow"))
        return static_cast< ZLDesktopApplicationWindow*>(const_cast< ZLQtApplicationWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int ZLQtApplicationWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_ZLQtToolBarAction[] = {

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
      19,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ZLQtToolBarAction[] = {
    "ZLQtToolBarAction\0\0onActivated()\0"
};

void ZLQtToolBarAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ZLQtToolBarAction *_t = static_cast<ZLQtToolBarAction *>(_o);
        switch (_id) {
        case 0: _t->onActivated(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ZLQtToolBarAction::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ZLQtToolBarAction::staticMetaObject = {
    { &QAction::staticMetaObject, qt_meta_stringdata_ZLQtToolBarAction,
      qt_meta_data_ZLQtToolBarAction, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ZLQtToolBarAction::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ZLQtToolBarAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ZLQtToolBarAction::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ZLQtToolBarAction))
        return static_cast<void*>(const_cast< ZLQtToolBarAction*>(this));
    return QAction::qt_metacast(_clname);
}

int ZLQtToolBarAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAction::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_ZLQtRunPopupAction[] = {

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
      20,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ZLQtRunPopupAction[] = {
    "ZLQtRunPopupAction\0\0onActivated()\0"
};

void ZLQtRunPopupAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ZLQtRunPopupAction *_t = static_cast<ZLQtRunPopupAction *>(_o);
        switch (_id) {
        case 0: _t->onActivated(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ZLQtRunPopupAction::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ZLQtRunPopupAction::staticMetaObject = {
    { &QAction::staticMetaObject, qt_meta_stringdata_ZLQtRunPopupAction,
      qt_meta_data_ZLQtRunPopupAction, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ZLQtRunPopupAction::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ZLQtRunPopupAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ZLQtRunPopupAction::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ZLQtRunPopupAction))
        return static_cast<void*>(const_cast< ZLQtRunPopupAction*>(this));
    return QAction::qt_metacast(_clname);
}

int ZLQtRunPopupAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAction::qt_metacall(_c, _id, _a);
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
