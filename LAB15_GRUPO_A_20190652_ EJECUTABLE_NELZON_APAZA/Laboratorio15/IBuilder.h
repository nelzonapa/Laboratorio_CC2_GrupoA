#ifndef IBUILDER_H
#define IBUILDER_H
/*Nelzon Jorge Apaza Apaza*/

class IBuilder {
public:
	virtual ~IBuilder() {}

	//Uso de polimorfismo virtual
	virtual void ProducirParteA() const = 0;
	virtual void ProducirParteB() const = 0;
	virtual void ProducirParteC() const = 0;
	virtual void ProducirParteD() const = 0;
	virtual void ProducirParteE() const = 0;
};

#endif