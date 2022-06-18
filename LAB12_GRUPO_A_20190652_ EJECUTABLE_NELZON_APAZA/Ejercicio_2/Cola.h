#ifndef COLA_H
#define COLA_H

#include "Nodo.h"
#include "Aux_punt.h"
#include "iostream"
using namespace std;

class COLA: public Punteros_aux //COLA hereda de Punteros_aux
{
    public:
    //puntero auxiliar q y t(este último de tipo NODO), los cuales ayudarán a desarrolar la COLA
        Punteros_aux q;
        Nodo *t;
        COLA();
        ~COLA();
        void Inicializar() {
            q.frente = NULL;
            q.atras = NULL;
        }
        void agregar_elem();
        void eliminar_elem();
        void mostrar_elem();
};

#endif