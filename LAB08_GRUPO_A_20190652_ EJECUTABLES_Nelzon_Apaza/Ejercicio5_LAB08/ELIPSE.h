#ifndef ELIPSE_H
#define ELIPSE_H

#include "FORMA.h"

class ELIPSE:public FORMA{
    protected:
        float R, r;//R=radio mayor y r=radio menor
    public:
        ELIPSE(string,string, float, float);
        ~ELIPSE();
        void area();
        void imprimir();
};

//PASAMOS A DEFINIR LOS MÉTODOS EN ELIPSE.CPP
#endif