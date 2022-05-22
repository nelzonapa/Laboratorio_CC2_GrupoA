//coc!
#ifndef GALLINA_H
#define GALLINA_H
#include "Ave.h"

class GALLINA:public AVE
{
    private:
        string cacareo;
    public:
        GALLINA(int,int,string,string);//declaramos el constructor
        // GALLINA() = default;//Constructor por defecto
        ~GALLINA();//destructor
        void Cacarear();//accion para que la gallina cacaree
};


#endif