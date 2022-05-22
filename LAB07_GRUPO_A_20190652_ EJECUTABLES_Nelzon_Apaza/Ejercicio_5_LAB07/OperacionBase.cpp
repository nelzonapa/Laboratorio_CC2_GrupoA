#include "OperacionBase.h"
// #include "OperacionFactorial.h"
#include "iostream"
using namespace std;

void OperacionBase::set_operador(int _operador_numero){//definimos el numero
    operador_numero=_operador_numero;
}
int OperacionBase::get_operador(){//obtenemos el numero ingresado o almacenado
    return operador_numero;
}