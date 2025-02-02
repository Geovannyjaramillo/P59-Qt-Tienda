#ifndef TIENDA_H
#define TIENDA_H

#include <QMainWindow>
#include <QDir>
#include <QFile>
#include <QMessageBox>
#include <QFileDialog>

#include "producto.h"
#include "factura.h"
#include "acerca.h"

#define IVA 12
#define VERSION "0.1"
QT_BEGIN_NAMESPACE
namespace Ui { class Tienda; }
QT_END_NAMESPACE

class Tienda : public QMainWindow
{
    Q_OBJECT

public:
    Tienda(QWidget *parent = nullptr);
    ~Tienda();

private slots:
    void on_inProducto_currentIndexChanged(int index);

    void on_btnAgregar_released();

    bool buscarproducto(QString nombreProducto, int n, int cantidad);

    void on_btnFacturar_released();

    void on_actionNuevo_triggered();

    void on_actionCalcular_triggered();

    void on_actionSalir_triggered();

    void on_actionGuardar_triggered();

    void on_actionAcerca_de_la_tienda_triggered();

private:
    Ui::Tienda *ui;
    QList<Producto*> m_productos;
    void cargarProductos();
    float m_subtotal;
    float CantidadExistente;
    float CantidadActual;
    int filaEncontrada;
    void calcular(float stProducto);
    bool m_porGuardar;

};
#endif // TIENDA_H
