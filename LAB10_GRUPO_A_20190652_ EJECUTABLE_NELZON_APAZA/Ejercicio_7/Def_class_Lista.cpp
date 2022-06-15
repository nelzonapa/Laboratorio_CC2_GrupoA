// #include "iostream"
#include "Clase_Lista.h"

Lista::Lista(){
    numero_nodos=0;
    cabeza=NULL;
}

int Lista::get_numero_nodos(){
    return numero_nodos;
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
        numero_nodos++;
    }
    else{//en caso contrario se tenga nodos en la lista
        //obtenemos el último nodo
        get_ultimo()->set_enlace(_nodo_nuevo);
        //Cuando este en el último nodo, que en el enlace siguiente, ubique el nuevo nodo
        numero_nodos++;
    }
}

//Agregar elementos al inicio de la lista
void Lista::Eliminar_posicion(int posicion){
    //Creamos punteros auxiliares:
    Nodo *Anterior=NULL;//para mantener la cadena
    Nodo *Avanzar;
    Avanzar=get_cabeza();

    //si la cabeza apunta a NUll, significa que no hay nada en la lista, es decir, no existen nodos
    if (get_cabeza()==NULL){
        cout<<"No hay elementos en la lista"<<endl;
        cout<<"No se puede eliminar ningun elemento"<<endl;
    }
    else{
        for (int i=1;i<=numero_nodos;i++)//avanza toda la lista de nodos
        {
            Anterior=Avanzar;//anterior va guardando el dirección de avanzar que irá cambiando desde la posición, para guardar lo demás
            Avanzar=Avanzar->get_enlace();//va avanzando
            if (i==(posicion-1))
            {   
                Anterior->set_enlace(Avanzar->get_enlace());//reserva lo anterior
                numero_nodos--;
            }
        }
        
    }
}

void Lista::Ordenar_Ascendente(){//En proceso
    Nodo *cabeza_aux=get_cabeza();//apunta siempre al primero
    Nodo *Aux=NULL;//para intercambiar
    Nodo *Numero;//auxiliar para no perder datos
    while (cabeza_aux!=NULL)//debe existir minimo 1 nodo
    {
        Aux=cabeza_aux->get_enlace();//aux es el siguiente nodo después de lo que apunta cabeza_aux
        while (Aux!=NULL)
        {
            if (cabeza_aux->get_numero() > Aux->get_numero())//si el primer nodo es mayor que el segundo, que se cambien entre si
            {
                Numero=Aux->get_enlace();//La variable Numero, almacenará a el nodo Aux, para hacer el cambio y no perder su dato.
                Aux->set_enlace(cabeza_aux->get_enlace());//hacemos el cambio
                cabeza_aux->set_enlace(Numero);//se completa el cambio entre los 2 nodos
            }
            
            Aux=Aux->get_enlace();//para avanzar por los nodos y salga del ciclo
        }
        
        cabeza_aux=cabeza_aux->get_enlace();//para avanzar por los nodos y salga del ciclo
    }
    
}

Lista::~Lista(){}