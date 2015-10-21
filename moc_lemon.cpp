/****************************************************************************
** Meta object code from reading C++ file 'lemon.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "lemon.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lemon.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Lemon[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
       7,    6,    6,    6, 0x05,

 // slots: signature, parameters, type, tag, flags
      25,    6,    6,    6, 0x08,
      51,    6,    6,    6, 0x08,
      70,    6,    6,    6, 0x08,
      90,    6,    6,    6, 0x08,
     113,    6,    6,    6, 0x08,
     134,    6,    6,    6, 0x08,
     159,    6,    6,    6, 0x08,
     179,    6,    6,    6, 0x08,
     191,    6,    6,    6, 0x08,
     205,    6,    6,    6, 0x08,
     218,    6,    6,    6, 0x08,
     235,    6,    6,    6, 0x08,
     250,    6,    6,    6, 0x08,
     265,    6,    6,    6, 0x08,
     278,    6,    6,    6, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Lemon[] = {
    "Lemon\0\0dataPathChanged()\0"
    "summarySelectionChanged()\0resetDataWatcher()\0"
    "showOptionsDialog()\0refreshButtonClicked()\0"
    "tabIndexChanged(int)\0viewerSelectionChanged()\0"
    "contestantDeleted()\0newAction()\0"
    "closeAction()\0loadAction()\0addTasksAction()\0"
    "makeSelfTest()\0exportResult()\0"
    "aboutLemon()\0setUiLanguage()\0"
};

void Lemon::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Lemon *_t = static_cast<Lemon *>(_o);
        switch (_id) {
        case 0: _t->dataPathChanged(); break;
        case 1: _t->summarySelectionChanged(); break;
        case 2: _t->resetDataWatcher(); break;
        case 3: _t->showOptionsDialog(); break;
        case 4: _t->refreshButtonClicked(); break;
        case 5: _t->tabIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->viewerSelectionChanged(); break;
        case 7: _t->contestantDeleted(); break;
        case 8: _t->newAction(); break;
        case 9: _t->closeAction(); break;
        case 10: _t->loadAction(); break;
        case 11: _t->addTasksAction(); break;
        case 12: _t->makeSelfTest(); break;
        case 13: _t->exportResult(); break;
        case 14: _t->aboutLemon(); break;
        case 15: _t->setUiLanguage(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Lemon::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Lemon::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Lemon,
      qt_meta_data_Lemon, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Lemon::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Lemon::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Lemon::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Lemon))
        return static_cast<void*>(const_cast< Lemon*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Lemon::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
void Lemon::dataPathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
