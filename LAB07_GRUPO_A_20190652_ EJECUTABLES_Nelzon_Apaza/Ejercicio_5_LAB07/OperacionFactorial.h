#ifndef OPERACIONFACTORIAL_H
#define OPERACIONFACTORIAL_H
#include "OperacionBase.h"

//Según al gráfico dado.
//Hallaremos el factorial del numero que tenemos en la clase anterior
class OperacionFactorial : public OperacionBase{
    public:
        int Hallar_factorial();
        void mostrar_resultado();
};

#endif