#ifndef NODO3_H
#define NODO3_H
#include "iostream"
using namespace std;
class NODO3{
    public://establecemos en public ya que no deseamos obtener un error
        int dato3;
        NODO3 *next3;
        NODO3 *top3;
        NODO3 *p3;
        NODO3 *np3;
        
        NODO3();//constructor por defecto
        //cada función tiene en el doc .cpp de la clase su definición
        void agregar3(int);
        int eliminar3();
        void mostrar3();
        ~NODO3();
};

#endif