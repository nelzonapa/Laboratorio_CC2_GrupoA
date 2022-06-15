#ifndef CLASE_NODO_H
#define CLASE_NODO_H

#include "iostream"
using namespace std;

//CLASE NODO para los nodos
class Nodo{
    private:
        //Numero o dato a almacenar
        int numero;
        //Puntero de la misma clase Nodo
        Nodo *enlace;
    public:
        Nodo();//constructor por defecto
        //setters y getters:
        void set_numero(int);//Introducir dato que se almacenará en el Nodo
        void set_enlace(Nodo *);//Introducir un puntero de clase Nodo
        int get_numero();//obtener el dato almacenado en el Nodo
        Nodo* get_enlace();//Se obtendrá un puntero de clase Nodo
        ~Nodo();//destructor
};

//Pasemos a implementarlo en el archivo cpp
#endif