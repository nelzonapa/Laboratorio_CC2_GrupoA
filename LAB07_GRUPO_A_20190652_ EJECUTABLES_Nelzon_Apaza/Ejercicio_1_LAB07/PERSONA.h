/*CLASE PERSONA DE EJERCICIO 1*/
#ifndef PERSONA_H
#define PERSONA_H
using namespace std;

//PASO 1
class PERSONA{
    protected:
        int edad;
        string nombre;
    public:
        PERSONA();//constructor por defecto
        ~PERSONA();//Destructor
        //SETTERS
        void SET_edad(int);
        void SET_nombre(string);
        void mostrar_persona();
};
#endif