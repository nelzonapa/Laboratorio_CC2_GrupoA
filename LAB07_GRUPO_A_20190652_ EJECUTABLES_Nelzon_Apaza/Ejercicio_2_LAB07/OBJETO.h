#ifndef OBJETO_H
#define OBJETO_H
#include "COLOR.h"//incluimos COLOR.h porque heredamos de esta clase
#include "MATERIAL.h"//incluimos MATERIAL.h porque heredamos de esta clase
using namespace std;

class OBJETO : public MATERIAL, public COLOR//trabajamos con ambas CLASES
{
public:
    OBJETO();
    ~OBJETO();
    void describir_objeto();
};

#endif