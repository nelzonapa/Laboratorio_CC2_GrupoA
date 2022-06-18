#include "Nodo3.h"

NODO3::NODO3(){
    dato3=0;//dato que almacenará el nodo
    next3==NULL;//puntero que apunta al siguiente(next) elemento
    top3 = NULL;//parte superior
    p3 = NULL;
    np3 = NULL;

}

void NODO3::agregar3(int dato){//La función agregar3 inserta un nuevo elemento
    np3 = new NODO3;
    np3->dato3 = dato;
    np3->next3 = NULL;
    if (top3 == NULL){
        top3 = np3;//ponemos en la parte superior
    }
    else{
        np3->next3 = top3;//avanza
        top3 = np3;//actualizamos valor de top2
    }
}

int NODO3::eliminar3(){
    int b = 999;//para las operaciones a realizarse en la clase Uso_todo
    if (top3 == NULL){//si top3 esta vacío
        return b;
    }
    else{
        p3 = top3;//almacenamos valor de top3 en aux p3
        top3 = top3->next3;//avanza
        return(p3->dato3);//retorna el dato almacenado por el puntero auxiliar (p3)
        delete(p3);//eliminamos el p3
    }
}

void NODO3::mostrar3()//lo que mostrará en la pantalla para la torre 3
{
    NODO3 *p3;
    p3 = top3;
    cout<<"TORRE3-> "<<"\t";
    while (p3 != NULL){
        //impresión
        cout<<p3->dato3<<"\t";
        p3 = p3->next3;
    }
    cout<<endl;
    cout<<endl;
}

NODO3::~NODO3(){}