/********************************************************************************
** Form generated from reading UI file 'acerca.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACERCA_H
#define UI_ACERCA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Acerca
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label_2;
    QLabel *label;
    QLabel *outVersion;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *Acerca)
    {
        if (Acerca->objectName().isEmpty())
            Acerca->setObjectName(QString::fromUtf8("Acerca"));
        Acerca->resize(498, 467);
        Acerca->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        buttonBox = new QDialogButtonBox(Acerca);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(270, 420, 191, 32));
        buttonBox->setStyleSheet(QString::fromUtf8("background-color: rgb(206, 255, 175);"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label_2 = new QLabel(Acerca);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 60, 341, 101));
        QFont font;
        font.setFamily(QString::fromUtf8("Rockwell Nova"));
        label_2->setFont(font);
        label_2->setTextFormat(Qt::RichText);
        label = new QLabel(Acerca);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 10, 241, 41));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        label->setFont(font1);
        outVersion = new QLabel(Acerca);
        outVersion->setObjectName(QString::fromUtf8("outVersion"));
        outVersion->setGeometry(QRect(300, 20, 47, 13));
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setWeight(75);
        outVersion->setFont(font2);
        label_3 = new QLabel(Acerca);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(70, 180, 121, 31));
        QFont font3;
        font3.setPointSize(14);
        font3.setBold(true);
        font3.setWeight(75);
        label_3->setFont(font3);
        label_4 = new QLabel(Acerca);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 230, 421, 151));
        label_4->setFont(font);
        label_4->setTextFormat(Qt::RichText);

        retranslateUi(Acerca);
        QObject::connect(buttonBox, SIGNAL(accepted()), Acerca, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Acerca, SLOT(reject()));

        QMetaObject::connectSlotsByName(Acerca);
    } // setupUi

    void retranslateUi(QDialog *Acerca)
    {
        Acerca->setWindowTitle(QApplication::translate("Acerca", "Dialog", nullptr));
        label_2->setText(QApplication::translate("Acerca", "<html><head/><body><p>Aplicaci\303\263n para ventas en una tienda.</p><p>Autor: Geovanny Jaramillo &lt;<a href=\"bjaramillon1@est.ups.edu.ec\"><span style=\" text-decoration: underline; color:#0000ff;\">bjaramillon1@est.ups.edu.ec</span></a>&gt;</p><p>Universidad Polit\303\251cnica Salesiana</p><p>Todos los derechos reservados (R) 2022</p></body></html>", nullptr));
        label->setText(QApplication::translate("Acerca", "TIENDA: Don Bosquito", nullptr));
        outVersion->setText(QApplication::translate("Acerca", "V 0.1", nullptr));
        label_3->setText(QApplication::translate("Acerca", "<html><head/><body><p>ICONOS</p></body></html>", nullptr));
        label_4->setText(QApplication::translate("Acerca", "<html><head/><body><p>Ejecutable: <a href=\"mailto:&lt;a href=\"><span style=\" text-decoration: underline; color:#0000ff;\">Dinero iconos creados por Freepik - Flaticon</span></a></p><p>Nuevo: <a href=\"mailto:gratis/registro\"><span style=\" text-decoration: underline; color:#0000ff;\">Registro iconos creados por Stockes Design - Flaticon</span></a></p><p>Guardar: <a href=\"mailto:&lt;a href=\"><span style=\" text-decoration: underline; color:#0000ff;\">Guardar el archivo iconos creados por PIXARTIST - Flaticon</span></a></p><p>Calcular: <a href=\"mailto:&lt;a href=\"><span style=\" text-decoration: underline; color:#0000ff;\">Contabilidad iconos creados por Eucalyp - Flaticon</span></a></p><p>Salir: <a href=\"mailto:&lt;a href=\"><span style=\" text-decoration: underline; color:#0000ff;\">Salir iconos creados por Iconpro86 - Flaticon</span></a></p><p>Acerca de: <a href=\"https://www.flaticon.es/iconos-gratis/equipo\"><span style=\" text-decoration: underline; color:#0000ff;\">Equipo iconos creados por Vecto"
                        "rs Market - Flaticon</span></a></p><p><br/></p><p><br/></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Acerca: public Ui_Acerca {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACERCA_H
