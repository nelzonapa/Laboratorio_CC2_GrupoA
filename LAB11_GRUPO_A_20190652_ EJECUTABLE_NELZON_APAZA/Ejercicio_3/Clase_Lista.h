#ifndef CLASE_LISTA_H
#define CLASE_LISTA_H

#include "Clase_Nodo.h"//este ya contiene el iostream y el std
using namespace std;

class Lista{
    private:
        //Al igual que Nodo, este debe de tener un apuntador
        //Apuntador o puntero cabeza, que apuntará a la cabeza
        Nodo *cabeza;//comienzo de una cadena de nodos

    public:
        Lista();
        //Definir la cabeza
        //le pasaremos un puntero de tipo Nodo
        void set_cabeza(Nodo *);
        //Para obtener la cabeza, obtendremos un puntero de clase Nodo
        Nodo* get_cabeza();

        //FUNCIONES BÁSICAS(diseños):
        //nos devolverá el último puntero(que contiene la dirección del último nodo) de clase Nodo(que tiene la cabeza)
        Nodo* get_ultimo();
        //Para agregar un nuevo nodo
        void Agregar(Nodo *);
        //Para buscar el nodo que estamos buscando
        Nodo* Buscar(int);//con int, porque buscaremos ese dato, que es de tipo int
        //Eliminar
        void eliminar(int);//con int, porque buscaremos ese dato, que es de tipo int
        ~Lista();
};
//por ahora no, PERO SI NECESITAS FUTURAS FUNCIONES: https://ronnyml.com/2009/07/04/listas-enlazadas-clase-lista-en-c/

#endif