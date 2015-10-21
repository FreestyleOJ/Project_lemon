/****************************************************************************
** Meta object code from reading C++ file 'summarytree.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "summarytree.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'summarytree.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SummaryTree[] = {

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
      13,   12,   12,   12, 0x08,
      23,   12,   12,   12, 0x08,
      37,   12,   12,   12, 0x08,
      52,   12,   12,   12, 0x08,
      65,   12,   12,   12, 0x08,
      82,   12,   12,   12, 0x08,
     101,   12,   12,   12, 0x08,
     131,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SummaryTree[] = {
    "SummaryTree\0\0addTask()\0addTestCase()\0"
    "addTestCases()\0deleteTask()\0"
    "deleteTestCase()\0selectionChanged()\0"
    "itemChanged(QTreeWidgetItem*)\0"
    "titleChanged(QString)\0"
};

void SummaryTree::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SummaryTree *_t = static_cast<SummaryTree *>(_o);
        switch (_id) {
        case 0: _t->addTask(); break;
        case 1: _t->addTestCase(); break;
        case 2: _t->addTestCases(); break;
        case 3: _t->deleteTask(); break;
        case 4: _t->deleteTestCase(); break;
        case 5: _t->selectionChanged(); break;
        case 6: _t->itemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 7: _t->titleChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SummaryTree::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SummaryTree::staticMetaObject = {
    { &QTreeWidget::staticMetaObject, qt_meta_stringdata_SummaryTree,
      qt_meta_data_SummaryTree, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SummaryTree::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SummaryTree::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SummaryTree::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SummaryTree))
        return static_cast<void*>(const_cast< SummaryTree*>(this));
    return QTreeWidget::qt_metacast(_clname);
}

int SummaryTree::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
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
