#include "Ave.h"

// #include "iostream"
// using namespace std;

AVE::AVE(int _patas,int _pico,string _cuerpo){
    patas=_patas;
    pico=_pico;
    cuerpo=_cuerpo;
}

AVE::~AVE(){}

void AVE::mostrar_caracteristicas(){
    cout<<"Su animal tiene "<<patas<<" patas, "<<pico<<" pico y tiene el cuerpo lleno de "<<cuerpo<<endl;
}
