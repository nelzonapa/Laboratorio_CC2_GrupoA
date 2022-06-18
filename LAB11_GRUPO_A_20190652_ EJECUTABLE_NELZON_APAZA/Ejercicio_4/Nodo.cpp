#include "Nodo.h"
using namespace std;

NODO1::NODO1(){
    dato1=0;//dato que almacenará el nodo
    next1==NULL;//puntero que apunta al siguiente(next) elemento
    top1= NULL;//parte superior
    p1 = NULL;
    np1 = NULL;//para hacer pasos
}

void NODO1::agregar1(int dato){//La función agregar1 inserta un nuevo elemento

    np1 = new NODO1;
    np1->dato1 = dato;
    np1->next1 = NULL;
    if (top1 == NULL)
    {
        top1 = np1;//ponemos en la parte superior
    }
    else
    {
        np1->next1 = top1;//avanza de elemento
        top1 = np1;//actualizamos valor de top1
    }

}

int NODO1::eliminar1(){//La función eliminar1 elimina elemento
    int x = 999;//para las operaciones a realizarse en la clase Uso_todo
    if (top1 == NULL){//si no se tienen nada en el top
        return x;
    }
    else{
        p1 = top1;//almacenamos valor de top1 en aux p1
        top1 = top1->next1;//avanza al siguiente
        return(p1->dato1);//retorna el dato almacenado por el puntero auxiliar (p1)
        delete(p1);//eliminamos el p1
    }

}

void NODO1::mostrar1(){//lo que mostrará en la pantalla
    cout<<endl;
    NODO1 *p1;
    p1 = top1;
    cout<<"TORRE1-> "<<"\t";//para TORRE1
    while (p1 != NULL){
        cout<<p1->dato1<<"\t";//va imprimiendo el dato que se tiene
        p1 = p1->next1;//avanza
    }
    cout<<endl;
}

NODO1::~NODO1(){}
