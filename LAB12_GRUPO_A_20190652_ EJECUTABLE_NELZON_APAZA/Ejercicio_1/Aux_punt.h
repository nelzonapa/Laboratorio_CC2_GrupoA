#ifndef AUX_PUNT_H
#define AUX_PUNT_H

#include "Nodo.h"
#include "iostream"
using namespace std;

class Punteros_aux: public Nodo
{
public:
    //punteros de tipo nodo que usaremos en las demás clases y operaciones de COLA
    Nodo *frente;//Apunta al frente
    Nodo *atras;//apuntará atras
    Nodo *enlace;//apuntaránodo siguiente
    Punteros_aux();
    ~Punteros_aux();
};

#endif