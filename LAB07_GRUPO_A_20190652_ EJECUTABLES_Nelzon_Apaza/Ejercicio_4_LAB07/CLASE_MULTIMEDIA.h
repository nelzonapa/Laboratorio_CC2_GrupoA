#ifndef CLASE_MULTIMEDIA_H
#define CLASE_MULTIMEDIA_H
/*
1. Crear clase CLASE_MULTIMEDIA
    1.1 definir tus atributos y métodos: 
*/
class CLASE_MULTIMEDIA{
    protected:
        //Haré una lista de nombres de multimedia de música (5 en total).
        string *puntero_array_dina=new string[3];//usamos un array dinámico
    public:
        CLASE_MULTIMEDIA();
        ~CLASE_MULTIMEDIA();
        string *get_multimedia();
};

#endif