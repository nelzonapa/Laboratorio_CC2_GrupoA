#ifndef CIRCULO_H
#define CIRCULO_H
#include "ELIPSE.h"

class CIRCULO:public ELIPSE{
    public:
        CIRCULO(float, float);
        ~CIRCULO();
        void area();
        void diametro();
};

#endif 