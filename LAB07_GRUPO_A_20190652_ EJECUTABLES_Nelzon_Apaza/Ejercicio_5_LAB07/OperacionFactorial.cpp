#include "OperacionFactorial.h"
#include "iostream"
using namespace std;

int OperacionFactorial::Hallar_factorial(){
    //hallamos el factorial
    int numero;
    cout<<"Ingrese un numero para la OperacionBase: "<<endl;
    cin>>numero;
    set_operador(numero);
    int numero_operador = get_operador();
    for (int i = numero_operador-1; i>0; i--)//comenzamos a multiplicar desde el 4
    //5*4*3*2*1
    {
        numero_operador=numero_operador*i;//numero almacenará al factorial
    }
    return numero_operador;
}
void OperacionFactorial::mostrar_resultado(){
    cout<<"El factorial del numero ingresado es: "<<Hallar_factorial();
}