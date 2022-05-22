#ifndef RECTANGULO_H
#define RECTANGULO_H

class RECTANGULO{
    protected:
        float lado_menor,lado_mayor;
    public:
        RECTANGULO(float, float);//constructor
        ~RECTANGULO();//destructor
        virtual void imprimir();
        virtual void area();
        virtual void perimetro();

};

#endif