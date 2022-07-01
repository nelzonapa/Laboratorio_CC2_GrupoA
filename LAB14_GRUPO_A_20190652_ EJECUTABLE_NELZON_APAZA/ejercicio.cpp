/*
DATOS:
ALUMNO: Nelzon Jorge Apaza Apaza
CUI: 20190652
CURSO: Laboratorio 14 - CC2 - GRUPO A

EJERCICIO:
Resolver los siguientes ejercicios planteados:
Implemente un programa utilizando puntero a punteros que gestione los datos de
stock de una tienda de ropa, la información a recoger será: código, nombre y
precio del producto, asimismo la cantidad en stock. La tienda dispone de 10
productos distintos. El programa debe ser capaz de:
1. Dar de alta un producto nuevo.
2. Dar de baja a un producto. (No hay stock).
3. Buscar un producto por su nombre o código.
4. Modificar el nombre, precio o cantidad de un producto dado.

PASOS:
1. Recoger información:
    1.1 Código
    1.2 Nombre
    1.3 Precio
    1.3 Cantidad de productos hasta el momento.
2. Se debe de tener 10 espacios para productos distintos.

# Productos que pondremos: Huevo, pan, aceite, arroz, papa, fideo, harina, pollo, pescado, habas.

3. Funciones: 
  > Buscar un producto por su nombre(Función que recorra todos los elementos)
  > Modificar el precio, nombre, cantidad, de un producto según la busqueda anterior.

*/
#include "iostream"
#include "stdlib.h"
#include "string.h"

using namespace std;
//funcion que mostrará una lista;
int menu();

struct COLA
{
  COLA **ptr_ptr_pro;//puntero de puntero
};

struct Producto
{
  float precio;
  int cantidad;
  string nombre;
  COLA *ptr_pro;//usamos un puntero que apuntara a cada producto
};

//GETTERS

float get_precio(Producto *producto){
  return producto->precio;
}
int get_cantidad(Producto *producto){
  return producto->cantidad;
}
string get_nombre(Producto *producto){
  return producto->nombre;
}

//SETTERS
void set_precio(Producto *producto, float _precio){
  producto->precio=_precio;
}
void set_cantidad(Producto *producto, int _cantidad){
  producto->cantidad=_cantidad;
}
void set_nombre(Producto *producto, string _nombre){
  producto->nombre=_nombre;
}
//para agregar productos
void agregando_productos(Producto *producto,float _precio, int _cantidad, string _nombre){
  COLA *colita=new COLA();
  cout<<"Ingresando producto..."<<endl;
  producto->cantidad=_cantidad;
  producto->precio=_precio;
  producto->nombre=_nombre;
  colita=producto->ptr_pro;//Producto creado y con un puntero dado

}

//Para mostrar productos con puntero de puntero
void mostrar_productos(){
  COLA **mostrar;
  COLA *colita=new COLA();
  Producto *p=new Producto();
  for (int i = 0; i < 10; i++)
  {
    mostrar=colita->ptr_ptr_pro;
    cout<<get_nombre(p)<<" --> ";
  }
  
}
//Para buscar elemento en la lista de productos
bool buscar(string _nombre){
  COLA **mostrar;
  COLA *colita=new COLA();
  Producto *p=new Producto();
  for (int i = 0; i < 10; i++)
  {
    mostrar=colita->ptr_ptr_pro;
    if (_nombre==p->nombre)
    {
      return true;
    }
  }
  
}
//Para buscar elemento y modificar en la lista de productos
void modificar(string _nombre){
  float precio;
  int cantidad;
  COLA **mostrar;
  COLA *colita=new COLA();
  Producto *p=new Producto();
  for (int i = 0; i < 10; i++)
  {
    mostrar=colita->ptr_ptr_pro;
    if (_nombre==p->nombre)
    {
      cout<<"Nuevo Nombre: "<<endl<<"\t";
      cin>>_nombre;
      set_nombre(p,_nombre);
      cout<<"Nueva Cantidad: "<<endl<<"\t";
      cin>>cantidad;
      set_cantidad(p,cantidad);
      cout<<"Nuevo Precio: "<<endl<<"\t";
      cin>>precio;
      set_precio(p,precio);
    }
  }
  
}


int main(){
  float precio;
  int cantidad;
  string nombre;
  char product;
  int contador=1;
  cout<<"Bienvenido!!"<<endl;
  //Agregaremos productos con punteros de punteros:
  //Para buscar y modificar un producto
  int opcion=0;
  do
  {
    opcion=menu();
    switch (opcion)
    {
      case 1:
        for (int i = 47; i < 57; i++)
        {
            product=i;
            cout<<"\tPRODUCTO "<<contador<<endl;
            cout<<"Nombre: "<<endl<<"\t";
            cin>>nombre;
            cout<<"Cantidad: "<<endl<<"\t";
            cin>>cantidad;
            cout<<"Precio: "<<endl<<"\t";
            cin>>precio;
            Producto *product=new Producto();
            agregando_productos(product,precio,cantidad,nombre);
            contador++;
        }
        break;
      case 2:
        mostrar_productos();
        break;
      case 3:
        cout<<"Escriba el nombre del producto a buscar..."<<endl;
        cin>>nombre;
        if (buscar(nombre))
        {
          cout<<"Si se encontro su producto"<<endl;
        }
        break;
      case 4:
        cout<<"Escriba el nombre del producto a modificar..."<<endl;
        cin>>nombre;
        if (buscar(nombre))
        {
          cout<<"Si se encontro su producto"<<endl;
          cout<<"Se pasará a modificar su producto";
          modificar(nombre);
        }
        break;
      case 5:
        cout<<"Gracias por usar el programa..."<<endl;
        system("pause");
        break;

      default:
        break;
    }

  } while (opcion!=5);
  
  return 0;
}


//OTRAS FUNCIONES
int menu(){
  int opcion;
  cout<<endl<<"\tElija una opcion: "<<endl;
  cout<<"1. Ingresar producto nuevo\n2. Mostrar productos\n3. Buscar elemento por nombre\n4. Modificar un producto\n5. Salir"<<endl;
  do
  {
    cout<<"\tOpcion: "<<endl;
    cin>>opcion;
  } while (opcion>=6);
  return opcion;
}