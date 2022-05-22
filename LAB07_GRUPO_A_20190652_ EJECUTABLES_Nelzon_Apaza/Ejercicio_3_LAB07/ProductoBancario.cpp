#include "ProductoBancario.h"

ProductoBancario::ProductoBancario(string _cliente, double _saldo, int _numproductos){
    cliente=_cliente;
    saldo=_saldo;
    numProductos=_numproductos;
}
ProductoBancario::~ProductoBancario(){}
void ProductoBancario::imprimir(){
    cout<<"Cliente: "<<cliente<<endl<<"Saldo: "<<saldo<<endl<<"Numero de productos: "<<numProductos<<endl;
}