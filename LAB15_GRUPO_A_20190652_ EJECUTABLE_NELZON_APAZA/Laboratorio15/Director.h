#ifndef DIRECTOR_H
#define DIRECTOR_H

#include "IBuilder.h"
#include "BuilderEspecifico.h"
#include <stdlib.h>

/*Nelzon Jorge Apaza Apaza*/
class Director {
private:
	IBuilder* builder;//Puntero que apuntara a los tipos IBuilder
public:
	void set_builder(IBuilder* builder) {//ubica el builder que pasamos
		this->builder = builder;
	}
	void BuildProductoMin() {//Asigna la parteA al builder
		this->builder->ProducirParteA();
	}
	void BuildProductoCompleto() {//Asigna Parte A, B y C al objeto builder
		this->builder->ProducirParteA();
		this->builder->ProducirParteB();
		this->builder->ProducirParteC();
		this->builder->ProducirParteD();
		this->builder->ProducirParteE();
	}
};

/* El c�digo del cliente crea un objeto constructor, se lo pasa al director y
luego inicia el proceso de construcci�n. El resultado final se recupera del
objeto constructor. */
void ClienteCode(Director& director)//recibe un tipo de dato Director por referencia
{
	BuilderEspecifico* builder = new BuilderEspecifico();//creamos un puntero builder de tipo "BuilderEspecifico"

	director.set_builder(builder);//establecemos o conectamos el objeto con el Director

	Producto1* p = builder->GetProducto();

	//para elegir un producto
	int cantidad=0,opcion;
	while (cantidad<1 || cantidad>5)
	{
		std::cout << "--------------- Producto a elegir: --------------- \n";
		std::cout << "Ingrese la cantidad de productos a elegir (1-5):" << endl;
		cin >> cantidad;
	}
	cout << "Se le mostrara los objetos a escoger, solo puede elegir " << cantidad << " veces: " << endl;
	system("pause");
	for (int i = 0; i < cantidad; i++)
	{
		cout << "Escoja la pieza "<<i+1<<": \n\t1.Puertas \n\t2.Llantas \n\t3.Timon \n\t4.Asientos \n\t5.Motor \nOpcion:";
		cin >> opcion;
		switch (opcion)
		{
		case 1:
			builder->ProducirParteA();
			break;
		case 2:
			builder->ProducirParteB();
			break;
		case 3:
			builder->ProducirParteC();
			break;
		case 4:
			builder->ProducirParteD();
			break;
		case 5:
			builder->ProducirParteE();
			break;
		default:
			break;
		}
	}
	p = builder->GetProducto();
	cout << "\nA continuacion se le mostrara la lista de piezas elegidas con su respectivo color(en caso de ser una pieza con color):"<<endl;
	system("pause");
	p->ListaComp();//imprime la lista
	delete p;

	delete builder;//limpiamos memoria
}
#endif
