#include "ELIPSE.h"
#include "iostream"
using namespace std;

ELIPSE::ELIPSE(float _rad_mayor,float _rad_menor){
    R=_rad_mayor;
    r=_rad_menor;
}

ELIPSE::~ELIPSE(){}

void ELIPSE::area(){
    float area;
    area=(3.1416)*(R*r);
    cout<<"\tEl area del elipse dado es: "<<area<<endl;
}