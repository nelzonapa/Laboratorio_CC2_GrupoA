#include "iostream"
#include "vector"
/*
DATOS:
	- Curso: CC2 LABORATORIO GRUPO A
	- Alumno: Nelzon Jorge Apaza Apaza
	- LABORATORIO 15
*/
#include "BuilderEspecifico.h"
#include "Director.h"
#include "IBuilder.h"
#include "Producto1.h"

/*
1. El alumno deberá de implementar un conjunto de clases que permita seleccionar
las piezas de un automóvil, es decir, se podrán tener componentes a disposición
del cliente(puertas, llantas, timón, asientos, motor, espejos, vidrios, etc.).Del cual
el cliente puede indicar que características de color puede tener cada pieza.Al
final mostrar opciones al Cliente o permitirle que él pueda escoger las piezas e
indicar el color.Utilizar el patrón Builder.
* Pista, en lugar de trabajar el producto con una lista de componentes, se puede
alojar una estructura o clase.
*/
/*
PASOS:
1. Piezas de automóvil: (puertas, llantas, timón, asientos, motor, espejos, vidrios)
2. Se debe elegir el color de cada pieza que pueda tener ello
3. Las 2 partes anteriores deben de ser elegidos por el Cliente
*/
using namespace std;

int main() {
	Director* director = new Director();
	ClienteCode(*director);
	delete director;//eliminamos director 
	return 0;
}