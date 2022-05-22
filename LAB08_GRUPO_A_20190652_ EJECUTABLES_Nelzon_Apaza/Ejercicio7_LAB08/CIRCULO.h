#ifndef CIRCULO_H
#define CIRCULO_H
#include "ELIPSE.h"

class CIRCULO:public ELIPSE{
    public:
        CIRCULO(string,string, float, float);//SOLO trabajaremos con los datos de Elipse
        ~CIRCULO();
        void area();
        void diametro();
};

#endif 