#ifndef ELIPSE_H
#define ELIPSE_H

#include "FORMA.h"

class ELIPSE:public FORMA{
    private:
        float R, r;//R=radio mayor y r=radio menor
    public:
        ELIPSE(string,int,int,char*, float, float);
        ~ELIPSE();
        void area_elipse();
};

//PASAMOS A DEFINIR LOS MÉTODOS EN ELIPSE.CPP
#endif