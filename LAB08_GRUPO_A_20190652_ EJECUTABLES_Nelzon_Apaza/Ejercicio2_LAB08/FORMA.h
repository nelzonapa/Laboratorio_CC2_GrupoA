#ifndef FORMA_H
#define FORMA_H

#include "iostream"
using namespace std;
//Creamos clase FORMA
class FORMA{
    private://atributos
        string color;
        int x,y;//coordenadas del centro
        char *nombre_figura;//nombre de la figura
    public://métodos
        FORMA(string,int,int,char*);//CONSTRUCTOR
        ~FORMA();
        virtual void imprimir();//USO del polimorfismo mediante (virtual)
        string get_color();//obtenemos el color
        void set_nuevo_color();//cambiamos de color
        //pasamos al archivo .cpp para definir los métodos
};

#endif