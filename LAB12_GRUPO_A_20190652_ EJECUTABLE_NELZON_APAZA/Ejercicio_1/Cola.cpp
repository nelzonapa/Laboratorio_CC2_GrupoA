#include "Cola.h"

COLA::COLA(){}

void COLA::agregar_elem() {//para agregar un elemnto a la cola
    t=new(Nodo);//separamos espacio
    cout<<"Ingrese el numero a agregar:";//pedimos dato
    cin>>t->dato;//guardamos en t
    cout<<"El numero agregado fue: " <<t->dato;//mostramos que se almacenó con éxito
    t->enlace = NULL;//definimos que apunte a NULL
    if((q.atras)== NULL)//si el puntero de atras no apunta a nada
		q.frente = t;//Puntero q del frente, apunta al nodo que esta apuntando t
	else
	q.atras->enlace = t;//puntero q de atras apunte lo que apunta enlace que será t(lo que apunta este) 
	q.atras = t;
}
void COLA::mostrar_elem(){
    if(q.frente == NULL) {
	cout << "LA COLA ESTA VACIA";
	}
    else {
		cout << "\nAl frente";
		for(t=q.frente;t!=NULL;t=t->enlace)//avanzamos hasta enocntrar el NULL
			cout << "-->" << t->dato;//imprimimos
			cout << "<--Parte trasera\n";
	}
}

COLA::~COLA(){}