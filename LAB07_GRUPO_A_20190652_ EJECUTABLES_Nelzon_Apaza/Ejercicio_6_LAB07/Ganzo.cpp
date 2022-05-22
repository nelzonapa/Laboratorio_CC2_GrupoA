#include "Ganzo.h"

GANZO::GANZO(int _patas,int _pico,string _cuerpo, string _graznido):AVE(_patas, _pico, _cuerpo){
    graznido=_graznido;
}
GANZO::~GANZO(){}

void GANZO::Graznar(){
    cout<<"Y DICE: "<<graznido<<endl;
}