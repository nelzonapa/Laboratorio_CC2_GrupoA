#ifndef RECTANGULO_H
#define RECTANGULO_H
#include "FORMA.h"

//CReamos la clase HIJA RECTANGULO de FORMA
class RECTANGULO: public FORMA{
    private:
        float lado_menor,lado_mayor;
    public:
        RECTANGULO(string,int,int,char*, float, float);//constructor
        ~RECTANGULO();//destructor
        void imprimir();
        void area();
        void perimetro();
        void camb_tamanio();//cambiamos tamanio: En si para mostrar el resultado
        //cambiaremos el lado menor y mayor y mostraremos sus nuevos resultados(demás funciones).

};

#endif