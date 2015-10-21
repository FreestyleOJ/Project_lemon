/****************************************************************************
** Meta object code from reading C++ file 'advancedcompilersettingsdialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "advancedcompilersettingsdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'advancedcompilersettingsdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AdvancedCompilerSettingsDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      32,   31,   31,   31, 0x08,
      52,   31,   31,   31, 0x08,
      74,   31,   31,   31, 0x08,
     100,   31,   31,   31, 0x08,
     129,   31,   31,   31, 0x08,
     154,   31,   31,   31, 0x08,
     182,   31,   31,   31, 0x08,
     210,   31,   31,   31, 0x08,
     234,   31,   31,   31, 0x08,
     260,   31,   31,   31, 0x08,
     293,   31,   31,   31, 0x08,
     321,   31,   31,   31, 0x08,
     348,   31,   31,   31, 0x08,
     370,   31,   31,   31, 0x08,
     397,   31,   31,   31, 0x08,
     427,   31,   31,   31, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_AdvancedCompilerSettingsDialog[] = {
    "AdvancedCompilerSettingsDialog\0\0"
    "okayButtonClicked()\0compilerTypeChanged()\0"
    "compilerLocationChanged()\0"
    "interpreterLocationChanged()\0"
    "selectCompilerLocation()\0"
    "selectInterpreterLocation()\0"
    "bytecodeExtensionsChanged()\0"
    "timeLimitRatioChanged()\0"
    "memoryLimitRatioChanged()\0"
    "disableMemoryLimitCheckChanged()\0"
    "configurationIndexChanged()\0"
    "configurationTextChanged()\0"
    "deleteConfiguration()\0compilerArgumentsChanged()\0"
    "interpreterArgumentsChanged()\0"
    "environmentVariablesButtonClicked()\0"
};

void AdvancedCompilerSettingsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AdvancedCompilerSettingsDialog *_t = static_cast<AdvancedCompilerSettingsDialog *>(_o);
        switch (_id) {
        case 0: _t->okayButtonClicked(); break;
        case 1: _t->compilerTypeChanged(); break;
        case 2: _t->compilerLocationChanged(); break;
        case 3: _t->interpreterLocationChanged(); break;
        case 4: _t->selectCompilerLocation(); break;
        case 5: _t->selectInterpreterLocation(); break;
        case 6: _t->bytecodeExtensionsChanged(); break;
        case 7: _t->timeLimitRatioChanged(); break;
        case 8: _t->memoryLimitRatioChanged(); break;
        case 9: _t->disableMemoryLimitCheckChanged(); break;
        case 10: _t->configurationIndexChanged(); break;
        case 11: _t->configurationTextChanged(); break;
        case 12: _t->deleteConfiguration(); break;
        case 13: _t->compilerArgumentsChanged(); break;
        case 14: _t->interpreterArgumentsChanged(); break;
        case 15: _t->environmentVariablesButtonClicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData AdvancedCompilerSettingsDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AdvancedCompilerSettingsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AdvancedCompilerSettingsDialog,
      qt_meta_data_AdvancedCompilerSettingsDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AdvancedCompilerSettingsDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AdvancedCompilerSettingsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AdvancedCompilerSettingsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AdvancedCompilerSettingsDialog))
        return static_cast<void*>(const_cast< AdvancedCompilerSettingsDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int AdvancedCompilerSettingsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
