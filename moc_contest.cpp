/****************************************************************************
** Meta object code from reading C++ file 'contest.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "contest.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'contest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Contest[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x05,
      34,    8,    8,    8, 0x05,
      64,    8,    8,    8, 0x05,
      85,    8,    8,    8, 0x05,
     111,    8,    8,    8, 0x05,
     137,  133,    8,    8, 0x05,
     173,    8,    8,    8, 0x05,
     201,    8,    8,    8, 0x05,
     223,    8,    8,    8, 0x05,
     255,    8,    8,    8, 0x05,
     285,  283,    8,    8, 0x05,
     307,    8,    8,    8, 0x05,

 // slots: signature, parameters, type, tag, flags
     327,    8,    8,    8, 0x0a,
     342,  283,    8,    8, 0x0a,
     361,    8,    8,    8, 0x0a,
     372,    8,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Contest[] = {
    "Contest\0\0taskAddedForContestant()\0"
    "taskDeletedForContestant(int)\0"
    "taskAddedForViewer()\0taskDeletedForViewer(int)\0"
    "problemTitleChanged()\0,,,\0"
    "singleCaseFinished(int,int,int,int)\0"
    "taskJudgingStarted(QString)\0"
    "taskJudgingFinished()\0"
    "contestantJudgingStart(QString)\0"
    "contestantJudgingFinished()\0,\0"
    "compileError(int,int)\0stopJudgingSignal()\0"
    "judge(QString)\0judge(QString,int)\0"
    "judgeAll()\0stopJudgingSlot()\0"
};

void Contest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Contest *_t = static_cast<Contest *>(_o);
        switch (_id) {
        case 0: _t->taskAddedForContestant(); break;
        case 1: _t->taskDeletedForContestant((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->taskAddedForViewer(); break;
        case 3: _t->taskDeletedForViewer((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->problemTitleChanged(); break;
        case 5: _t->singleCaseFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 6: _t->taskJudgingStarted((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->taskJudgingFinished(); break;
        case 8: _t->contestantJudgingStart((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->contestantJudgingFinished(); break;
        case 10: _t->compileError((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: _t->stopJudgingSignal(); break;
        case 12: _t->judge((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->judge((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 14: _t->judgeAll(); break;
        case 15: _t->stopJudgingSlot(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Contest::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Contest::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Contest,
      qt_meta_data_Contest, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Contest::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Contest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Contest::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Contest))
        return static_cast<void*>(const_cast< Contest*>(this));
    return QObject::qt_metacast(_clname);
}

int Contest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void Contest::taskAddedForContestant()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Contest::taskDeletedForContestant(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Contest::taskAddedForViewer()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void Contest::taskDeletedForViewer(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Contest::problemTitleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void Contest::singleCaseFinished(int _t1, int _t2, int _t3, int _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Contest::taskJudgingStarted(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Contest::taskJudgingFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void Contest::contestantJudgingStart(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Contest::contestantJudgingFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 9, 0);
}

// SIGNAL 10
void Contest::compileError(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void Contest::stopJudgingSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 11, 0);
}
QT_END_MOC_NAMESPACE
