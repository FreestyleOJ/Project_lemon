/****************************************************************************
** Meta object code from reading C++ file 'testcaseeditwidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "testcaseeditwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'testcaseeditwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TestCaseEditWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
      38,   19,   19,   19, 0x08,
      54,   19,   19,   19, 0x08,
      73,   19,   19,   19, 0x08,
      99,   19,   19,   19, 0x08,
     125,   19,   19,   19, 0x08,
     153,   19,   19,   19, 0x08,
     180,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TestCaseEditWidget[] = {
    "TestCaseEditWidget\0\0dataPathChanged()\0"
    "addSingleCase()\0deleteSingleCase()\0"
    "fullScoreChanged(QString)\0"
    "timeLimitChanged(QString)\0"
    "memoryLimitChanged(QString)\0"
    "fileListSelectionChanged()\0"
    "fileListItemChanged(QTableWidgetItem*)\0"
};

void TestCaseEditWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TestCaseEditWidget *_t = static_cast<TestCaseEditWidget *>(_o);
        switch (_id) {
        case 0: _t->dataPathChanged(); break;
        case 1: _t->addSingleCase(); break;
        case 2: _t->deleteSingleCase(); break;
        case 3: _t->fullScoreChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->timeLimitChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->memoryLimitChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->fileListSelectionChanged(); break;
        case 7: _t->fileListItemChanged((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData TestCaseEditWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TestCaseEditWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TestCaseEditWidget,
      qt_meta_data_TestCaseEditWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TestCaseEditWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TestCaseEditWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TestCaseEditWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TestCaseEditWidget))
        return static_cast<void*>(const_cast< TestCaseEditWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int TestCaseEditWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void TestCaseEditWidget::dataPathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
