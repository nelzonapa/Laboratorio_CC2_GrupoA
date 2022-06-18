#include "Nodo2.h"
using namespace std;

NODO2::NODO2(){
    dato2=0;//dato que almacenará el nodo
    next2==NULL;//puntero que apunta al siguiente(next) elemento
    top2= NULL;//parte superior
    p2 = NULL;
    np2 = NULL;//para hacer pasos

}

void NODO2::agregar2(int dato){//La función agregar2 inserta un nuevo elemento
    np2 = new NODO2;
    np2->dato2 = dato;
    np2->next2 = NULL;
    if (top2 == NULL){
        top2 = np2;//ponemos en la parte superior
    }
    else{
        np2->next2 = top2;//avanza de elemento
        top2 = np2;//actualizamos valor de top2
    }
}

int NODO2::eliminar2(){//La función eliminar1 elimina elemento
    int b = 999;//para las operaciones a realizarse en la clase Uso_todo
    if (top2 == NULL){//si no se tienen nada en el top2
        return b;

    }
    else{
        p2 = top2;//almacenamos valor de top2 en aux p2
        top2 = top2->next2;//avanza al siguiente
        return(p2->dato2);//retorna el dato almacenado por el puntero auxiliar (p2)
        delete(p2);//eliminamos el p2
    }
}

void NODO2::mostrar2(){//lo que mostrará en la pantalla para la torre 2
    NODO2 *p2;
    p2 = top2;
    cout<<"TORRE2-> "<<"\t";
    while (p2 != NULL){
        cout<<p2->dato2<<"\t";//va imprimiendo el dato que se tiene
        p2 = p2->next2;//avanza
    }
    cout<<endl;
}

NODO2::~NODO2(){}