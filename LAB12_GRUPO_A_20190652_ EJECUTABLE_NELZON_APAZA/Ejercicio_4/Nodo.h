#ifndef NODO_H
#define NODO_H

#include "iostream"
using namespace std;

class Nodo{
    public:
        int dato;//dato que tendrá el nodo
        Nodo *enlace;//puntero enlace, que apuntará al siguiente nodo
        Nodo();
        ~Nodo();
};

#endif