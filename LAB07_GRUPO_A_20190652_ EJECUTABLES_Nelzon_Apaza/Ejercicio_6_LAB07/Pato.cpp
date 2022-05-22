#include "Pato.h"

PATO::PATO(int _patas,int _pico,string _cuerpo, string _parpar):AVE(_patas, _pico, _cuerpo){
    parpar=_parpar;
}
PATO::~PATO(){}

void PATO::Parpar(){
    cout<<"Y DICE: "<<parpar<<endl;
}