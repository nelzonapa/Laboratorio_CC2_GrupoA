/*
DATOS PERSONALES:
Alumno: Apaza Apaza Nelzon Jorge 
CUI:20190652
CURSO: CC2 - Laboratorio - GRUPO A
*/
#include <iostream>
#include <stdlib.h>

/*
EJERCICIO 12:
Elabore un programa que calcule la serie de Fibonacci. La serie de Fibonacci es la
sucesión de números: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ... Cada número se calcula sumando
los dos anteriores a él.
*/

using namespace std;

/*
1. Pedimos un número
2. Entiende el logaritmo de fbonnacci: 1 1 2 3 5 8 13 ... n
    1 -> solo 1
    1 -> 1(anterior) + nada
    2 -> 1(anterior) + 1(anterior)
    3 -> 2(anterior) + 1(anterior)
3. Aplica a la fórmula.
4. Muestra resultado.
*/

int main(){
    /*PASO 1*/
    int num_ingre;
    cout<<"Ingrese el numero para mostrarle la serie de Fibonnacci: "<<endl;
    cin>>num_ingre;

    /*PASO 2*/
    int limite=num_ingre;
    //El USUARIO indica: el límite cuantas operaciones (cuántos numeros apareceran) se van a hacer.
    int aux_i=1;//--> Este servira como almacen y de paso ayudara a sumar.
    for (int i=0; i < limite; i++)
    {
        cout<<aux_i<<" ";//mostramos el avance
        if (i>=2){
            aux_i=(i-1)+aux_i;
        }
        else{
            aux_i=i+aux_i;
        }
    }

    cout<<endl;
    system("pause");

    return 0;
}