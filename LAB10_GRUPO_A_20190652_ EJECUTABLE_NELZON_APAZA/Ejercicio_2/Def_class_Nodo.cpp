#include "Clase_Nodo.h"

//Desarrollo de la clase Nodo, constructor, funciones, destructor
Nodo::Nodo(){
    //creamos un nodo vacio, con datos nulos
    numero=0;
    enlace=NULL;
}

void Nodo::set_numero(int _numero){//para definir numero
    numero=_numero;
}

void Nodo::set_enlace(Nodo *_enlace){
    enlace=_enlace;
}

int Nodo::get_numero(){
    return numero;
}

//FÍJATE en lo que obtiene,(*) indica que se obtendrá un puntero de clase (Nodo)
Nodo *Nodo::get_enlace(){
    return enlace;
}

Nodo::~Nodo(){}