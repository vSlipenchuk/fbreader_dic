/****************************************************************************
** Meta object code from reading C++ file 'ZLQtOptionView.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ZLQtOptionView.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ZLQtOptionView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BooleanOptionView[] = {

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

static const char qt_meta_stringdata_BooleanOptionView[] = {
    "BooleanOptionView\0\0onStateChanged(bool)\0"
};

void BooleanOptionView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BooleanOptionView *_t = static_cast<BooleanOptionView *>(_o);
        switch (_id) {
        case 0: _t->onStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData BooleanOptionView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BooleanOptionView::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_BooleanOptionView,
      qt_meta_data_BooleanOptionView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BooleanOptionView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BooleanOptionView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BooleanOptionView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BooleanOptionView))
        return static_cast<void*>(const_cast< BooleanOptionView*>(this));
    if (!strcmp(_clname, "ZLQtOptionView"))
        return static_cast< ZLQtOptionView*>(const_cast< BooleanOptionView*>(this));
    return QObject::qt_metacast(_clname);
}

int BooleanOptionView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_Boolean3OptionView[] = {

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

static const char qt_meta_stringdata_Boolean3OptionView[] = {
    "Boolean3OptionView\0\0onStateChanged(int)\0"
};

void Boolean3OptionView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Boolean3OptionView *_t = static_cast<Boolean3OptionView *>(_o);
        switch (_id) {
        case 0: _t->onStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Boolean3OptionView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Boolean3OptionView::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Boolean3OptionView,
      qt_meta_data_Boolean3OptionView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Boolean3OptionView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Boolean3OptionView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Boolean3OptionView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Boolean3OptionView))
        return static_cast<void*>(const_cast< Boolean3OptionView*>(this));
    if (!strcmp(_clname, "ZLQtOptionView"))
        return static_cast< ZLQtOptionView*>(const_cast< Boolean3OptionView*>(this));
    return QObject::qt_metacast(_clname);
}

int Boolean3OptionView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_StringOptionView[] = {

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
      24,   18,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_StringOptionView[] = {
    "StringOptionView\0\0value\0onValueEdited(QString)\0"
};

void StringOptionView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        StringOptionView *_t = static_cast<StringOptionView *>(_o);
        switch (_id) {
        case 0: _t->onValueEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData StringOptionView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject StringOptionView::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_StringOptionView,
      qt_meta_data_StringOptionView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &StringOptionView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *StringOptionView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *StringOptionView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StringOptionView))
        return static_cast<void*>(const_cast< StringOptionView*>(this));
    if (!strcmp(_clname, "ZLQtOptionView"))
        return static_cast< ZLQtOptionView*>(const_cast< StringOptionView*>(this));
    return QObject::qt_metacast(_clname);
}

int StringOptionView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_ComboOptionView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      23,   17,   16,   16, 0x08,
      50,   44,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ComboOptionView[] = {
    "ComboOptionView\0\0index\0onValueSelected(int)\0"
    "value\0onValueEdited(QString)\0"
};

void ComboOptionView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ComboOptionView *_t = static_cast<ComboOptionView *>(_o);
        switch (_id) {
        case 0: _t->onValueSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->onValueEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ComboOptionView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ComboOptionView::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ComboOptionView,
      qt_meta_data_ComboOptionView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ComboOptionView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ComboOptionView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ComboOptionView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ComboOptionView))
        return static_cast<void*>(const_cast< ComboOptionView*>(this));
    if (!strcmp(_clname, "ZLQtOptionView"))
        return static_cast< ZLQtOptionView*>(const_cast< ComboOptionView*>(this));
    return QObject::qt_metacast(_clname);
}

int ComboOptionView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_KeyOptionView[] = {

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
      15,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_KeyOptionView[] = {
    "KeyOptionView\0\0onValueChanged(int)\0"
};

void KeyOptionView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        KeyOptionView *_t = static_cast<KeyOptionView *>(_o);
        switch (_id) {
        case 0: _t->onValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData KeyOptionView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject KeyOptionView::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_KeyOptionView,
      qt_meta_data_KeyOptionView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &KeyOptionView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *KeyOptionView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *KeyOptionView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_KeyOptionView))
        return static_cast<void*>(const_cast< KeyOptionView*>(this));
    if (!strcmp(_clname, "ZLQtOptionView"))
        return static_cast< ZLQtOptionView*>(const_cast< KeyOptionView*>(this));
    return QObject::qt_metacast(_clname);
}

int KeyOptionView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_ColorOptionView[] = {

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
      17,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ColorOptionView[] = {
    "ColorOptionView\0\0onSliderMove(int)\0"
};

void ColorOptionView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ColorOptionView *_t = static_cast<ColorOptionView *>(_o);
        switch (_id) {
        case 0: _t->onSliderMove((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ColorOptionView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ColorOptionView::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ColorOptionView,
      qt_meta_data_ColorOptionView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ColorOptionView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ColorOptionView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ColorOptionView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ColorOptionView))
        return static_cast<void*>(const_cast< ColorOptionView*>(this));
    if (!strcmp(_clname, "ZLQtOptionView"))
        return static_cast< ZLQtOptionView*>(const_cast< ColorOptionView*>(this));
    return QObject::qt_metacast(_clname);
}

int ColorOptionView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
