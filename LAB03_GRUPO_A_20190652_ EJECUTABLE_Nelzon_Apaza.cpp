/*
DATOS PERSONALES:
Alumno: Apaza Apaza Nelzon Jorge 
CUI:20190652
CURSO: CC2 - Laboratorio - GRUPO A
*/
#include <iostream>
#include <stdlib.h>

/*
EJERCICIO 1:

1. Hacer un programa que sin usar la función pow(), pero por medio de una función,
calcule la potencia de un número (ambos números ingresados por teclado).


1. Creamos una función que calcule la potencia de un número.
    1.1 Este debe tener 2 datos para funcionar.
*/
using namespace std;

int potencia_numero(int x,int y){
    int resultado=1;
    //y es la potencia, por lo tanto, esta define cuántas veces de multiplicará X
    for (int i = 0; i < y; i++)
    {
        resultado=resultado*x;
    }
    
    return resultado;
}

int main(){
    int x,y;
    cout<<"Ingrese dos datos, el primero sera elevado al segundo: "<<endl;
    cin>>x>>y;
    cout<<x<<" elevado a "<<y<<" resulta: "<<potencia_numero(x,y)<<endl;
    return 0;
}



/*
EJERCICIO 2:

2. Hacer un programa que lea por teclado un año, calcule y muestre si es bisiesto. Para
realizar el cálculo utiliza una función llamada bisiesto. La función bisiesto recibe el
año leído por teclado, comprueba si es o no bisiesto.

1. Ingrese el año
2. Ver si es bisiesto(funcion)
    2.1 Trabaja con el año
    # Un año es bisiesto si:
    1. Si el año es uniformemente divisible por 4, vaya al paso 2. De lo contrario, vaya al paso 5.
    2. Si el año es uniformemente divisible por 100, vaya al paso 3. De lo contrario, vaya al paso 4.
    3. Si el año es uniformemente divisible por 400, vaya al paso 4. De lo contrario, vaya al paso 5.
    4. El año es un año bisiesto (tiene 366 días).
    5. El año no es un año bisiesto (tiene 365 días).

*/
#include <iostream>

using namespace std;

bool anio_bisiesto(int anio){
    //Cumpliendo condiciones de una nio bisiesto
    if ((anio%4==0) and (anio%100!=0) and (anio%400))
    {
        return true;
        
    }
    else{
        return false;//no es bisiesto
    }
    
}

int main(){
    int anio;
    //Paso 1
    cout<<"Ingrese un anio para comprobar si es bisiesto: "<<endl;
    cin>>anio;
    bool valor=anio_bisiesto(anio);
    if (valor==true)
    {
        cout<<"Su anio SI ES BISIESTO"<<endl;
    }
    else{
        cout<<"Su anio NO ES BISIESTO"<<endl;
    }
    return 0;
}



/*
EJERCICIO 3:

3. Hacer un programa que lee por teclado la fecha actual y la fecha de nacimiento de
una persona y por medio de una función calcule su edad en años, meses y días

1. leer fecha actual, y fecha de nacimiento.
2. crear funcion que calcule su edad en años, meses y días

*/
#include <iostream>

using namespace std;

void calcular_edad_A_M_D(){
    /*
    28/04/2022

    */
    int dia_actual, mes_actual, anio_actual;
    //Paso 1
    cout<<"Ingrese la fecha actual: "<<endl;
    cout<<"Dia: ";
    cin>>dia_actual;
    cout<<"Mes: ";
    cin>>mes_actual;
    cout<<"Anio: ";
    cin>>anio_actual;

    int dia_naci, mes_naci, anio_naci;
    cout<<"Ingrese la fecha de nacimiento: "<<endl;
    cout<<"Dia: ";
    cin>>dia_naci;
    cout<<"Mes: ";
    cin>>mes_naci;
    cout<<"Anio: ";
    cin>>anio_naci;
    
    int anio_final, mes_final, dia_final;
    anio_final=anio_actual-anio_naci;
    mes_final=mes_actual-mes_naci;
    dia_final=dia_actual-dia_naci;
    cout<<"Su edad es: "<<anio_final<<" anios con "<<mes_final<<" meses y "<<dia_final<<" dias."<<endl;
}

int main(){
    calcular_edad_A_M_D();
    return 0;
}


/*
EJERCICIO 4:

4. Hacer un programa que desarrolle una función, que genere en pantalla el listado de
números primos ubicados entre 1 hasta un numero x (x es ingresado por teclado)

1. crear funcion que muestre numeros primos.
2. ingresar x o límite por el usuario
3. hacer el calculo dentro de la función
*/
#include <iostream>

using namespace std;

void listado_primos(){
    int limite;
    cout<<"Ingrese el limite para mostrar los numeros primos: "<<endl;
    cin>>limite;

    cout<<"Imprimiendo numeros primos del 1 al "<<limite<<" ..."<<endl;
    for (int i = 2; i < limite; i++)//establecemos el límite
    {
        if ( (i%i==0) && (i%1==0) && (i%2!=0))//condicion para ser primo
        {
            cout<<i<<" ";
        }
        
    }
    cout<<endl;
}

int main(){
    listado_primos();
    return 0;
}


/*
EJERCICIO 5:

5. Desarrollar un programa, utilizando funciones con un tipo de retorno, con las
siguientes opciones:
    a. Introducir un valor x entero comprendido entre 0 y 100.
    b. Validar que sea un valor par.
    c. Sumar todos los números impares desde el 0 hasta el valor de x.


PASOS:
1. las funciones si o si retornarán
2. pedir un valor entre 0 y 100
3. Funciones:
    - Que valide si es par el número.
    - Y la sum de numeros impares desde 0 hasta el valor X que ingresó.
*/
#include <iostream>

using namespace std;

//  funcion1:
bool validar_par(int valor){//validamos si un numero es par
    if (valor%2==0)
    {
        return true;
    }
    else{
        return false;
    }
    
}

//funcion 2
/*
En la función 2 vamos acomprobar que numeros son impares, con ayuda de la FUNCION 1
*/
int suma_impares(int valor){
    int aux_acumulador=0;//este tendrá la suma total de impares
    for (int i = 0; i < valor; i++)
    {
        if (validar_par(i)!=true)//validamos si es par o no, con la FUNCIÓN 1
        {
            aux_acumulador=aux_acumulador+i;
        }
        
    }
    return aux_acumulador;
}

int main(){
    int numero;
    cout<<"Ingrese un numero: "<<endl;
    cin>>numero;
    while (numero<0 or numero>100)
    {
        cout<<"Vuelva a ingresar un numero entre 0 y 100: "<<endl;
        cin>>numero;
    }//obligamos a poner un numero en el limite establecido
    if (validar_par(numero)==true)
    {
        cout<<"SU numero es PAR"<<endl;
    }
    else{
        cout<<"SU numero NO es PAR"<<endl;
    }

    cout<<"La suma de los numeros impares entre 0 y su numero "<<numero<<" es: "<<suma_impares(numero)<<endl;

    
    return 0;
}