#include "CIRCULO.h"
#include "iostream"
using namespace std;

CIRCULO::CIRCULO(float _rad_mayor,float _rad_menor):ELIPSE(_rad_mayor,_rad_menor){}
CIRCULO::~CIRCULO(){}

void CIRCULO::area(){
    float area;
    if (R==r)
    {
        cout<<"\tSu figura es un CIRCULO"<<endl;
        ELIPSE::area();
    }
    else{
        cout<<"\tSu figura es una ELIPSE"<<endl;
        ELIPSE::area();
    }
}

void CIRCULO::diametro(){
    cout<<"\tEl diametro de su figura es: "<<R+r<<endl;
}