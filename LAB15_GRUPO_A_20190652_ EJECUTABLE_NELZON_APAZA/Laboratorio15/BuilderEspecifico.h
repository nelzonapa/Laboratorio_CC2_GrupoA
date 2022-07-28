#ifndef BUILDERESPECIFICO_H
#define BUILDERESPECIFICO_H
#include "IBuilder.h"
#include "Producto1.h"
#include <iostream>

class BuilderEspecifico : public IBuilder {//Hereda de IBuilder
	/*Nelzon Jorge Apaza Apaza*/
private:
	Producto1* product;//Punterp product de tipo Producto1
public:

	//constructor
	BuilderEspecifico() {
		this->Reset();//Aplica reset
	}

	//destructor
	~BuilderEspecifico() {
		delete product;
	}

	//reset establece al puntero product un nuevo espacio de memoria
	void Reset() {
		this->product = new Producto1();
	}

	//funciones de virtual (polimorfismo) estblecidas en IBuilder.h
	//Ubica, agrega las partes usando push.back
	void ProducirParteA()const override {
		string color;
		BuilderEspecifico* builder =new BuilderEspecifico();
		Producto1* p = builder->GetProducto();
		color=p->EscogerColor("Puertas");
		this->product->componentes.push_back("Puertas de color " + color);
	}
	void ProducirParteB()const override {
		this->product->componentes.push_back("Llantas");
	}
	void ProducirParteC()const override {
		this->product->componentes.push_back("Timon");
	}
	void ProducirParteD()const override {
		string color;
		BuilderEspecifico* builder = new BuilderEspecifico();
		Producto1* p = builder->GetProducto();
		color = p->EscogerColor("Asientos");
		this->product->componentes.push_back("Asientos de color "+color);
	}
	void ProducirParteE()const override {
		this->product->componentes.push_back("Motor");
	}

	//Devuelve un puntero de tipo Producto1
	Producto1* GetProducto() {
		Producto1* resultado = this->product;
		this->Reset();
		return resultado;
	}
};

#endif