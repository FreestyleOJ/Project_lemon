/****************************************************************************
** Meta object code from reading C++ file 'opencontestwidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "opencontestwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'opencontestwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_OpenContestWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x05,
      38,   18,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
      57,   18,   18,   18, 0x08,
      70,   18,   18,   18, 0x08,
      86,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_OpenContestWidget[] = {
    "OpenContestWidget\0\0selectionChanged()\0"
    "rowDoubleClicked()\0addContest()\0"
    "deleteContest()\0currentRowChanged()\0"
};

void OpenContestWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        OpenContestWidget *_t = static_cast<OpenContestWidget *>(_o);
        switch (_id) {
        case 0: _t->selectionChanged(); break;
        case 1: _t->rowDoubleClicked(); break;
        case 2: _t->addContest(); break;
        case 3: _t->deleteContest(); break;
        case 4: _t->currentRowChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData OpenContestWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject OpenContestWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_OpenContestWidget,
      qt_meta_data_OpenContestWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OpenContestWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OpenContestWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OpenContestWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OpenContestWidget))
        return static_cast<void*>(const_cast< OpenContestWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int OpenContestWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void OpenContestWidget::selectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void OpenContestWidget::rowDoubleClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
