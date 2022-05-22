#ifndef ALUMNO_H
#define ALUMNO_H
#include "PERSONA.h"//incluimos PERSONA.h porque heredamos de esta clase

using namespace std;

class ALUMNO: public PERSONA{
    public:
        ALUMNO();//constructor por defecto
        ~ALUMNO();//destructor
};

#endif