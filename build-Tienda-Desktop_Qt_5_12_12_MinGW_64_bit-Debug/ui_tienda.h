/********************************************************************************
** Form generated from reading UI file 'tienda.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIENDA_H
#define UI_TIENDA_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tienda
{
public:
    QAction *actionNuevo;
    QAction *actionCalcular;
    QAction *actionSalir;
    QAction *actionAcerca_de_la_tienda;
    QAction *actionGuardar;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_3;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *inCedula;
    QLabel *label_2;
    QLineEdit *inNombre;
    QLabel *label_3;
    QLineEdit *inTelefono;
    QLabel *label_4;
    QLineEdit *inEmail;
    QLabel *label_5;
    QPlainTextEdit *inDireccion;
    QGroupBox *groupBox_2;
    QFormLayout *formLayout_2;
    QLabel *label_6;
    QComboBox *inProducto;
    QLabel *label_7;
    QSpinBox *inCantidad;
    QLabel *label_8;
    QLabel *outPrecio;
    QPushButton *btnAgregar;
    QPushButton *btnFacturar;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_2;
    QTableWidget *outDetalle;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_4;
    QFormLayout *formLayout_3;
    QLabel *label_10;
    QLabel *outSubtotal;
    QLabel *label_11;
    QLabel *outIva;
    QLabel *label_12;
    QLabel *outTotal;
    QMenuBar *menubar;
    QMenu *menuArchivo;
    QMenu *menuAcerca_de;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Tienda)
    {
        if (Tienda->objectName().isEmpty())
            Tienda->setObjectName(QString::fromUtf8("Tienda"));
        Tienda->resize(743, 570);
        QFont font;
        font.setFamily(QString::fromUtf8("Rockwell Nova"));
        font.setPointSize(10);
        Tienda->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Recursos/img/tiendas.png"), QSize(), QIcon::Normal, QIcon::Off);
        Tienda->setWindowIcon(icon);
        Tienda->setStyleSheet(QString::fromUtf8("background-color: rgb(254, 255, 196);"));
        actionNuevo = new QAction(Tienda);
        actionNuevo->setObjectName(QString::fromUtf8("actionNuevo"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Recursos/img/registro.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNuevo->setIcon(icon1);
        actionCalcular = new QAction(Tienda);
        actionCalcular->setObjectName(QString::fromUtf8("actionCalcular"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Recursos/img/contabilidad.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCalcular->setIcon(icon2);
        actionSalir = new QAction(Tienda);
        actionSalir->setObjectName(QString::fromUtf8("actionSalir"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Recursos/img/cerrar-sesion.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSalir->setIcon(icon3);
        actionAcerca_de_la_tienda = new QAction(Tienda);
        actionAcerca_de_la_tienda->setObjectName(QString::fromUtf8("actionAcerca_de_la_tienda"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Recursos/img/acercade.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAcerca_de_la_tienda->setIcon(icon4);
        actionGuardar = new QAction(Tienda);
        actionGuardar->setObjectName(QString::fromUtf8("actionGuardar"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Recursos/img/guardar-el-archivo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGuardar->setIcon(icon5);
        centralwidget = new QWidget(Tienda);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_3 = new QHBoxLayout(centralwidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(300, 0));
        widget->setMaximumSize(QSize(300, 16777215));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Rockwell Nova"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        groupBox->setFont(font1);
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(213, 255, 174);"));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        inCedula = new QLineEdit(groupBox);
        inCedula->setObjectName(QString::fromUtf8("inCedula"));
        inCedula->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        formLayout->setWidget(0, QFormLayout::FieldRole, inCedula);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        inNombre = new QLineEdit(groupBox);
        inNombre->setObjectName(QString::fromUtf8("inNombre"));
        inNombre->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        formLayout->setWidget(2, QFormLayout::FieldRole, inNombre);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        formLayout->setWidget(4, QFormLayout::LabelRole, label_3);

        inTelefono = new QLineEdit(groupBox);
        inTelefono->setObjectName(QString::fromUtf8("inTelefono"));
        inTelefono->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        formLayout->setWidget(4, QFormLayout::FieldRole, inTelefono);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        formLayout->setWidget(6, QFormLayout::LabelRole, label_4);

        inEmail = new QLineEdit(groupBox);
        inEmail->setObjectName(QString::fromUtf8("inEmail"));
        inEmail->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        formLayout->setWidget(6, QFormLayout::FieldRole, inEmail);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        formLayout->setWidget(8, QFormLayout::LabelRole, label_5);

        inDireccion = new QPlainTextEdit(groupBox);
        inDireccion->setObjectName(QString::fromUtf8("inDireccion"));
        inDireccion->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        inDireccion->setLineWidth(3);

        formLayout->setWidget(8, QFormLayout::FieldRole, inDireccion);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(widget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setFont(font1);
        groupBox_2->setStyleSheet(QString::fromUtf8("background-color: rgb(213, 255, 174);"));
        formLayout_2 = new QFormLayout(groupBox_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_6);

        inProducto = new QComboBox(groupBox_2);
        inProducto->setObjectName(QString::fromUtf8("inProducto"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, inProducto);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_7);

        inCantidad = new QSpinBox(groupBox_2);
        inCantidad->setObjectName(QString::fromUtf8("inCantidad"));
        inCantidad->setFont(font);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, inCantidad);

        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_8);

        outPrecio = new QLabel(groupBox_2);
        outPrecio->setObjectName(QString::fromUtf8("outPrecio"));
        outPrecio->setFont(font);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, outPrecio);

        btnAgregar = new QPushButton(groupBox_2);
        btnAgregar->setObjectName(QString::fromUtf8("btnAgregar"));
        btnAgregar->setMinimumSize(QSize(0, 50));
        btnAgregar->setFont(font);
        btnAgregar->setStyleSheet(QString::fromUtf8("background-color: rgb(143, 240, 164);\n"
"background-color: rgb(212, 212, 212);"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, btnAgregar);

        btnFacturar = new QPushButton(groupBox_2);
        btnFacturar->setObjectName(QString::fromUtf8("btnFacturar"));
        btnFacturar->setMinimumSize(QSize(0, 50));
        btnFacturar->setFont(font);
        btnFacturar->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 212, 212);"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, btnFacturar);


        verticalLayout->addWidget(groupBox_2);


        horizontalLayout_3->addWidget(widget);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        verticalLayout_2 = new QVBoxLayout(widget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox_3 = new QGroupBox(widget_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setFont(font1);
        horizontalLayout_2 = new QHBoxLayout(groupBox_3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        outDetalle = new QTableWidget(groupBox_3);
        outDetalle->setObjectName(QString::fromUtf8("outDetalle"));
        outDetalle->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(outDetalle);


        verticalLayout_2->addWidget(groupBox_3);

        widget_3 = new QWidget(widget_2);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout = new QHBoxLayout(widget_3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(187, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        widget_4 = new QWidget(widget_3);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        formLayout_3 = new QFormLayout(widget_4);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        label_10 = new QLabel(widget_4);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_10);

        outSubtotal = new QLabel(widget_4);
        outSubtotal->setObjectName(QString::fromUtf8("outSubtotal"));
        outSubtotal->setMinimumSize(QSize(100, 0));
        outSubtotal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, outSubtotal);

        label_11 = new QLabel(widget_4);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_11);

        outIva = new QLabel(widget_4);
        outIva->setObjectName(QString::fromUtf8("outIva"));
        outIva->setMinimumSize(QSize(100, 0));
        outIva->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, outIva);

        label_12 = new QLabel(widget_4);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Rockwell Nova"));
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        label_12->setFont(font2);

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_12);

        outTotal = new QLabel(widget_4);
        outTotal->setObjectName(QString::fromUtf8("outTotal"));
        outTotal->setMinimumSize(QSize(100, 0));
        QFont font3;
        font3.setPointSize(14);
        font3.setBold(true);
        font3.setWeight(75);
        outTotal->setFont(font3);
        outTotal->setStyleSheet(QString::fromUtf8("background-color: rgb(249, 240, 107);\n"
"color: rgb(224, 27, 36);"));
        outTotal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_3->setWidget(2, QFormLayout::FieldRole, outTotal);


        horizontalLayout->addWidget(widget_4);


        verticalLayout_2->addWidget(widget_3);


        horizontalLayout_3->addWidget(widget_2);

        Tienda->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Tienda);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 743, 21));
        menuArchivo = new QMenu(menubar);
        menuArchivo->setObjectName(QString::fromUtf8("menuArchivo"));
        menuAcerca_de = new QMenu(menubar);
        menuAcerca_de->setObjectName(QString::fromUtf8("menuAcerca_de"));
        Tienda->setMenuBar(menubar);
        statusbar = new QStatusBar(Tienda);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Tienda->setStatusBar(statusbar);

        menubar->addAction(menuArchivo->menuAction());
        menubar->addAction(menuAcerca_de->menuAction());
        menuArchivo->addAction(actionNuevo);
        menuArchivo->addAction(actionCalcular);
        menuArchivo->addAction(actionGuardar);
        menuArchivo->addAction(actionSalir);
        menuAcerca_de->addAction(actionAcerca_de_la_tienda);

        retranslateUi(Tienda);

        QMetaObject::connectSlotsByName(Tienda);
    } // setupUi

    void retranslateUi(QMainWindow *Tienda)
    {
        Tienda->setWindowTitle(QApplication::translate("Tienda", "Tienda", nullptr));
        actionNuevo->setText(QApplication::translate("Tienda", "Nuevo", nullptr));
        actionCalcular->setText(QApplication::translate("Tienda", "Calcular", nullptr));
        actionSalir->setText(QApplication::translate("Tienda", "Salir", nullptr));
        actionAcerca_de_la_tienda->setText(QApplication::translate("Tienda", "Acerca de ", nullptr));
        actionGuardar->setText(QApplication::translate("Tienda", "Guardar", nullptr));
        groupBox->setTitle(QApplication::translate("Tienda", "Cliente", nullptr));
        label->setText(QApplication::translate("Tienda", "C\303\251dula:", nullptr));
        label_2->setText(QApplication::translate("Tienda", "Nombre:", nullptr));
        label_3->setText(QApplication::translate("Tienda", "Tel\303\251fono:", nullptr));
        label_4->setText(QApplication::translate("Tienda", "E-mail:", nullptr));
        label_5->setText(QApplication::translate("Tienda", "Direcci\303\263n:", nullptr));
        groupBox_2->setTitle(QApplication::translate("Tienda", "Producto", nullptr));
        label_6->setText(QApplication::translate("Tienda", "Nombre:", nullptr));
        label_7->setText(QApplication::translate("Tienda", "Cantidad:", nullptr));
        label_8->setText(QApplication::translate("Tienda", "Precio:", nullptr));
        outPrecio->setText(QApplication::translate("Tienda", "0.00", nullptr));
        btnAgregar->setText(QApplication::translate("Tienda", "Agregar", nullptr));
        btnFacturar->setText(QApplication::translate("Tienda", "Factura", nullptr));
        groupBox_3->setTitle(QApplication::translate("Tienda", "Detalle de la compra", nullptr));
        label_10->setText(QApplication::translate("Tienda", "Subtotal:", nullptr));
        outSubtotal->setText(QApplication::translate("Tienda", "0.0", nullptr));
        label_11->setText(QApplication::translate("Tienda", "IVA (12%):", nullptr));
        outIva->setText(QApplication::translate("Tienda", "0.0", nullptr));
        label_12->setText(QApplication::translate("Tienda", "TOTAL:", nullptr));
        outTotal->setText(QApplication::translate("Tienda", "0.0", nullptr));
        menuArchivo->setTitle(QApplication::translate("Tienda", "Archivo", nullptr));
        menuAcerca_de->setTitle(QApplication::translate("Tienda", "Ayuda", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Tienda: public Ui_Tienda {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIENDA_H
