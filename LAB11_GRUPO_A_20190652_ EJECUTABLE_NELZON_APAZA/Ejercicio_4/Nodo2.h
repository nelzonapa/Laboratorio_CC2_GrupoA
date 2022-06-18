#ifndef NODO2_H
#define NODO2_H

#include "iostream"

class NODO2{
    public://establecemos en public ya que no deseamos obtener un error
        int dato2;
        NODO2 *next2;
        NODO2 *top2;
        NODO2 *p2;
        NODO2 *np2;
        
        NODO2();//constructor por defecto
        //cada función tiene en el doc .cpp de la clase su definición
        void agregar2(int);
        int eliminar2();
        void mostrar2();
        ~NODO2();
};

#endif