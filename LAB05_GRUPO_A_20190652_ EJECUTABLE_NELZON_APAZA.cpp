/*EJERCICIOS RESUELTOS DE LABORATORIO 05 CC2 -- 
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
EJERCICIO 1. Asignar valores a dos variables enteras, intercambie estos valores almacenados
usando solo punteros a enteros.

PASOS:
1. creamos 2 variables de tipo int
2. Almacenamos cada variable en un puntero
3. intercambiamos dirección de memoria con ayuda de un dato auxiliar.
4. MOstramos el resultado
*/

void ejercicio1(){
    int num1=10, num2=20;//paso1
    //creamos puntero para el valor 1 y el valor 2
    int *puntero_num1, *puntero_num2;
    // asignamos la direccion de memoria
    puntero_num1=&num1;
    puntero_num2=&num2;
    cout<<"ANTES: El valor de X es: "<<*puntero_num1<<" y "<<"de Y es: "<<*puntero_num2<<endl;
    //INTERCAMBIAMOS valores con punteros
    int auxiliar=*puntero_num1;
    *puntero_num1=*puntero_num2;
    *puntero_num2=auxiliar;
    cout<<"AHORA: El valor de X es: "<<*puntero_num1<<" y "<<"de Y es: "<<*puntero_num2;


}


/*_____________________________________________________________________________________*/
/*
DATOS PERSONALES:
Alumno: Apaza Apaza Nelzon Jorge 
CUI:20190652
CURSO: CC2 - Laboratorio - GRUPO A
*/

/*
EJERCICIO 2. Cree dos vectores con valores flotantes y asígnele valores aleatorios, para esto deberá
de asignar memoria a cada vector. Calcule el producto punto de vectores y muestre
por pantalla. Una vez finalizado este proceso, retire la memoria asignada a los
punteros. Repita este proceso de asignación y retiro de memoria dentro de un for de
1 000 000 veces.

PASOS:
1. creamos 2 vectores o arrays dinámicos
    - Debemos usar new and delete.
    - Debemos llenar los arrays con valores aleatorios.
2. Hallamos el producto punto, que es la suma de los productos de los elementos 
correspondientes de los dos vectores. Supongamos que tenemos dos vectores: 
{1, 2, 3} y {4, 5, 6} , y el producto punto de estos vectores es 1*4 + 2*5 + 3*6 = 32
3. Mostramos el resultado.
4. eliminamos la memoria (delete)
5. repetimos de nuevo, todo, incluida el retiro de memoria. PERO en un FOR de 1 000 000 veces.
*/

void ejercicio2(){
    /*------CREAMOS EL PRIMER VECTOR -------*/
    //creamos su puntero
    int *puntero_array_dina_1;
    int cantidad_array1=5;//le damos la longitud de 5
    //creamos el array o vector dinámico
    puntero_array_dina_1=new int[cantidad_array1];

    // Luego inicializar los números aleatorios incluyendo esto:
    srand(time(NULL));
    //Rellenamos el array con valores aleatorios
    for (int i = 0; i < cantidad_array1; i++)
    {
        //USAMOS RAND() --> valor = 0 + rand() % 2;// Obtiene valores entre 0 y 1
        //necesitamos la librería cstdlib
        puntero_array_dina_1[i]=10 + rand()%51;
    }
    //imprimimos para comprobar
    cout<<"Su primer vector es: "<<endl<<"[";
    for (int i = 0; i < cantidad_array1; i++)
    {
        cout<<", "<<puntero_array_dina_1[i];
    }
    cout<<"]"<<endl;

    /*------CREAMOS EL SEGUNDO VECTOR -------*/

    //damos su puntero
    int *puntero_array_dina_2;
    int cantidad_array2=5;//le damos la longitud de 5
    //creamos el array o vector dinámico
    puntero_array_dina_2=new int[cantidad_array2];

    //Rellenamos el array con valores aleatorios
    for (int i = 0; i < cantidad_array2; i++)
    {
        //USAMOS RAND() --> valor = 0 + rand() % 2;// Obtiene valores entre 0 y 1
        //necesitamos la librería cstdlib
        puntero_array_dina_2[i]=10 + rand()%51;
    }
    //imprimimos para comprobar
    cout<<"Su segundo vector es: "<<endl<<"[";
    for (int i = 0; i < cantidad_array2; i++)
    {
        cout<<", "<<puntero_array_dina_2[i];
    }
    cout<<"]"<<endl;

    /*------Producto punto -------*/
    int aux_ProducPunto=0;
    for (int i = 0; i < cantidad_array1; i++)
    {
        aux_ProducPunto=aux_ProducPunto + puntero_array_dina_1[i]*puntero_array_dina_2[i];
    }
    
    /*------Mostramos resultado-------*/
    cout<<"El Porducto Punto es: "<<aux_ProducPunto<<endl;
    

    //Eliminamos de memoria
    delete[] puntero_array_dina_1;
    delete[] puntero_array_dina_2;
    
}


/*_____________________________________________________________________________________*/
/*
DATOS PERSONALES:
Alumno: Apaza Apaza Nelzon Jorge 
CUI:20190652
CURSO: CC2 - Laboratorio - GRUPO A
*/
/*
EJERCICIO 3. Construya una lista enlazada simple utilizando solo punteros. Añada las funciones de
insertar y eliminar un elemento. En la función insertar se debe asegurar que los
números insertados estén en orden creciente. Simule el proceso con 10000 números
aleatorios sin que el programa falle.

PASOS:
1. creamos lista enlazada simple: Struct nodo
2. añadir funcion de insertar elemento a la lista (ordenar en orden creciente).
    -
3. añadir funcion de eliminar elementos de la lista ().
SIMULAR CON 10000 numeros aleatorios
*/

struct nodo{
       int numero;// en este caso es un numero entero
       struct nodo *siguiente;
};

typedef struct nodo *Lista_Enlazada;

void insertar_elemento(Lista_Enlazada &lista, int valor)//función para insertar elemento
{
    Lista_Enlazada aux;
    aux = new(struct nodo);
    aux->numero = valor;
    aux->siguiente = lista;
    lista = aux;
}

void eliminar_elemento(Lista_Enlazada &lista, int valor)//función para eliminar elemento
{
    Lista_Enlazada aux;//creamos un nodo aux
    aux = lista;
    if(lista!=NULL){}
    else
        cout<<" Lista vacia..!";//excepcion
}

void menu_opciones()//menu de opciones pedidas
{
    cout<<"\n\t\tLISTA ENLAZADA SIMPLE\n\n";
    cout<<" 1. INSERTAR ELEMENTO               "<<endl;
    cout<<" 2. ELIMINAR ELEMENTO                "<<endl;
    cout<<" 3. SALIR                            "<<endl;
    cout<<"\n INGRESE OPCION: ";
}

//Función Principal
void ejercicio3(){
    Lista_Enlazada lista = NULL;//Inicializamos un nuevo nodo
    int opcion; //opcion del menu
    int dato_ingre;//elemenento a ingresar
    int posicion; //posicion a insertar
    //para el menu de opciones
    do
    {
        menu_opciones();//Ejecutamos el menu de opciones
        cin>>opcion;
        switch(opcion)
        {
            case 1:
                cout<< "\n Ingrese el numero que desea INSERTAR: "; cin>> dato_ingre;
                insertar_elemento(lista, dato_ingre);//enviamos los datos necesarios
                break;
            case 2:
                cout<<"\n Ingrese el numero que desea ELIMINAR: "; cin>> dato_ingre;
                eliminar_elemento(lista, dato_ingre );//enviamos los datos necesarios
                break;
        }
    }
    while(opcion!=3);
}




/*_____________________________________________________________________________________*/
/*
DATOS PERSONALES:
Alumno: Apaza Apaza Nelzon Jorge 
CUI:20190652
CURSO: CC2 - Laboratorio - GRUPO A
*/
/*
EJERCICIO 4. Construya una lista enlazada que almacene tanto números como cadenas de texto
utilizando punteros void. Incluya una función de búsqueda de muestre un dato
almacenado además del tipo de dato que se encuentra almacenado (int, float, char,
...)
*/
struct nodo2{
       int numero;// en este caso es un numero entero
       struct nodo2 *siguiente;
};

typedef struct nodo2 *TLista;

void busqueda_tipo(){}//funcion que nos ayudará con la busqueda

void ejercicio4(){
    int *puntero_enlazada;
    //Continuará...
    cout<<"Continuara..."<<endl;

}



/*_____________________________________________________________________________________*/
/*
DATOS PERSONALES:
Alumno: Apaza Apaza Nelzon Jorge 
CUI:20190652
CURSO: CC2 - Laboratorio - GRUPO A
*/
/*
EJERCICIO 5. Implemente su propia función de concatenación de cadenas de texto especial (¡no es
la función ordinaria de concatenación!), recibirá como parámetro dos punteros de
caracteres y tendrá que asignar el contenido del segundo puntero al INICIO del primer
puntero. La función no retorna ningún valor.

PASOS:
1. Creamos 2 punteros.
2. Creamos un afunción de concatenación de tipo void, no retorna nada.
    - Este debe recibir 2 punteros
    - Asignará el valor de uno al otro

*/
void concatenacion_cadenas(char *puntero1, char *puntero2);//Funciones

void ejercicio5(){
    char *puntero_caracter_1,*puntero_caracter_2;//definismos 2 punteros
    char caracter1='x', caracter2='y';//2 caracteres para poder intercambiar valores
    puntero_caracter_1=&caracter1;
    puntero_caracter_2=&caracter2;

    cout<<"Antes: caracter 1: "<<caracter1<<" caracter 2: "<<caracter2<<endl;
    concatenacion_cadenas(puntero_caracter_1,puntero_caracter_2);

    //mostramos los resultados
    cout<<"AHORA: caracter 1: "<<caracter1<<" caracter 2: "<<caracter2<<endl;

}

void concatenacion_cadenas(char *puntero1, char *puntero2){
    char aux_cambio;//creamos un auxiliar para cambiar el valor entre ambos punteros
    aux_cambio=*puntero1;
    *puntero1=*puntero2;
    *puntero2=aux_cambio;
}



/*_____________________________________________________________________________________*/
/*
DATOS PERSONALES:
Alumno: Apaza Apaza Nelzon Jorge 
CUI:20190652
CURSO: CC2 - Laboratorio - GRUPO A
*/
/*
EJERCICIO 6. Utilizando punteros a funciones, implemente las funciones:
a. void sumar (int a, int b);
b. void restar (int a, int b);
c. void multiplicar (int a, int b);
d. void dividir (int a, int b);
Cree un vector de punteros a funciones e implemente un programa que permita la
invocación de cada función, pero a través del puntero.

PASOS:
1. creamos las funciones.
*/
//FUNCIONES
void sumar(int a, int b);
void restar(int a, int b);
void multiplicar(int a, int b);
void dividir(int a, int b);

//FUNCION PRINCIPAL
void ejercicio6(){
    /*PUNTERO A FUNCION: más info: http://agora.pucp.edu.pe/inf2170681/12.htm */
    /*
    Es importante declarar el puntero entre(), 
    luego los elementos con los que trabaja la función
    */
    /*Puntero a función*/
    void (*puntero_suma)(int,int);
    puntero_suma=sumar;//El puntero apunta al inicio del código de la función
    puntero_suma(12,6);
    //Puntero para restar
    void (*puntero_resta)(int,int);
    puntero_resta=restar;//El puntero apunta al inicio del código de la función
    puntero_resta(12,6);
    //Puntero para multiplicar
    void (*puntero_multiplicar)(int,int);
    puntero_multiplicar=multiplicar;//El puntero apunta al inicio del código de la función
    puntero_multiplicar(12,6);
    //Puntero para dividir
    void (*puntero_dividir)(int,int);
    puntero_dividir=dividir;//El puntero apunta al inicio del código de la función
    puntero_dividir(12,6);
}

void sumar(int a, int b){
    cout<<"La SUMA de "<<a<<" y "<<b<<" es: "<<a+b<<endl;
}
void restar(int a, int b){
    cout<<"La RESTA de "<<a<<" y "<<b<<" es: "<<a-b<<endl;
}
void multiplicar(int a, int b){
    cout<<"La MULTIPLICACION de "<<a<<" y "<<b<<" es: "<<a*b<<endl;
}
void dividir(int a, int b){
    cout<<"La DIVISION de "<<a<<" y "<<b<<" es: "<<a/b<<endl;
}

/*_____________________________________________________________________________________*/

/*FUNCIÓN PRINCIPAL: MENU DE OPCIONES*/
int main(){
    int opcion;
    cout<<"Elija el ejercicio a leer: \n1. Ejercicio 1\n2. Ejercicio 2"<<endl;
    cout<<"3. Ejercicio 3\n4. Ejercicio 4\n5. Ejercicio 5\n6. Ejercicio 6"<<endl;
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
    default:
        break;
    }

    return 0;
}
