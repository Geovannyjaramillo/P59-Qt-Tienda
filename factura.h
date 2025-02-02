#ifndef FACTURA_H
#define FACTURA_H

#include <QDialog>

#include "detallefactura.h"
#include "clasefactura.h"
#include "tienda.h"

namespace Ui {
class Factura;
}

class Factura : public QDialog
{
    Q_OBJECT

public:
    explicit Factura(QWidget *parent = nullptr);
    ~Factura();

private:
    Ui::Factura *ui;

};

#endif // FACTURA_H
