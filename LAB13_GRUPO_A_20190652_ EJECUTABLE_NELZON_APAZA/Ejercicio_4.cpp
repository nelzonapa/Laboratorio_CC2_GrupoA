/*
DATOS:
- ALUMNO: Nelzon Jorge Apaza Apaza
- CUI: 20190652
- CURSO: CC2 Laboratorio - GA - Laboratorio 13
*/
/*
EJERCICIO 4. Implemente un programa que maneje un arreglo de estructuras que solicite
nombre, sexo y sueldo de los empleados de una empresa y debe mostrar por
pantalla el menor y mayor sueldo.

PASOS:
1. Datos:
    - nombre
    - sexo
    - sueldo
2. Solictar el numero de los empleados
3. Mostrar el menor y el mayor sueldo
*/
#include "iostream"
#include "stdlib.h"
#include "string.h"

using namespace std;

struct EMPLEADO
{
    //datos a usar
    string nombre,sexo;
    float sueldo;
    EMPLEADO *siguiente;
};

void agregar_empleado(EMPLEADO *&,string,string,float);
void mostrar_menor_sueldo(EMPLEADO *&, int);
void mostrar_mayor_sueldo(EMPLEADO *&,int);

int main(){
    string nombre, sexo;
    float sueldo;
    int cantidad_empleados;
    EMPLEADO *empleados=NULL;
    cout<<"Cuantos empleados tiene la empresa: "<<endl;
    cin>>cantidad_empleados;
    //ingresamos los empleados
    for (size_t i = 0; i < cantidad_empleados; i++)
    {
        cout<<"------------- Empleado "<<i+1<<" --------------"<<endl;
        cout<<"Ingrese el nombre del empleado: "<<endl;
        cin>>nombre;
        cout<<"Ingrese el sexo: "<<endl;
        cin>>sexo;
        cout<<"Ingrese el sueldo a pagar: "<<endl;
        cin>>sueldo;
        agregar_empleado(empleados,nombre,sexo,sueldo);
    }
    mostrar_menor_sueldo(empleados,cantidad_empleados);
    mostrar_mayor_sueldo(empleados,cantidad_empleados);

    return 0;
}

void agregar_empleado(EMPLEADO *& nodo,string _nombre,string _sexo,float _sueldo){
    //para agregar nuevos
    EMPLEADO *nuevo_nodo=new EMPLEADO();
    nuevo_nodo->nombre=_nombre;
    nuevo_nodo->sexo=_sexo;
    nuevo_nodo->sueldo=_sueldo;
    nuevo_nodo->siguiente=nodo;
    nodo=nuevo_nodo;
}

void mostrar_menor_sueldo(EMPLEADO *& nodo, int cantidad){//para mostrar el menor sueldo
    cout<<endl<<"---------- Empleado con el MENOR sueldo ---------"<<endl;
    EMPLEADO *puntero_nodo=new EMPLEADO();
    EMPLEADO *puntero_menor=new EMPLEADO();//almacenará o apuntará al menor dato que encontremos
    puntero_nodo=nodo;
    puntero_menor->sueldo=puntero_nodo->sueldo;
    for (int i = 0; i < cantidad; i++)
    {
        if ((puntero_menor->sueldo)>=(puntero_nodo->sueldo))
        {
            //almacenamos al sueldo menor
            puntero_menor->sueldo=puntero_nodo->sueldo;
            //de paso almacenamos el nombre
            puntero_menor->nombre=puntero_nodo->nombre;
            //para avanzar
            puntero_nodo=puntero_nodo->siguiente;
        }
        else
        {
            puntero_nodo=puntero_nodo->siguiente;
        }
        
    }
    cout<<puntero_menor->nombre<<" es el empleado con MENOR sueldo ("<<puntero_menor->sueldo<<")"<<endl;
    
}

void mostrar_mayor_sueldo(EMPLEADO *& nodo, int cantidad){//para mostrar el mayor sueldo
    cout<<endl<<"---------- Empleado con el MAYOR sueldo ---------"<<endl;
    EMPLEADO *puntero_nodo=new EMPLEADO();
    EMPLEADO *puntero_mayor=new EMPLEADO();//almacenará o apuntará al MAYOR dato que encontremos
    puntero_nodo=nodo;
    puntero_mayor->sueldo=puntero_nodo->sueldo;
    for (int i = 0; i < cantidad; i++)
    {
        if ((puntero_mayor->sueldo)<=(puntero_nodo->sueldo))
        {
            //almacenamos al sueldo menor
            puntero_mayor->sueldo=puntero_nodo->sueldo;
            //de paso almacenamos el nombre
            puntero_mayor->nombre=puntero_nodo->nombre;
            //para avanzar
            puntero_nodo=puntero_nodo->siguiente;
        }
        else
        {
            puntero_nodo=puntero_nodo->siguiente;
        }
        
    }
    cout<<puntero_mayor->nombre<<" es el empleado con MAYOR sueldo ("<<puntero_mayor->sueldo<<")"<<endl;
    
}