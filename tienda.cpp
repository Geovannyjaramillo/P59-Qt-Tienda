#include "tienda.h"
#include "ui_tienda.h"

#include <QDebug>

Tienda::Tienda(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Tienda)
{
    ui->setupUi(this);
    // Lista de productos
    cargarProductos();
    // Mostrar los productos en el combo
    foreach (Producto *p, m_productos){
        ui->inProducto->addItem(p->nombre());
    }
    // Configurar cabecera de la tabla
    QStringList cabecera = {"Cantidad", "Producto", "P. unitario", "Subtotal"};
    ui->outDetalle->setColumnCount(4);
    ui->outDetalle->setHorizontalHeaderLabels(cabecera);
    // Establecer el subtotal a 0
    m_subtotal = 0;
}

Tienda::~Tienda()
{
    delete ui;
}

/**
 * @brief Tienda::cargarProductos Carga la lista de productos de la tienda
 */
void Tienda::cargarProductos()
{
    /*Crear productos "quemados" en el código
    m_productos.append(new Producto(1, "Leche", 0.80));
    m_productos.append(new Producto(2, "Pan", 0.15));
    m_productos.append(new Producto(3, "Queso", 2.50));
    m_productos.append(new Producto(4, "Yougurt", 0.80));*/

    // Podría leerse de una base de datos, de un archivo o incluso de Internet
    //para obtener el archivo
    QDir actual = QDir::current(); //directorio actual
    // El path al archivo CSV
    QString archivoProductos = actual.absolutePath() + "/debug/Productos.csv";
    QFile archivo(archivoProductos);
    //qDebug() << archivo.fileName();

    if (archivo.open(QIODevice::ReadOnly | QIODevice::Text)){

        bool primera = true;
        QTextStream in(&archivo);
        while (!in.atEnd()) {
            QString linea = in.readLine();
            if (primera){
                primera = false;
                continue;
            }
            QStringList datos = linea.split(";");
            QString precio = datos.at(2);
            float p = precio.toFloat();
            int id = datos.at(0).toInt();
            m_productos.append(new Producto(id, datos.at(1), p));
        }

        archivo.close();
    }else{
        qDebug()<< "No se pudo abrir el archivo";
    }
}


void Tienda::calcular(float stProducto)
{

    // Calcular valores
    m_subtotal += stProducto; //se acumula el precio, st significa subtotal
    float iva = m_subtotal * IVA / 100;
    float total = m_subtotal + iva;
    // Mostrar valores en GUI
    ui->outSubtotal->setText("$ " + QString::number(m_subtotal, 'f', 2));
    ui->outIva->setText("$ " + QString::number(iva, 'f', 2));
    ui->outTotal->setText("$ " + QString::number(total, 'f', 2));
}

/**
 * @brief Tienda::on_inProducto_currentIndexChanged es un slot que se dispara al cambiar al elemento
 * @param index numero del elemento seleccionado en el combo
 */
void Tienda::on_inProducto_currentIndexChanged(int index)
{
    // Obtener el precio del producto actual seleccionado
    float precio = m_productos.at(index)->precio();
    // Mostrar el precio del product en la etiqueta
    ui->outPrecio->setText("$ " + QString::number(precio,'f',2)); // f quiere decir el formato(que fue float) y el dos el numero de decimales
    // Resetear el spinbox de cantidad
    ui->inCantidad->setValue(0);
}


void Tienda::on_btnAgregar_released()
{
    // Validar que no se agregen productos con 0 cantidad
    int cantidad = ui->inCantidad->value();
    if (cantidad == 0){
        //Mostar un error en la barra de estados
        ui->statusbar->showMessage("La cantidad no puede ser cero",3000);
        return;
    }
    // Obtener los datos de la GUI
    int i = ui->inProducto->currentIndex();
    Producto *p = m_productos.at(i);

    // Calcular el subtotal del producto
    float subtotal = p->precio() * cantidad;

    // Agregar los datos a la tabla osea lo de la cabecera(cantidad,etc)
    int fila = ui->outDetalle->rowCount();

    //Evitar duplicación de datos
    CantidadExistente=0.0;
    filaEncontrada=0;

    if(buscarproducto(p->nombre(),fila,cantidad)){
        float cantidadAnterior=p->precio()*CantidadExistente;
        subtotal=p->precio()*CantidadActual;
        ui->outDetalle->setFocus();

        ui->outDetalle->setItem(filaEncontrada, 0, new QTableWidgetItem(QString::number(CantidadActual)));
        ui->outDetalle->setItem(filaEncontrada, 3, new QTableWidgetItem(QString::number(subtotal,'f',2)));
        m_subtotal-=cantidadAnterior;
    }else{
        ui->outDetalle->insertRow(fila);
        ui->outDetalle->setItem(fila, 0, new QTableWidgetItem(QString::number(cantidad)));
        ui->outDetalle->setItem(fila, 1, new QTableWidgetItem(p->nombre()));
        ui->outDetalle->setItem(fila, 2, new QTableWidgetItem(QString::number(p->precio(),'f',2)));
        ui->outDetalle->setItem(fila, 3, new QTableWidgetItem(QString::number(subtotal,'f',2)));
    }
    // Limpiar datos
    ui->inCantidad->setValue(0);
    ui->inProducto->setFocus();

    // Actualizar subtotales
    calcular(subtotal);

}

bool Tienda::buscarproducto(QString nombreProducto, int n, int cantidad)
{
    QString celda;
    bool bandera=false;
    for(int i=0;i<n;i++){//filas
        celda=ui->outDetalle->item(i,1)->text();
        if(nombreProducto==celda){
            bandera=true;
            filaEncontrada=i;
            CantidadExistente=ui->outDetalle->item(i,0)->text().toFloat();
            CantidadActual=+cantidad+CantidadExistente;
        }
    }
    return bandera;
}


void Tienda::on_btnFacturar_released()
{
    //validacion de nombre,correo y cedula
    if(ui->inCedula->displayText().isEmpty()){
        QMessageBox::warning(this, "Advertencia", "El campo de la cedula esta vacia");
        return;
    }else if(ui->inEmail->displayText().isEmpty()){
        QMessageBox::warning(this, "Advertencia", "El campo del E-mail esta vacio");
        return;
    }else if(ui->inNombre->displayText().isEmpty()){
        QMessageBox::warning(this, "Advertencia", "El campo del nombre esta vacio");
        return;
    }
    //creacion de factura
    Factura *factura = new Factura(this);
    factura->exec();
}

void Tienda::on_actionNuevo_triggered()
{
    //limpiar cuadro de detalles de compra
    while(ui->outDetalle->rowCount()>0){
        ui->outDetalle->removeRow(0);
    }
    //Limpiar calculos
    ui->outSubtotal->clear();
    ui->outTotal->clear();
    ui->outIva->clear();
}


void Tienda::on_actionCalcular_triggered()
{
    on_btnAgregar_released();
}


void Tienda::on_actionSalir_triggered()
{
    this->close();
}


void Tienda::on_actionGuardar_triggered()
{
    QFile archivo;
    QTextStream io;
    QString nombreArchivo= QFileDialog::getSaveFileName(this,
                                                        "Guardar calculos de salarios",
                                                        QDir::current().absolutePath() + "/detalle.csv",
                                                        "Archivos de texto (*.csv)");
    archivo.setFileName(nombreArchivo);
    archivo.open(QIODevice::WriteOnly | QIODevice::Text);
    if(!archivo.isOpen()){
        qDebug()<<tr("Error");
        QMessageBox::critical(this,tr("Aviso"),archivo.errorString());
        return;
    }
    io.setDevice(&archivo);
    int n=ui->outDetalle->rowCount();//numero de filas
    int m=ui->outDetalle->columnCount();//numero de columnas
    QString celda;
    for(int i=0;i<n;i++){//filas
        for(int j=0;j<m;j++){//columnas
            if(j!=(m-1)){
                celda=ui->outDetalle->item(i,j)->text()+";";
            }else{
                celda=ui->outDetalle->item(i,j)->text();
            }
            io<<celda;//guardo campo a capo de la fila
        }
        io<<"\n";//salto de linea para diferenciar otra fila
    }
    QMessageBox::information(this,tr("Aviso"),tr("Archivo generado"));
    archivo.flush();
    archivo.close();
}


void Tienda::on_actionAcerca_de_la_tienda_triggered()
{
    Acerca *informacion = new Acerca(this);
    informacion->setVersion(VERSION);
    informacion->exec();

}
