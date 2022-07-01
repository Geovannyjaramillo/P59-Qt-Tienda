/****************************************************************************
** Meta object code from reading C++ file 'tienda.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../P59-Qt-Tienda/tienda.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tienda.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Tienda_t {
    QByteArrayData data[15];
    char stringdata0[280];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Tienda_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Tienda_t qt_meta_stringdata_Tienda = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Tienda"
QT_MOC_LITERAL(1, 7, 33), // "on_inProducto_currentIndexCha..."
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 5), // "index"
QT_MOC_LITERAL(4, 48, 22), // "on_btnAgregar_released"
QT_MOC_LITERAL(5, 71, 14), // "buscarproducto"
QT_MOC_LITERAL(6, 86, 14), // "nombreProducto"
QT_MOC_LITERAL(7, 101, 1), // "n"
QT_MOC_LITERAL(8, 103, 8), // "cantidad"
QT_MOC_LITERAL(9, 112, 23), // "on_btnFacturar_released"
QT_MOC_LITERAL(10, 136, 24), // "on_actionNuevo_triggered"
QT_MOC_LITERAL(11, 161, 27), // "on_actionCalcular_triggered"
QT_MOC_LITERAL(12, 189, 24), // "on_actionSalir_triggered"
QT_MOC_LITERAL(13, 214, 26), // "on_actionGuardar_triggered"
QT_MOC_LITERAL(14, 241, 38) // "on_actionAcerca_de_la_tienda_..."

    },
    "Tienda\0on_inProducto_currentIndexChanged\0"
    "\0index\0on_btnAgregar_released\0"
    "buscarproducto\0nombreProducto\0n\0"
    "cantidad\0on_btnFacturar_released\0"
    "on_actionNuevo_triggered\0"
    "on_actionCalcular_triggered\0"
    "on_actionSalir_triggered\0"
    "on_actionGuardar_triggered\0"
    "on_actionAcerca_de_la_tienda_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Tienda[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x08 /* Private */,
       4,    0,   62,    2, 0x08 /* Private */,
       5,    3,   63,    2, 0x08 /* Private */,
       9,    0,   70,    2, 0x08 /* Private */,
      10,    0,   71,    2, 0x08 /* Private */,
      11,    0,   72,    2, 0x08 /* Private */,
      12,    0,   73,    2, 0x08 /* Private */,
      13,    0,   74,    2, 0x08 /* Private */,
      14,    0,   75,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString, QMetaType::Int, QMetaType::Int,    6,    7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Tienda::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Tienda *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_inProducto_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_btnAgregar_released(); break;
        case 2: { bool _r = _t->buscarproducto((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->on_btnFacturar_released(); break;
        case 4: _t->on_actionNuevo_triggered(); break;
        case 5: _t->on_actionCalcular_triggered(); break;
        case 6: _t->on_actionSalir_triggered(); break;
        case 7: _t->on_actionGuardar_triggered(); break;
        case 8: _t->on_actionAcerca_de_la_tienda_triggered(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Tienda::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_Tienda.data,
    qt_meta_data_Tienda,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Tienda::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tienda::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Tienda.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Tienda::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
