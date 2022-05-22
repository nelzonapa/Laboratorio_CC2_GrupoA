#include "CUADRADO.h"
#include "iostream"
using namespace std;
CUADRADO::CUADRADO(float _menor, float _mayor):RECTANGULO(_menor,_mayor){}
CUADRADO::~CUADRADO(){}

void CUADRADO::imprimir(){
    RECTANGULO::imprimir();
    if (lado_menor==lado_mayor)//vemos si se obtuvo un cuadrado o un rectangulo
    {
        cout<<"\tSu figura es un CUADRADO"<<endl;
        area();
        perimetro();
    }
    else
    {
        cout<<"\tSu figura es un RECTANGULO"<<endl;
        RECTANGULO::area();
        RECTANGULO::perimetro();

    }
    
}