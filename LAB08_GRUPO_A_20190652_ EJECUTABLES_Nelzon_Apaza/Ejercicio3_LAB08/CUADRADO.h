#ifndef CUADRADO_H
#define CUADRADO_H
#include "RECTANGULO.h"

class CUADRADO:public RECTANGULO{
    public:
        CUADRADO(float,float);//solo usaremos los datos de RECTANGULO
        ~CUADRADO();
        void imprimir();
};

#endif