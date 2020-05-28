/****************************************************************************
** Meta object code from reading C++ file 'ZLQtTime.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ZLQtTime.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ZLQtTime.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ZLQtTimeManager[] = {

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
      31,   17,   16,   16, 0x08,
      76,   71,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ZLQtTimeManager[] = {
    "ZLQtTimeManager\0\0task,interval\0"
    "addTaskSlot(shared_ptr<ZLRunnable>,int)\0"
    "task\0removeTaskInternalSlot(shared_ptr<ZLRunnable>)\0"
};

void ZLQtTimeManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ZLQtTimeManager *_t = static_cast<ZLQtTimeManager *>(_o);
        switch (_id) {
        case 0: _t->addTaskSlot((*reinterpret_cast< shared_ptr<ZLRunnable>(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->removeTaskInternalSlot((*reinterpret_cast< shared_ptr<ZLRunnable>(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ZLQtTimeManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ZLQtTimeManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ZLQtTimeManager,
      qt_meta_data_ZLQtTimeManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ZLQtTimeManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ZLQtTimeManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ZLQtTimeManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ZLQtTimeManager))
        return static_cast<void*>(const_cast< ZLQtTimeManager*>(this));
    if (!strcmp(_clname, "ZLUnixTimeManager"))
        return static_cast< ZLUnixTimeManager*>(const_cast< ZLQtTimeManager*>(this));
    return QObject::qt_metacast(_clname);
}

int ZLQtTimeManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
