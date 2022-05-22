#ifndef HIPOTECA_H
#define HIPOTECA_H

// #include "ProductoBancario.h"
#include "Prestamo.h"

class Hipoteca : public Prestamo{
    public:
        Hipoteca(string, double, int);
        ~Hipoteca();
};

#endif