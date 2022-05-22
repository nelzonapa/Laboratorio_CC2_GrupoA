#ifndef ELIPSE_H
#define ELIPSE_H

class ELIPSE{
    protected:
        float R, r;//R=radio mayor y r=radio menor
    public:
        ELIPSE(float, float);
        ~ELIPSE();
        virtual void area();
};

//PASAMOS A DEFINIR LOS MÉTODOS EN ELIPSE.CPP
#endif