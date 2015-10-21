/****************************************************************************
** Meta object code from reading C++ file 'judgingdialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "judgingdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'judgingdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_JudgingDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      35,   14,   14,   14, 0x08,
      57,   53,   14,   14, 0x0a,
      93,   14,   14,   14, 0x0a,
     121,   14,   14,   14, 0x0a,
     153,   14,   14,   14, 0x0a,
     183,  181,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_JudgingDialog[] = {
    "JudgingDialog\0\0stopJudgingSignal()\0"
    "stopJudgingSlot()\0,,,\0"
    "singleCaseFinished(int,int,int,int)\0"
    "taskJudgingStarted(QString)\0"
    "contestantJudgingStart(QString)\0"
    "contestantJudgingFinished()\0,\0"
    "compileError(int,int)\0"
};

void JudgingDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        JudgingDialog *_t = static_cast<JudgingDialog *>(_o);
        switch (_id) {
        case 0: _t->stopJudgingSignal(); break;
        case 1: _t->stopJudgingSlot(); break;
        case 2: _t->singleCaseFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 3: _t->taskJudgingStarted((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->contestantJudgingStart((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->contestantJudgingFinished(); break;
        case 6: _t->compileError((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData JudgingDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject JudgingDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_JudgingDialog,
      qt_meta_data_JudgingDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &JudgingDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *JudgingDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *JudgingDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_JudgingDialog))
        return static_cast<void*>(const_cast< JudgingDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int JudgingDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void JudgingDialog::stopJudgingSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
