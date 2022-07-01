/********************************************************************************
** Form generated from reading UI file 'factura.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FACTURA_H
#define UI_FACTURA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Factura
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QGroupBox *groupBox;
    QPlainTextEdit *outDetallefac;

    void setupUi(QDialog *Factura)
    {
        if (Factura->objectName().isEmpty())
            Factura->setObjectName(QString::fromUtf8("Factura"));
        Factura->resize(628, 542);
        Factura->setAutoFillBackground(false);
        Factura->setStyleSheet(QString::fromUtf8("background-color: rgb(213, 255, 174);"));
        Factura->setSizeGripEnabled(false);
        Factura->setModal(false);
        buttonBox = new QDialogButtonBox(Factura);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(430, 490, 181, 32));
        buttonBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 218, 130);"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(Factura);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(180, 10, 291, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Rockwell Nova"));
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(Factura);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 50, 481, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Rockwell Nova"));
        font1.setPointSize(10);
        label_2->setFont(font1);
        label_3 = new QLabel(Factura);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(230, 110, 211, 31));
        label_3->setFont(font1);
        label_4 = new QLabel(Factura);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(270, 140, 101, 21));
        label_4->setFont(font1);
        label_5 = new QLabel(Factura);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(260, 80, 121, 31));
        label_5->setFont(font1);
        groupBox = new QGroupBox(Factura);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 180, 581, 301));
        groupBox->setFont(font1);
        outDetallefac = new QPlainTextEdit(groupBox);
        outDetallefac->setObjectName(QString::fromUtf8("outDetallefac"));
        outDetallefac->setGeometry(QRect(10, 20, 551, 271));

        retranslateUi(Factura);
        QObject::connect(buttonBox, SIGNAL(accepted()), Factura, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Factura, SLOT(reject()));

        QMetaObject::connectSlotsByName(Factura);
    } // setupUi

    void retranslateUi(QDialog *Factura)
    {
        Factura->setWindowTitle(QApplication::translate("Factura", "Dialog", nullptr));
        label->setText(QApplication::translate("Factura", "Tienda \"Don Bosquito\"", nullptr));
        label_2->setText(QApplication::translate("Factura", "\342\200\234Para trabajar con \303\251xito, t\303\251ngase caridad en el coraz\303\263n y paciencia en la ejecuci\303\263n\342\200\235", nullptr));
        label_3->setText(QApplication::translate("Factura", "Direcci\303\263n:Av Moran Valverde", nullptr));
        label_4->setText(QApplication::translate("Factura", "Ciudad: Quito", nullptr));
        label_5->setText(QApplication::translate("Factura", "RUC: 9999999999", nullptr));
        groupBox->setTitle(QApplication::translate("Factura", "Detalle Factura", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Factura: public Ui_Factura {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FACTURA_H
