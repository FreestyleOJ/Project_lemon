/****************************************************************************
** Meta object code from reading C++ file 'taskeditwidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "taskeditwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'taskeditwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TaskEditWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      34,   15,   15,   15, 0x08,
      63,   15,   15,   15, 0x08,
      86,   15,   15,   15, 0x08,
     109,   15,   15,   15, 0x08,
     140,   15,   15,   15, 0x08,
     170,   15,   15,   15, 0x08,
     201,   15,   15,   15, 0x08,
     229,   15,   15,   15, 0x08,
     258,   15,   15,   15, 0x08,
     282,   15,   15,   15, 0x08,
     312,   15,   15,   15, 0x08,
     338,   15,   15,   15, 0x08,
     367,   15,   15,   15, 0x08,
     396,   15,   15,   15, 0x08,
     427,   15,   15,   15, 0x08,
     454,   15,   15,   15, 0x08,
     486,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TaskEditWidget[] = {
    "TaskEditWidget\0\0dataPathChanged()\0"
    "problemTitleChanged(QString)\0"
    "setToTraditional(bool)\0setToAnswersOnly(bool)\0"
    "sourceFileNameChanged(QString)\0"
    "inputFileNameChanged(QString)\0"
    "outputFileNameChanged(QString)\0"
    "standardInputCheckChanged()\0"
    "standardOutputCheckChanged()\0"
    "comparisonModeChanged()\0"
    "diffArgumentsChanged(QString)\0"
    "realPrecisionChanged(int)\0"
    "specialJudgeChanged(QString)\0"
    "refreshProblemTitle(QString)\0"
    "refreshCompilerConfiguration()\0"
    "compilerSelectionChanged()\0"
    "configurationSelectionChanged()\0"
    "answerFileExtensionChanged(QString)\0"
};

void TaskEditWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TaskEditWidget *_t = static_cast<TaskEditWidget *>(_o);
        switch (_id) {
        case 0: _t->dataPathChanged(); break;
        case 1: _t->problemTitleChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->setToTraditional((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setToAnswersOnly((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->sourceFileNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->inputFileNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->outputFileNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->standardInputCheckChanged(); break;
        case 8: _t->standardOutputCheckChanged(); break;
        case 9: _t->comparisonModeChanged(); break;
        case 10: _t->diffArgumentsChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->realPrecisionChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->specialJudgeChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->refreshProblemTitle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->refreshCompilerConfiguration(); break;
        case 15: _t->compilerSelectionChanged(); break;
        case 16: _t->configurationSelectionChanged(); break;
        case 17: _t->answerFileExtensionChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData TaskEditWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TaskEditWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TaskEditWidget,
      qt_meta_data_TaskEditWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TaskEditWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TaskEditWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TaskEditWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TaskEditWidget))
        return static_cast<void*>(const_cast< TaskEditWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int TaskEditWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void TaskEditWidget::dataPathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
