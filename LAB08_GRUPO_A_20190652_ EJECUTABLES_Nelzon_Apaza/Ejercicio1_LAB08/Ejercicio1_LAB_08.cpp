/*
DATOS PERSONALES:
Alumno: Apaza Apaza Nelzon Jorge 
CUI:20190652
CURSO: CC2 - Laboratorio 08 - GRUPO A
*/
#include "iostream"
#include "stdlib.h"
#include "string.h"
using namespace std;
//Clases:
#include "FORMA.h"
#include "FORMA.cpp"
#include "RECTANGULO.h"
#include "RECTANGULO.cpp"
//Función principal:
int main(){
    //crearemos un aobjeto array:
    FORMA *vector_de_formas[2];//Un vector que contenga 2 tipos
    vector_de_formas[0]=new RECTANGULO("morado",3.2,5.6,"Rectangulito",3.0,5.0);
    cout<<"----Mostrando informacion de la figura: ----"<<endl;
    vector_de_formas[0]->imprimir();

    cout<<endl<<"------Probando el cambio de color------";
    system("pause");
    cout<<endl<<"\tColor: "<<vector_de_formas[0]->get_color()<<endl;
    vector_de_formas[0]->set_nuevo_color();
    cout<<endl<<"\tNuevo Color: "<<vector_de_formas[0]->get_color()<<endl;
    return 0;
}