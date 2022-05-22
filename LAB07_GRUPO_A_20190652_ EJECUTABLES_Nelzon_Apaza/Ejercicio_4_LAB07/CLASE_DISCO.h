#ifndef CLASE_DISCO_H
#define CLASE_DISCO_H
#include "CLASE_MULTIMEDIA.h"
/*
2. Crear Hijo CLASE_DISCO de clase_multimedia
    2.1 atributo aparte de los que pusiste: OTRO + que tu le des
    2.2 método:
    Imprimir información de todo
*/
class CLASE_DISCO: public CLASE_MULTIMEDIA{
    protected:
        string *puntero_nombre=new string[3];//ingresará el nombre de 3 discos de cada tipo de multimedia
    public:
        CLASE_DISCO();
        ~CLASE_DISCO();
        void poner_nombre_disco_multimedia();
        void mostrar_toda_info();
};
#endif