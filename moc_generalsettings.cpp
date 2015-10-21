/****************************************************************************
** Meta object code from reading C++ file 'generalsettings.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "generalsettings.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'generalsettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GeneralSettings[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x08,
      50,   16,   16,   16, 0x08,
      83,   16,   16,   16, 0x08,
     118,   16,   16,   16, 0x08,
     151,   16,   16,   16, 0x08,
     189,   16,   16,   16, 0x08,
     219,   16,   16,   16, 0x08,
     251,   16,   16,   16, 0x08,
     287,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_GeneralSettings[] = {
    "GeneralSettings\0\0defaultFullScoreChanged(QString)\0"
    "defaultTimeLimitChanged(QString)\0"
    "defaultMemoryLimitChanged(QString)\0"
    "compileTimeLimitChanged(QString)\0"
    "specialJudgeTimeLimitChanged(QString)\0"
    "fileSizeLimitChanged(QString)\0"
    "numberOfThreadsChanged(QString)\0"
    "inputFileExtensionsChanged(QString)\0"
    "outputFileExtensionsChanged(QString)\0"
};

void GeneralSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GeneralSettings *_t = static_cast<GeneralSettings *>(_o);
        switch (_id) {
        case 0: _t->defaultFullScoreChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->defaultTimeLimitChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->defaultMemoryLimitChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->compileTimeLimitChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->specialJudgeTimeLimitChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->fileSizeLimitChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->numberOfThreadsChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->inputFileExtensionsChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->outputFileExtensionsChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GeneralSettings::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GeneralSettings::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_GeneralSettings,
      qt_meta_data_GeneralSettings, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GeneralSettings::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GeneralSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GeneralSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GeneralSettings))
        return static_cast<void*>(const_cast< GeneralSettings*>(this));
    return QWidget::qt_metacast(_clname);
}

int GeneralSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
