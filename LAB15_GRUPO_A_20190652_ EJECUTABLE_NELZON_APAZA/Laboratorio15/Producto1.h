#ifndef PRODUCTO1_H
#define PRODUCTO1_H

#include <vector>
#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>
using namespace std;

class Producto1 {
	/*Nelzon Jorge Apaza Apaza*/
public:
	//tiene atributo de tipo vector<string>
	std::vector<std::string> componentes;
	std::vector<std::string> colores;
	string EscogerColor(string objeto) {
		int opcion;
		//establecemos colores
		colores.push_back("Amarillo");
		colores.push_back("Azul");
		colores.push_back("Verde");
		colores.push_back("Rojo");

		//Escoger un color
		std::cout << "Escoga un color para ("+objeto+"): " << endl;
		for (size_t i = 0; i < colores.size(); i++)
		{
			std::cout << "Opcion " << i + 1 << ":" << colores[i] << endl;//coma 
		}
		std::cin >> opcion;

		switch (opcion)
		{
		case 1:
			return colores[opcion - 1];
			break;
		case 2:
			return colores[opcion - 1];
			break;
		case 3:
			return colores[opcion - 1];
			break;
		case 4:
			return colores[opcion - 1];
			break;
		default:
			std::cout << "Error, opcion no existente";
			break;
		}
	}
	//método
	void ListaComp()const {
		std::cout << "Piezas : ";
		//según tamaño de vector<string> componentes
		for (size_t i = 0; i < componentes.size(); i++) {
			//en el caso de enocntrarse en el último elemento
			if (componentes[i] == componentes.back()) {
				std::cout << componentes[i];
			}
			//en caso contrario
			else {
				std::cout << componentes[i] << " - ";//coma 
			}
		}
		std::cout << "\n\n";
	}

};

#endif