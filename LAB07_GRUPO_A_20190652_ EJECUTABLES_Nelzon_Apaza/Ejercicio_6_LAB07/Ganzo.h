#ifndef GANZO_H
#define GANZO_H

#include "Ave.h"

class GANZO:public AVE{
    private:
        string graznido;
    public:
        GANZO(int,int,string,string);//declaramos el constructor
        ~GANZO();//destructor
        void Graznar();//accion para que el GANZO grazne
};

#endif