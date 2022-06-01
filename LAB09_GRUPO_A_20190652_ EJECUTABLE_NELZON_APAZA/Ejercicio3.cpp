/*
DATOS PERSONALES:
Alumno: Apaza Apaza Nelzon Jorge 
CUI:20190652
CURSO: CC2 - Laboratorio 09 - GRUPO A
*/
/*
EJERCICIO 3. Se pide escribir una función utilizando plantillas que tome dos valores genéricos de tipo char y string (5 veces);
char corresponde a una letra y string corresponde al apellido. El programa debe mostrar por pantalla el siguiente formato de correo
electrónico: char/string@unsa.edu.pe.

PASOS:
1. crear un plantilla.
2. Creamos función que tome valores char o string.(Hacerlo 5 veces)
    #Char ---> Una letra 'a'
    #string ----> Apellido 'asddasd'
3. Se debe mostrar el siguiente formato:
    char/string@unsa.edu.pe.
*/
#include "iostream"
#include "stdlib.h"
#include "string.h"
#include "ctype.h"//para tolower
using namespace std;

template <class Dato_General>//plantilla
void hacer_correo(Dato_General,Dato_General *);//prototipo de función


int main(){
    char letra;
    string apellido;
    //El for iría aquí
    for (int i = 0; i < 5; i++)//repetiremos 5 veces
    {
        cout<<"--------- Peticion de datos N: "<<i+1<<" ----------"<<endl;
        cout<<"Ingrese una letra: "<<endl;
        cin>>letra;
        //pedimos apellido
        cout<<"Ingrese su apellido"<<endl;
        cin>>apellido;
        int longitud=apellido.size();
        char *puntero_char_string=new char[longitud];
        for (int i = 0; i < longitud; i++)
        {
            puntero_char_string[i]=apellido[i];
        }
        hacer_correo(letra,puntero_char_string);   
    }
    
    return 0;
}


template <class Dato_General>//plantilla
//Desarrollamos la función
void hacer_correo(Dato_General letra,Dato_General *apellido){

    letra=tolower(letra);//transformamos en minúscula
    //hallamos el tamaño de la palabra apellido y la ponemos en minúsculas
    for (int i = 0; i < strlen(apellido); i++)//strlen() halla la longitud de un char *
    {
        apellido[i]=tolower(apellido[i]);//transformamos a minúscula
    }
    cout<<"Su correo es: ";
    cout<<"\t"<<letra<<apellido<<"@unsa.edu.pe."<<endl;
}