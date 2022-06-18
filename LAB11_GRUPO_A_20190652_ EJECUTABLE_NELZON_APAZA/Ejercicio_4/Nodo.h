#ifndef NODO_H
#define NODO_H

#include "iostream"

class NODO1{
    public://establecemos en public ya que no deseamos obtener un error
        int dato1;
        NODO1 *next1;
        NODO1 *top1;
        NODO1 *p1;
        NODO1 *np1;

        NODO1();//constructor por defecto
        //cada función tiene en el doc .cpp de la clase su definición
        void agregar1(int);
        int eliminar1();
        void mostrar1();
        ~NODO1();//destructor
};

#endif