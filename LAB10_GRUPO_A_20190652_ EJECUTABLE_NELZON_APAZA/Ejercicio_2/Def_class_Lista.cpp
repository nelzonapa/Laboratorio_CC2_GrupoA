// #include "iostream"
#include "Clase_Lista.h"

Lista::Lista(){
    cabeza=NULL;
}

void Lista::set_cabeza(Nodo *nodo){
    cabeza=nodo;
}

Nodo* Lista::get_cabeza(){
    return cabeza;
}
//Devolver el último nodo de una lista
Nodo* Lista::get_ultimo(){
    //nos ubicamos en el comienzo de la lista, es decir en cabeza
    //Pero tenemos que reservar a cabeza para que este siempre apunte al comienzo de la lista
    //por ello tendremos un puntero auxiliar llamado (ULTIMO):
    Nodo *ultimo=get_cabeza();
    while(ultimo->get_enlace()!=NULL){
        ultimo=ultimo->get_enlace();//el mismo pero en su siguiente campo(Pasa al siguiente nodo)
        /*
        Avanzará hasta encontrarse con el último nodo.
        Al encontrar el último nodo que está apunatndo a NULL se dentendrá.
        y entenderá que se encuentra en el último nodo.☝
        */
    }
    return ultimo;
}

//Agrgear nuevos nodos
void Lista::Agregar_final(Nodo *_nodo_nuevo){
    //si la cabeza apunta a NUll, significa que no hay nada en la lista, es decir, no existen nodos
    if (get_cabeza()==NULL){
        cout<<"No hay elementos en la lista"<<endl;
        cout<<"Guardando nuevo nodo ingresado"<<endl;
        set_cabeza(_nodo_nuevo);//agregamos un nuevo nodo
    }
    else{//en caso contrario se tenga nodos en la lista
        //obtenemos el último nodo
        get_ultimo()->set_enlace(_nodo_nuevo);
        //Cuando este en el último nodo, que en el enlace siguiente, ubique el nuevo nodo
    }
}

//Agregar elementos al inicio de la lista
void Lista::Agregar_inicio(Nodo *_nodo_nuevo){
    //si la cabeza apunta a NUll, significa que no hay nada en la lista, es decir, no existen nodos
    if (get_cabeza()==NULL){
        cout<<"No hay elementos en la lista"<<endl;
        cout<<"Guardando nuevo nodo ingresado"<<endl;
        set_cabeza(_nodo_nuevo);//agregamos un nuevo nodo
    }
    else{
        //Creamos un puntero temporal
        Nodo *Temporal;
        Temporal=get_cabeza();//le paso la dirección del primer elemento
        //Creamos otro puntero axiliar que almacene un dato para hacerlo avanzar
        Nodo *Avance=get_cabeza();
        while (Avance->get_enlace()!=NULL)
        {
            Avance->set_enlace(Avance);
            Avance=Avance->get_enlace();//avanza de nodo en nodo hasta llegar al final(NULL)
        }
        
        // get_ultimo()->set_enlace(get_ultimo());//desplaza un espacio más
        // //en caso contrario se tenga nodos en la lista
        // //obtenemos el último nodo
        get_cabeza()->set_enlace(_nodo_nuevo);
        //Cuando este en el último nodo, que en el enlace siguiente, ubique el nuevo nodo
    }
}

Lista::~Lista(){}