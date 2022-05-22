#include "ELIPSE.h"

ELIPSE::ELIPSE(string _color,int _x, int _y, char *_nombres_figura, float _rad_mayor,float _rad_menor):FORMA(_color, _x, _y, _nombres_figura){
    R=_rad_mayor;
    r=_rad_menor;
}

ELIPSE::~ELIPSE(){}

void ELIPSE::area_elipse(){

    float area;
    area=(3.1416)*(R*r);
    cout<<"\tEl area del elipse dado es: "<<area<<endl;
}