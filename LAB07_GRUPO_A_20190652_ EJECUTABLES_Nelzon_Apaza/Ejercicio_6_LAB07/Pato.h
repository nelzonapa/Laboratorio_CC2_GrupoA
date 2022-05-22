#ifndef PATO_H
#define PATO_H
#include "Ave.h"

class PATO:public AVE{
    private:
        string parpar;
    public:
        PATO(int,int,string,string);//declaramos el constructor
        ~PATO();//destructor
        void Parpar();//accion para que el GANZO grazne
};

#endif