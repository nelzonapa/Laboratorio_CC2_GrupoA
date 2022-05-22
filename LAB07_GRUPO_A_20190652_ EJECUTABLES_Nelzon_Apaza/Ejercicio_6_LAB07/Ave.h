#ifndef AVE_H
#define AVE_H

#include "iostream"
#include "string.h"
using namespace std;

class AVE{
    private:
        int patas;
        int pico;
        string cuerpo;
    public:
        AVE(int,int,string);
        ~AVE();
        void mostrar_caracteristicas();
};

#endif