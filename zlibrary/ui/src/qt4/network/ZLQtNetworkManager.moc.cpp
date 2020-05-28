/****************************************************************************
** Meta object code from reading C++ file 'ZLQtNetworkManager.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ZLQtNetworkManager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ZLQtNetworkManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ZLQtNetworkManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      40,   20,   19,   19, 0x09,
     103,   97,   19,   19, 0x09,
     130,   19,   19,   19, 0x09,
     149,   19,   19,   19, 0x09,
     168,  161,   19,   19, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ZLQtNetworkManager[] = {
    "ZLQtNetworkManager\0\0reply,authenticator\0"
    "onAuthenticationRequired(QNetworkReply*,QAuthenticator*)\0"
    "reply\0onFinished(QNetworkReply*)\0"
    "onReplyReadyRead()\0onTimeOut()\0errors\0"
    "onSslErrors(QList<QSslError>)\0"
};

void ZLQtNetworkManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ZLQtNetworkManager *_t = static_cast<ZLQtNetworkManager *>(_o);
        switch (_id) {
        case 0: _t->onAuthenticationRequired((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< QAuthenticator*(*)>(_a[2]))); break;
        case 1: _t->onFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 2: _t->onReplyReadyRead(); break;
        case 3: _t->onTimeOut(); break;
        case 4: _t->onSslErrors((*reinterpret_cast< const QList<QSslError>(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ZLQtNetworkManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ZLQtNetworkManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ZLQtNetworkManager,
      qt_meta_data_ZLQtNetworkManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ZLQtNetworkManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ZLQtNetworkManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ZLQtNetworkManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ZLQtNetworkManager))
        return static_cast<void*>(const_cast< ZLQtNetworkManager*>(this));
    if (!strcmp(_clname, "ZLNetworkManager"))
        return static_cast< ZLNetworkManager*>(const_cast< ZLQtNetworkManager*>(this));
    return QObject::qt_metacast(_clname);
}

int ZLQtNetworkManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
static const uint qt_meta_data_ZLQtNetworkCookieJar[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_ZLQtNetworkCookieJar[] = {
    "ZLQtNetworkCookieJar\0"
};

void ZLQtNetworkCookieJar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ZLQtNetworkCookieJar::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ZLQtNetworkCookieJar::staticMetaObject = {
    { &QNetworkCookieJar::staticMetaObject, qt_meta_stringdata_ZLQtNetworkCookieJar,
      qt_meta_data_ZLQtNetworkCookieJar, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ZLQtNetworkCookieJar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ZLQtNetworkCookieJar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ZLQtNetworkCookieJar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ZLQtNetworkCookieJar))
        return static_cast<void*>(const_cast< ZLQtNetworkCookieJar*>(this));
    return QNetworkCookieJar::qt_metacast(_clname);
}

int ZLQtNetworkCookieJar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QNetworkCookieJar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
