/*
DATOS PERSONALES:
Alumno: Apaza Apaza Nelzon Jorge 
CUI:20190652
CURSO: CC2 - Laboratorio 08 - GRUPO A
*/
#include "iostream"
#include "stdlib.h"
using namespace std;

//Incluimos las clases con .h y .cpp
//Estamos tomando las demás formas de los anteriores ejercicios como ejemplo
#include "FORMA.h"
#include "FORMA.cpp"
#include "RECTANGULO.h"
#include "RECTANGULO.cpp"
#include "ELIPSE.h"
#include "ELIPSE.cpp"
#include "CUADRADO.h"
#include "CUADRADO.cpp"
#include "CIRCULO.h"
#include "CIRCULO.cpp"

int main(){
    /*-----------------LLENADO DE DATOS de las figuras-----------------*/
    string color;
    cout<<"Ingrese el color que tendran todas las formas: "<<endl;
    getline(cin,color);
    //crear un vector puntero .. mas detalles en pasos.txt
    FORMA *vector_formas[4];
    //Bucle for:
    for (int i = 0; i < 4; i++)
    {   
        //Damos una posición específica para cada forma y llenamos los datos
        switch (i)
        {
        case 0:
            vector_formas[i]=new RECTANGULO(color,"Rectangulin",5.6,12.5);
            break;
        case 1:
            vector_formas[i]=new CUADRADO(color,"Cuadradin",5.6,5.6);
            break;
        case 2:
            vector_formas[i]=new ELIPSE(color,"Elipsin",14.6,6.8);
            break;
        case 3:
            vector_formas[i]=new CIRCULO(color,"Circulin",6.8,6.8);
            break;
        default:
            break;
        }
    }
    /*-----------------IMPRIMIMOS DATOS por forma----------------*/
    //Imprimir cada forma y su area respectiva
    //HACIENDO uso de (Virtual)
    for (int i = 0; i < 4; i++)
    {
        cout<<"---------------Firgura "<<i+1<<"--------------"<<endl;
        vector_formas[i]->imprimir();
        cout<<endl;
        vector_formas[i]->area();
        
    }
    return 0;
}