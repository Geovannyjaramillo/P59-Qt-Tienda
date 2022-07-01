#ifndef DETALLEFACTURA_H
#define DETALLEFACTURA_H

#include <QObject>
#include "tienda.h"


class Detallefactura : public QObject
{
    Q_OBJECT
public:
    explicit Detallefactura(QObject *parent = nullptr);

signals:
private:
};

#endif // DETALLEFACTURA_H
