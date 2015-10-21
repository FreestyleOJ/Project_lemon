/****************************************************************************
** Meta object code from reading C++ file 'addcompilerwizard.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "addcompilerwizard.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addcompilerwizard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AddCompilerWizard[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x08,
      41,   18,   18,   18, 0x08,
      66,   18,   18,   18, 0x08,
      94,   18,   18,   18, 0x08,
     110,   18,   18,   18, 0x08,
     126,   18,   18,   18, 0x08,
     142,   18,   18,   18, 0x08,
     158,   18,   18,   18, 0x08,
     176,   18,   18,   18, 0x08,
     193,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_AddCompilerWizard[] = {
    "AddCompilerWizard\0\0compilerTypeChanged()\0"
    "selectCompilerLocation()\0"
    "selectInterpreterLocation()\0selectGccPath()\0"
    "selectGppPath()\0selectFpcPath()\0"
    "selectFbcPath()\0selectJavacPath()\0"
    "selectJavaPath()\0selectPythonPath()\0"
};

void AddCompilerWizard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AddCompilerWizard *_t = static_cast<AddCompilerWizard *>(_o);
        switch (_id) {
        case 0: _t->compilerTypeChanged(); break;
        case 1: _t->selectCompilerLocation(); break;
        case 2: _t->selectInterpreterLocation(); break;
        case 3: _t->selectGccPath(); break;
        case 4: _t->selectGppPath(); break;
        case 5: _t->selectFpcPath(); break;
        case 6: _t->selectFbcPath(); break;
        case 7: _t->selectJavacPath(); break;
        case 8: _t->selectJavaPath(); break;
        case 9: _t->selectPythonPath(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData AddCompilerWizard::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AddCompilerWizard::staticMetaObject = {
    { &QWizard::staticMetaObject, qt_meta_stringdata_AddCompilerWizard,
      qt_meta_data_AddCompilerWizard, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AddCompilerWizard::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AddCompilerWizard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AddCompilerWizard::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AddCompilerWizard))
        return static_cast<void*>(const_cast< AddCompilerWizard*>(this));
    return QWizard::qt_metacast(_clname);
}

int AddCompilerWizard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizard::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
