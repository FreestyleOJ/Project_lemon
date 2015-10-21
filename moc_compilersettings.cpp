/****************************************************************************
** Meta object code from reading C++ file 'compilersettings.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "compilersettings.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'compilersettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CompilerSettings[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x08,
      35,   17,   17,   17, 0x08,
      54,   17,   17,   17, 0x08,
      68,   17,   17,   17, 0x08,
      85,   17,   17,   17, 0x08,
     114,   17,   17,   17, 0x08,
     147,   17,   17,   17, 0x08,
     179,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CompilerSettings[] = {
    "CompilerSettings\0\0moveUpCompiler()\0"
    "moveDownCompiler()\0addCompiler()\0"
    "deleteCompiler()\0compilerNameChanged(QString)\0"
    "sourceExtensionsChanged(QString)\0"
    "compilerListCurrentRowChanged()\0"
    "advancedButtonClicked()\0"
};

void CompilerSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CompilerSettings *_t = static_cast<CompilerSettings *>(_o);
        switch (_id) {
        case 0: _t->moveUpCompiler(); break;
        case 1: _t->moveDownCompiler(); break;
        case 2: _t->addCompiler(); break;
        case 3: _t->deleteCompiler(); break;
        case 4: _t->compilerNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->sourceExtensionsChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->compilerListCurrentRowChanged(); break;
        case 7: _t->advancedButtonClicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CompilerSettings::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CompilerSettings::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CompilerSettings,
      qt_meta_data_CompilerSettings, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CompilerSettings::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CompilerSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CompilerSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CompilerSettings))
        return static_cast<void*>(const_cast< CompilerSettings*>(this));
    return QWidget::qt_metacast(_clname);
}

int CompilerSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
