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

void COLA::eliminar_elem(){//para eliminar un elemento

    if(q.frente == NULL) {//si apunta a NUll al frente
		cout << "LA COLA ESTA VACIA";
		q.atras = NULL;//puntero de atrás también le ponemos NULL
	}
    else {//caso contrario
		t = q.frente;
		cout << "El dato que se elimino fue:" << q.frente->dato;//eliminamos dato del frente
		q.frente=q.frente->enlace;//ya no tomamos en cuenta el anterior q.frente
		free(t);//libera de la memoria o elimina a t de la memoria
	}
}

void COLA::buscar_elem(int elem_buscar){
	int contador=1;
    if(q.frente == NULL) {
	cout << "LA COLA ESTA VACIA";
	}
    else {
		for(t=q.frente;t!=NULL;t=t->enlace){//avanzamos hasta enocntrar el NULL
			if (t->dato==elem_buscar)//buscamos el elemento
			{
				cout<<"Su numero "<<t->dato<<" se encuentra en la COLA"<<endl;
			}
			contador++;
		}
		if (contador>1)
		{
			cout<<"Su numero "<<t->dato<<" NO se encuentra en la cola"<<endl;
		}
			
	}
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