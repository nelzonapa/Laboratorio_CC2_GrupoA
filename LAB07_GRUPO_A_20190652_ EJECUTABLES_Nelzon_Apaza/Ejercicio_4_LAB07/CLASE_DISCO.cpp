#include "CLASE_DISCO.h"

CLASE_DISCO::CLASE_DISCO(){}
CLASE_DISCO::~CLASE_DISCO(){}

void CLASE_DISCO::poner_nombre_disco_multimedia(){
    cout<<"A continuacion ingresara 3 tipos de multimedia a usar"<<endl;
    system("pause");
    for (int i = 0; i < 3; i++)
    {
        cout<<"Ingrese la multimedia "<<i+1<<endl;
        getline(cin,puntero_array_dina[i]);//ingresa el nombre
    }
    cout<<"Acontinuacion, rellenara el nombre de cada disco de multimedia ya ingresada"<<endl;
    system("pause");
    for (int i = 0; i < 3; i++)
    {
        cout<<"Nombre del disco: "<<i+1<<endl;
        getline(cin,puntero_nombre[i]);
    }
    cout<<"Nombres de disco llenado correctamente"<<endl;
    system("pause");
}

void CLASE_DISCO::mostrar_toda_info(){
    cout<<"Mostrando toda la informacion introducida"<<endl;
    system("pause");
    for (int i = 0; i < 3; i++)
    {
        cout<<"\tDisco de multimedia tipo: "<<get_multimedia()[i]<<" llamado "<<"\""<<puntero_nombre[i]<<"\""<<endl;
    }
    system("pause");
}