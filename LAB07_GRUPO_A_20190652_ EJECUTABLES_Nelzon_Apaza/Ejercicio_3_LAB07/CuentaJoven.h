#ifndef CUENTAJOVEN_H
#define CUENTAJOVEN_H

// #include "ProductoBancario.h"
#include "Cuenta.h"

class CuentaJoven : private Cuenta{
    CuentaJoven(string, double, int);
    ~CuentaJoven();
};

#endif