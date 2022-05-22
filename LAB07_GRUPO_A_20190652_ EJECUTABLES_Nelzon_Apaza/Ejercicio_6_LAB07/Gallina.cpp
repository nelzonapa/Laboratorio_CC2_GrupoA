#include "Gallina.h"

GALLINA::GALLINA(int _patas,int _pico,string _cuerpo, string _cacarear):AVE(_patas, _pico, _cuerpo){
    cacareo=_cacarear;
}
GALLINA::~GALLINA(){}

void GALLINA::Cacarear(){
    cout<<"Y DICE: "<<cacareo<<endl;
}