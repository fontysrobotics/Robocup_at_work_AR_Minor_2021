/****************************************************************************
** Meta object code from reading C++ file 'rviz_plugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/atwork-commander/atwork_commander_gui/src/rviz_plugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rviz_plugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_atwork_commander__VisGroup_t {
    QByteArrayData data[3];
    char stringdata0[35];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_atwork_commander__VisGroup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_atwork_commander__VisGroup_t qt_meta_stringdata_atwork_commander__VisGroup = {
    {
QT_MOC_LITERAL(0, 0, 26), // "atwork_commander::VisGroup"
QT_MOC_LITERAL(1, 27, 6), // "update"
QT_MOC_LITERAL(2, 34, 0) // ""

    },
    "atwork_commander::VisGroup\0update\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_atwork_commander__VisGroup[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void atwork_commander::VisGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VisGroup *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->update(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject atwork_commander::VisGroup::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_atwork_commander__VisGroup.data,
    qt_meta_data_atwork_commander__VisGroup,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *atwork_commander::VisGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *atwork_commander::VisGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_atwork_commander__VisGroup.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int atwork_commander::VisGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_atwork_commander__MainVisGroup_t {
    QByteArrayData data[4];
    char stringdata0[49];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_atwork_commander__MainVisGroup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_atwork_commander__MainVisGroup_t qt_meta_stringdata_atwork_commander__MainVisGroup = {
    {
QT_MOC_LITERAL(0, 0, 30), // "atwork_commander::MainVisGroup"
QT_MOC_LITERAL(1, 31, 10), // "callUpdate"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 5) // "index"

    },
    "atwork_commander::MainVisGroup\0"
    "callUpdate\0\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_atwork_commander__MainVisGroup[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x0a /* Public */,
       1,    0,   27,    2, 0x2a /* Public | MethodCloned */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,

       0        // eod
};

void atwork_commander::MainVisGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainVisGroup *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->callUpdate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->callUpdate(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject atwork_commander::MainVisGroup::staticMetaObject = { {
    &VisGroup::staticMetaObject,
    qt_meta_stringdata_atwork_commander__MainVisGroup.data,
    qt_meta_data_atwork_commander__MainVisGroup,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *atwork_commander::MainVisGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *atwork_commander::MainVisGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_atwork_commander__MainVisGroup.stringdata0))
        return static_cast<void*>(this);
    return VisGroup::qt_metacast(_clname);
}

int atwork_commander::MainVisGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VisGroup::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_atwork_commander__TaskGenVisGroup_t {
    QByteArrayData data[8];
    char stringdata0[153];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_atwork_commander__TaskGenVisGroup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_atwork_commander__TaskGenVisGroup_t qt_meta_stringdata_atwork_commander__TaskGenVisGroup = {
    {
QT_MOC_LITERAL(0, 0, 33), // "atwork_commander::TaskGenVisG..."
QT_MOC_LITERAL(1, 34, 19), // "printArenaStateList"
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 47), // "std::vector<atwork_commander_..."
QT_MOC_LITERAL(4, 103, 7), // "ws_list"
QT_MOC_LITERAL(5, 111, 21), // "print_empty_container"
QT_MOC_LITERAL(6, 133, 12), // "generateTask"
QT_MOC_LITERAL(7, 146, 6) // "update"

    },
    "atwork_commander::TaskGenVisGroup\0"
    "printArenaStateList\0\0"
    "std::vector<atwork_commander_msgs::Workstation>\0"
    "ws_list\0print_empty_container\0"
    "generateTask\0update"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_atwork_commander__TaskGenVisGroup[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x0a /* Public */,
       1,    1,   39,    2, 0x2a /* Public | MethodCloned */,
       6,    0,   42,    2, 0x0a /* Public */,
       7,    0,   43,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::QString, 0x80000000 | 3, QMetaType::Bool,    4,    5,
    QMetaType::QString, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void atwork_commander::TaskGenVisGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TaskGenVisGroup *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QString _r = _t->printArenaStateList((*reinterpret_cast< std::vector<atwork_commander_msgs::Workstation>(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 1: { QString _r = _t->printArenaStateList((*reinterpret_cast< std::vector<atwork_commander_msgs::Workstation>(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->generateTask(); break;
        case 3: _t->update(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject atwork_commander::TaskGenVisGroup::staticMetaObject = { {
    &VisGroup::staticMetaObject,
    qt_meta_stringdata_atwork_commander__TaskGenVisGroup.data,
    qt_meta_data_atwork_commander__TaskGenVisGroup,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *atwork_commander::TaskGenVisGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *atwork_commander::TaskGenVisGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_atwork_commander__TaskGenVisGroup.stringdata0))
        return static_cast<void*>(this);
    return VisGroup::qt_metacast(_clname);
}

int atwork_commander::TaskGenVisGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VisGroup::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
struct qt_meta_stringdata_atwork_commander__RobotVisGroup_t {
    QByteArrayData data[3];
    char stringdata0[40];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_atwork_commander__RobotVisGroup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_atwork_commander__RobotVisGroup_t qt_meta_stringdata_atwork_commander__RobotVisGroup = {
    {
QT_MOC_LITERAL(0, 0, 31), // "atwork_commander::RobotVisGroup"
QT_MOC_LITERAL(1, 32, 6), // "update"
QT_MOC_LITERAL(2, 39, 0) // ""

    },
    "atwork_commander::RobotVisGroup\0update\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_atwork_commander__RobotVisGroup[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void atwork_commander::RobotVisGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RobotVisGroup *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->update(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject atwork_commander::RobotVisGroup::staticMetaObject = { {
    &VisGroup::staticMetaObject,
    qt_meta_stringdata_atwork_commander__RobotVisGroup.data,
    qt_meta_data_atwork_commander__RobotVisGroup,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *atwork_commander::RobotVisGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *atwork_commander::RobotVisGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_atwork_commander__RobotVisGroup.stringdata0))
        return static_cast<void*>(this);
    return VisGroup::qt_metacast(_clname);
}

int atwork_commander::RobotVisGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VisGroup::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_atwork_commander__ArenaVisGroup_t {
    QByteArrayData data[3];
    char stringdata0[40];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_atwork_commander__ArenaVisGroup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_atwork_commander__ArenaVisGroup_t qt_meta_stringdata_atwork_commander__ArenaVisGroup = {
    {
QT_MOC_LITERAL(0, 0, 31), // "atwork_commander::ArenaVisGroup"
QT_MOC_LITERAL(1, 32, 6), // "update"
QT_MOC_LITERAL(2, 39, 0) // ""

    },
    "atwork_commander::ArenaVisGroup\0update\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_atwork_commander__ArenaVisGroup[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void atwork_commander::ArenaVisGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ArenaVisGroup *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->update(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject atwork_commander::ArenaVisGroup::staticMetaObject = { {
    &VisGroup::staticMetaObject,
    qt_meta_stringdata_atwork_commander__ArenaVisGroup.data,
    qt_meta_data_atwork_commander__ArenaVisGroup,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *atwork_commander::ArenaVisGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *atwork_commander::ArenaVisGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_atwork_commander__ArenaVisGroup.stringdata0))
        return static_cast<void*>(this);
    return VisGroup::qt_metacast(_clname);
}

int atwork_commander::ArenaVisGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VisGroup::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_atwork_commander__RefboxUI_t {
    QByteArrayData data[1];
    char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_atwork_commander__RefboxUI_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_atwork_commander__RefboxUI_t qt_meta_stringdata_atwork_commander__RefboxUI = {
    {
QT_MOC_LITERAL(0, 0, 26) // "atwork_commander::RefboxUI"

    },
    "atwork_commander::RefboxUI"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_atwork_commander__RefboxUI[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void atwork_commander::RefboxUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject atwork_commander::RefboxUI::staticMetaObject = { {
    &rviz::Panel::staticMetaObject,
    qt_meta_stringdata_atwork_commander__RefboxUI.data,
    qt_meta_data_atwork_commander__RefboxUI,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *atwork_commander::RefboxUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *atwork_commander::RefboxUI::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_atwork_commander__RefboxUI.stringdata0))
        return static_cast<void*>(this);
    return rviz::Panel::qt_metacast(_clname);
}

int atwork_commander::RefboxUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = rviz::Panel::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
