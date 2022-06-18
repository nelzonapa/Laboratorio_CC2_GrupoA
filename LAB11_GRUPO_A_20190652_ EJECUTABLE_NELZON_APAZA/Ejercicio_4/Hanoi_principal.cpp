/*
DATOS PERSONALES:
Alumno: Apaza Apaza Nelzon Jorge 
CUI:20190652
CURSO: CC2 - Laboratorio 11 - GRUPO A
*/
/*
EJERCICIO 4. Escribir un programa que dé la solución al problema de las Torres de Hanoi para
N discos, utilizando pilas, las cuales representen cada uno de los postes:

PASOS:
1. Se creara 3 clases de NODOS(NODO1,NODO2,NODO3).
2. Se tendrá una cuarta clase(Uso_todo) que heredará todo de las demás clases.
3. Cada clase tiene sus atributos y funciones. 
4. Todos los archivos trabajan juntos
*/
#include "stdlib.h"
#include "stdio.h"
#include "conio.h"
#include "iostream"
#include "math.h"
#include "Nodo.h"
#include "Nodo.cpp"
#include "Nodo2.h"
#include "Nodo2.cpp"
#include "Nodo3.h"
#include "Nodo3.cpp"
#include "Uso_todo.h"
#include "Uso_todo.cpp"

using namespace std;

int main(){
    int n;//n numero de discos
    cout<<"Ingrese el numero de discos para comenzar:\n";//pedimos los n discos
    cin>>n;
    Uso_todo objeto;//creamos el objeto
    for (int i = n; i >= 1; i--){
        objeto.agregar1(i);//agregamos
    } 
    objeto.juego_todo(n);//
    system("pause");//para poner pausa en el programa
}