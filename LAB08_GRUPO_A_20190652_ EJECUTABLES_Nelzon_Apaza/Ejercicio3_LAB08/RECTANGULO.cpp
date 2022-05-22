#include "RECTANGULO.h"
#include "iostream"
using namespace std;

RECTANGULO::RECTANGULO(float _menor, float _mayor){
    lado_menor=_menor;
    lado_mayor=_mayor;
}
RECTANGULO::~RECTANGULO(){}

void RECTANGULO::imprimir(){
    int opcion;
    cout<<"\tSus lados del RECTANGULO son los siguientes: "<<endl;
    cout<<"\tLado menor: "<<lado_menor<<endl;
    cout<<"\tLado mayor: "<<lado_mayor<<endl;
}

void RECTANGULO::area(){
    float area;
    area=lado_menor*lado_mayor;
    cout<<"\tEl area del rectangulo es: "<<area<<endl;
}

void RECTANGULO::perimetro(){
    float perimetro;
    perimetro=2*lado_menor + 2*lado_mayor;
    cout<<"\tEl perimetro del rectangulo es: "<<perimetro<<endl;
}