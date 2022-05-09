/*EJERCICIOS RESUELTOS DE LABORATORIO 04 CC2 -- 
EJECUTAR TODO EL ARCHIVO .CPP, PARA ESCOGER EL EJERCICIO QUE DESEE PROBAR EN LA EJECUCIÓN*/
/*
DATOS PERSONALES:
Alumno: Apaza Apaza Nelzon Jorge 
CUI:20190652
CURSO: CC2 - Laboratorio - GRUPO A
*/
#include <iostream>
#include <stdlib.h>
#include <time.h>//para usar time() --> relacionado con rand()
#include <stdio.h>
using namespace std;

/*_____________________________________________________________________________________*/

/*
EJERCICIO 1. Escribir un programa donde se pueda ingresar los datos de tres personas, como el
nombre, apellido, edad y DNI y luego lo muestre por pantalla.

Pasos:
1. 3 personas ingresarán
2. Introducir:
    2.1 Nombre
    2.2 Apellido
    2.3 Edad
    2.4 DNI
3. Mostrar los datos en pantalla
*/
void ejercicio1(){

    string array[4], array2[4], array3[4];//creamos un array
    string mensajes[]={"Nombre: ","Apellido: ","Edad: ","DNI: "};
    // string mensaje1="Nombre: ", mensaje2="Apellido: ", mensaje3="Edad: ",mensaje4="DNI: ";
    for (int i = 0; i < 3; i++)//3 personas ingresarán datos
    {
        if (i==0){
            cout<<"Persona "<<i+1<<" ingrese los siguientes datos: "<<endl;//ARRAY1
            cout<<mensajes[0]<<endl;
            cin>>array[0];
            cout<<mensajes[1]<<endl;
            cin>>array[1];
            cout<<mensajes[2]<<endl;
            cin>>array[2];
            cout<<mensajes[3]<<endl;
            cin>>array[3];

        }
        else if(i==1){
            cout<<"Persona "<<i+1<<" ingrese los siguientes datos: "<<endl;//ARRAY2
            cout<<mensajes[0]<<endl;
            cin>>array2[0];
            cout<<mensajes[1]<<endl;
            cin>>array2[1];
            cout<<mensajes[2]<<endl;
            cin>>array2[2];
            cout<<mensajes[3]<<endl;
            cin>>array2[3];
        }
        else {
            cout<<"Persona "<<i+1<<" ingrese los siguientes datos: "<<endl;//ARRAY3
            cout<<mensajes[0]<<endl;
            cin>>array3[0];
            cout<<mensajes[1]<<endl;
            cin>>array3[1];
            cout<<mensajes[2]<<endl;
            cin>>array3[2];
            cout<<mensajes[3]<<endl;
            cin>>array3[3];        
        }
        
    }

    cout<<"A continuacion se le mostrara lo almacenado:"<<endl;
    for (int k = 0; k < 3; k++)
    {
        if (k==0){
            cout<<"Persona "<<k+1<<endl;//ARRAY1
            for (int i = 0; i < 4; i++)
            {
                cout<<mensajes[i]<<array[i]<<" --> ";
            }
            cout<<endl;
        }
        else if(k==1){
            cout<<"Persona "<<k+1<<endl;
            for (int i = 0; i < 4; i++)
            {
                cout<<mensajes[i]<<array2[i]<<" --> ";//ARRAY2
            }
            cout<<endl;
        }
        else {
            cout<<"Persona "<<k+1<<endl;
            for (int i = 0; i < 4; i++)
            {
                cout<<mensajes[i]<<array3[i]<<" --> ";//ARRAY3
            }
            cout<<endl;
        }
    }
}


/*_____________________________________________________________________________________*/

/*
EJERCICIO 2. Hacer un array unidimensional que acepte ocho números enteros. Luego le
pregunte al usuario que ingrese un número a buscar, implementar una función que
busque ese número, si lo encuentra, debe retornar un valor de verdaderos, en caso
contrario, retornar falso.

PASOS:
1. crear array de 8 con números definidos
2. Usuario ingrese numero a buscar
3. Función para buscar el numero en la matriz.
    3.1 Si lo encuentra: VERDAD
    3.2 FALSE si no lo encuentro.
*/
// Función que busca dentro del arreglo
bool buscar_array(int array[], int limite_longitud, int numero_buscar) {
    //buscamos en el array
    for (int i = 0; i < limite_longitud; i++) {
    int elementoActual = array[i];
    if (elementoActual == numero_buscar){
        return true;
    }
  }
  return false;
}

void ejercicio2(){

    int numeros[]={1,2,3,4,5,6,7,8};
    int tamano=(sizeof(numeros)/sizeof(numeros[0]));

    int numero_buscar;
    cout<<"Introduce el numero a buscar: "<<endl;
    cin>> numero_buscar;
    //lamamos a la función:
    bool valor=buscar_array(numeros,tamano,numero_buscar);
    if (valor==true){
        cout<<"Si se encuentra su numero en el array";
    }
    else {
        cout<<"NO se encuentra su numero en el array";
    }
}

/*_____________________________________________________________________________________*/

/*
EJERCICIO 3. Hacer un array que acepte números enteros ingresados por el usuario. Al final,
debe mostrar la suma de todos los números.

*/

void ejercicio3(){
    int tamano, suma_array=0;
    cout<<"Cuantos numeros desea ingresar? "<<endl;//pedimos el tamaño del array
    cin>>tamano;
    int array[tamano];
    //rellenaremos el array
    for (int i = 0; i < tamano; i++)
    {
        cout<<"Ingrese el elemento "<<i+1<<endl;
        cin>>array[i];
        suma_array=suma_array+array[i];//almacenamos la suma
    }
    //Mostramos el array
    cout<<"Los elementos que ingreso son: "<<endl;
    for (int i = 0; i < tamano; i++)
    {
        cout<<array[i]<<" ";
    }
    //Damos la suma de todos sus elementos
    cout<<endl<<"La suma de estos elementos es: "<<suma_array<<endl;
    
}

/*_____________________________________________________________________________________*/

/*
EJERCICIO 4. Implementar un programa que rellene un array con los números primos
comprendidos entre 1 y 100 y los muestre en pantalla en orden descendente.

PASOS:
1. creamos un array;
2. sacamos los numeros primos entre 1 y 100
3. Vamos rellenando cada posición(podemos actualizar el tamaño de la matriz con un contador)
4. mostramos el resultado
*/

void ejercicio4() 
{
    int tamano=1;//definimos el tamaño por mientras
    int array_primos[tamano];
    int k=0;
    
    for (int i=2; i<100; i++) 
    {
        bool prime=true;
        for (int j=2; j*j<=i; j++)
        {
            if (i % j == 0) 
            {
                prime=false;
                break;    
            }
        }   
        if(prime==true){
            cout<<i<<" ";
            // array_primos[k]=i;
            // tamano++;
            // cout<<" "<<i;
            // k++;
        }

    }
    // cout<<"El array es: "<<endl;
    // for (int i = 0; i < tamano; i++)
    // {
    //     cout<<" "<<array_primos[i];
    // }
    
}
/*_____________________________________________________________________________________*/
/*
EJERCICIO 5. Implemente un programa que gestione los datos de stock de una tienda de abarrotes,
la información a recoger será: nombre del producto, precio, cantidad en stock. La
tienda dispone de 10 productos distintos. El programa debe ser capaz de:
a. Dar de alta un producto nuevo. (Es decir, decir que ya no hay un producto)
b. Buscar un producto por su nombre. (buscar si hay o no un producto en el array)
c. Modificar el stock y precio de un producto dado. (modificar el dato en posición del array de precios)


*/

/*Funcion para buscar elemento en un array*/
bool buscar_array(string array[],string palabra_buscar, int limite_longitud) {
    //buscamos en el array
    for (int i = 0; i < limite_longitud; i++) {
    string palabra_actual = array[i];
    if (palabra_actual == palabra_buscar){
        return true;
    }
  }
  return false;
}


void ejercicio5(){
    int cantidad=10;
    //Definimos los productos
    string productos[cantidad]={"harina","arroz","leche","azucar","aceite","avena","cereales","gelatina","mayonesa","huevo"};
    int precio[10]={1,2,3,4,5,6,7,8,9,10};//ponemos los precios
    string menu="Opciones a realizar: \n1. Dar de alta a un producto \n2. Buscar un producto \n3. Modificar precio";
    int opcion;//opcion a elegir
    cout<<menu<<endl;
    cin>>opcion;

    /*Variables que nos ayudará en el switch con cada case*/
    string nuevo_producto;
    string producto_buscar;
    bool valor;
    int posicion, nuevo_precio;

    switch (opcion)//jugamos con la opcion dada
    {
    case 1:
        cout<<"Ingrese el nombre del nuevo producto: "<<endl;
        cin>>nuevo_producto;
        for (int i = 10; i > 2; i--)//agregamos un nuevo producto en el array
        {
            productos[i]=productos[i-1];
        }
        productos[2]=nuevo_producto;//ponemos el nuevo producto en la posición 9
        cantidad=cantidad+1;

        // for (int i = 0; i < cantidad; i++)
        // {
        //     cout<<productos[i]<<" ";
        // }
        break;

    case 2:
        cout<<"Introduce el producto a buscar: "<<endl;
        cin>> producto_buscar;
        //lamamos a la función:
        valor=buscar_array(productos, producto_buscar, cantidad);//usamos la función para buscar en un array
        if (valor==true){
            cout<<"Si se encuentra su producto en el array";
        }
        else {
            cout<<"NO se encuentra su producto en el array";
        }
        break;
    case 3:
        cout<<"Estos son los precios: "<<endl;//mostramos los precios hasta el momento
        for (int i = 0; i < 10; i++)
        {
            cout<<precio[i]<<" ";
        }
        cout<<endl<<"Cual de ellos desea modificar? Indique su posicion: "<<endl;//pedimos posición
        cin>>posicion;
        cout<<"Nuevo precio a ingresar: "<<endl;//nuevo precio
        cin>>nuevo_precio;
        for (int i = 0; i < 10; i++)
        {
            precio[posicion-1]=nuevo_precio;
        }
            
        cout<<"Estos son los nuevos precios: "<<endl;//mostramos los nuevos precios con la modificaion
        for (int i = 0; i < 10; i++)
        {
            cout<<precio[i]<<" ";
        }
        break;

    default:
        break;
    }
}
/*_____________________________________________________________________________________*/
/*
EJERCICIO 6. Escribe un programa que pida nueve números enteros y los almacene en una matriz
3x3. Calcula la suma de los números de cada fila y mostrar por pantalla el número de
fila con mayor suma.

PASOS.
1. Creamos la matriz
2. Creamos las variables de fila, columna, y otros auxiliares para los otros procedimientos
3. pedimos los nueve numeros.
4. Sumamos cada fila
5. Seleccionamos y mostramos la fila con mayor suma

*/
void ejercicio6() {
    int M[3][3];//matriz de 3x3
    int fila,columna, sumafila=0;
    int numero_fila=0, fila_mayor=0;
    
    for (fila=0;fila<3;fila++) {//pedimos los datos
        for (columna=0;columna<3;columna++)
        {
            cout<<"Introduce el valor de ["<<fila<<"]["<<columna<<"]: ";//pedimos mediante posición
            cin>>M[fila][columna];
        }
    }
    
    /*Una vez ya tenemos los elementos de la Matriz*/
    for (fila=0;fila<3;fila++) {
        numero_fila=fila+1;
        for (columna=0;columna<3;columna++) {
            sumafila+=M[fila][columna];//sumamos cada elemento de la fila
            if (sumafila > fila_mayor) {//vamos comparando la suma de cada fila
                fila_mayor=sumafila;
            }
        }
    }
    
    cout<<endl;//damos el resultado final
    cout<<"La fila que contiene la suma mayor es la fila numero: "<<numero_fila<<endl;
}
/*_____________________________________________________________________________________*/
/*
7. Escribe un programa, que trabajando mediante funciones, presente un menú al
usuario, mueva las columnas a la derecha o izquierda, asimismo mueva las filas para
arriba o para abajo.

*/
void ejercicio7(){
    int M[3][3];//creamos una matriz de 3x3
    int fila,columna, sumafila=0;
    int numero_fila=0, fila_mayor=0;
    
    for (fila=0;fila<3;fila++) {//pedimos los datos
        for (columna=0;columna<3;columna++)
        {
            cout<<"Introduce el valor de ["<<fila<<"]["<<columna<<"]: ";//pedimos mediante posición
            cin>>M[fila][columna];
        }
    }
    cout<<"continuara..."<<endl;
}

/*_____________________________________________________________________________________*/

/*FUNCIÓN PRINCIPAL: MENU DE OPCIONES*/
int main(){
    int opcion;
    cout<<"Elija el ejercicio a leer: \n1. Ejercicio 1\n2. Ejercicio 2"<<endl;
    cout<<"3. Ejercicio 3\n4. Ejercicio 4\n5. Ejercicio 5\n6. Ejercicio 6\n7. Ejercicio 7"<<endl;
    cin>>opcion;
    switch (opcion)
    {
    case 1:
        ejercicio1();
        break;
    case 2:
        ejercicio2();
        break;
    case 3:
        ejercicio3();
        break;
    case 4:
        ejercicio4();
        break;
    case 5:
        ejercicio5();
        break;
    case 6:
        ejercicio6();
        break;
    case 7:
        ejercicio7();
        break;
    default:
        break;
    }

    return 0;
}
