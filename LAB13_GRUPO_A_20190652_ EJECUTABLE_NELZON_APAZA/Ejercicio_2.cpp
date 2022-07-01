/*
DATOS:
- ALUMNO: Nelzon Jorge Apaza Apaza
- CUI: 20190652
- CURSO: CC2 Laboratorio - GA - Laboratorio 13
*/
/*
2. Implementar un programa que maneje un arreglo de estructuras que calcule la
nota final del Ciencia de la Computación. El programa debe permitir el ingreso
de cualquier cantidad de alumnos y para cada alumno, se podrá ingresar nombre,
grupo, nota de la primera fase, segunda fase, tercera fase y proyecto final. El
porcentaje de cada ítem es 15%, 20%, 25% y 40% respectivamente.

1. Ingresar cantidad de alumnos.
2. CADA ALUMNO:
    2.1 Ingresar nombre , grupo, nota1, nota2, nota3, nota_proyect.
3. Procedimiento de agregar y mostrar lo que se tiene
4. Procedimiento de sacar porcentaje
*/

#include "iostream"
#include "stdlib.h"
#include "string.h"

using namespace std;

struct NOTAS
{
    string nombre;
    char grupo;
    float nota1, nota2,nota3,nota_proyect;
    NOTAS *siguiente;

};

void agregar_info(NOTAS *&, string, char, float, float, float, float);
void imprimir_info(NOTAS *&, int);//int será para la cantidad

int main(){
    NOTAS *alumnos=NULL;
    string nombre;
    char grupo;
    float nota1, nota2,nota3,nota_proyect;
    int cantidad_alumnos;
    cout<<"Ingrese la cantidad de alumnos a ingresar: "<<endl;
    cin>>cantidad_alumnos;
    cout<<"------- Ingresaremos datos ----- "<<endl;//de acuerdo a la cantidad
    for (int i = 0; i < cantidad_alumnos; i++)
    {
        cout<<endl<<"-------- Alumno "<<i+1<<" --------"<<endl;
        cout<<"Ingrese el nombre del alumno "<<i+1<<": "<<endl;
        cin>>nombre;
        cout<<"Ingrese el grupo del alumno "<<i+1<<": "<<endl;
        cin>>grupo;
        cout<<"Ingrese la nota 1 del alumno "<<i+1<<": "<<endl;
        cin>>nota1;
        cout<<"Ingrese la nota 2 del alumno "<<i+1<<": "<<endl;
        cin>>nota2;
        cout<<"Ingrese la nota 3 del alumno "<<i+1<<": "<<endl;
        cin>>nota3;
        cout<<"Ingrese la nota del proyecto del alumno "<<i+1<<": "<<endl;
        cin>>nota_proyect;
        agregar_info(alumnos,nombre,grupo,nota1, nota2,nota3,nota_proyect);
    }

    cout<<endl<<"------- MOSTRAREMOS datos ----- "<<endl;
    imprimir_info(alumnos,cantidad_alumnos);
    return 0;
}

void agregar_info(NOTAS *& nodo, string _nombre, char _grupo, float _nota1, float _nota2, float _nota3, float _nota_proyect){
    NOTAS *nuevo_nodo=new NOTAS;
    nuevo_nodo->nombre=_nombre;
    nuevo_nodo->grupo=_grupo;
    nuevo_nodo->nota1=_nota1;
    nuevo_nodo->nota2=_nota2;
    nuevo_nodo->nota3=_nota3;
    nuevo_nodo->nota_proyect=_nota_proyect;
    nuevo_nodo->siguiente= nodo;
    nodo=nuevo_nodo;
}

void imprimir_info(NOTAS *& nodo, int cantidad){//para imprimir los datos pedidos en el ejercicio
    NOTAS *puntero_datos=new NOTAS();
    puntero_datos=nodo;
    for (int i = 0; i < cantidad; i++)
    {
        cout<<"\t Nombre: "<<puntero_datos->nombre<<endl;
        cout<<"\t Grupo: "<<puntero_datos->grupo<<endl;
        cout<<"\t Nota 1: "<<puntero_datos->nota1<<endl;
        cout<<"\t Nota 2: "<<puntero_datos->nota2<<endl;
        cout<<"\t Nota 3: "<<puntero_datos->nota3<<endl;
        cout<<"\t Nota Proyecto final: "<<puntero_datos->nota_proyect<<endl;
        //Sacamos promedio
        cout<<"Su promedio final es: "<<(puntero_datos->nota1*0.15)+(puntero_datos->nota2*0.2)+(puntero_datos->nota3*0.25)+(puntero_datos->nota_proyect*0.4)<<endl;
        puntero_datos=puntero_datos->siguiente;
    }
    
}