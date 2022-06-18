#ifndef USO_TODO_H
#define USO_TODO_H
#include "iostream"
using namespace std;

#include "Nodo.h"
#include "Nodo2.h"
#include "Nodo3.h"

//declaramos la clase que usará todas las demás clases.
class Uso_todo: public NODO1 , public NODO2 , public NODO3
{
    public:
        Uso_todo();
        //funciones generales
        int parte_top_torre();
        void juego_todo(int);
        ~Uso_todo();
};

#endif