/*
DATOS PERSONALES:
Alumno: Apaza Apaza Nelzon Jorge 
CUI:20190652
CURSO: CC2 - Laboratorio - GRUPO A
*/
#include <iostream>
#include <stdlib.h>

/*
EJERCICIO 1. Sumar todos los enteros pares desde 2 hasta 100.

2+4+6+8+10....100 = SUMA

1. Creamos un auxiliar acumulador de la suma.
2. Implementamos el for.
3. Damos el resultado.

*/
using namespace std;

int main(){
    /*PASO 1*/
    int aux_acumulador=0;
    /*PASO 2*/
    for (int i = 1; i < 101; i++)
    {
        if (i%2==0)
        {
            aux_acumulador=i+aux_acumulador;
        }
        
    }
    
    /*PASO 3*/
    cout<<"La suma de todos los enteros pares desde 2 hasta 100 es: "<<aux_acumulador<<endl;

    system("pause");
    return 0;
}




/*
EJERCICIO 2:
Calcule los primeros 50 números primos y muestre el resultado en pantalla.

1. Abrimos un for.
2. Condiciones de un número para ser primo:
    - Un número primo se puede dividir entre 1 y el mismo.
3. mostrar todos esos números.
*/
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    
    cout<<"Imprimiendo numeros primos del 1 al 50..."<<endl;
    for (int i = 2; i < 51; i++)
    {
        if ( (i%i==0) && (i%1==0) && (i%2!=0))//condicion para ser primo
        {
            cout<<i<<" ";
        }
        
    }
    cout<<endl;
    system("pause");
    return 0;
}





/*
EJERCICIO 3:
Escribir un programa que visualice en pantalla los números múltiplos de 5
comprendidos entre 1 y 100.
*/
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    
    cout<<"Mostrando los numeros multiplos de 5 comprendidos entre 1 y 100..."<<endl;
    for (int i = 1; i < 101; i++)
    {
        if (i%5==0)//Revisamos cada uno
        {
            cout<<i<<" ";
        }
        
    }
    cout<<endl;

    system("pause");
    return 0;
}





/*
EJERCICIO 4:
Escriba un código que solicite ingresar dos números 𝑥 y 𝑦, tal que 𝑥 < 𝑦. Muestre
todos los números primos que se encuentren entre el rango de valores, de no
encontrarse, mostrar el primo más cercano a 𝑥 o 𝑦.

PASOS:
1. Solicitamos 2 numeros.
2. Si o si el SEGUNDO debe ser MAYOR que el PRIMERO
3. Mostrar los numeros primos entre estos 2 numeros.
4. Si no es así, mostrar el primo más cercano a x o a y

*/
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    
    int num_x, num_y;
    cout<<"Ingrese 2 numeros: "<<endl;
    cin>>num_x>>num_y;

    while (num_y<=num_x)//vemos que se cumpla la condicion
    {
        cout<<"Vuelva a intentarlo, recuerde que su segundo numero debe ser el mayor: "<<endl;
        cin>>num_x>>num_y;
    }
    
    int aux=0;//aux que nos ayudará a ver si tenemos o no numeros primos
    cout<<"Imprimiendo numeros primos que se encuentren entre sus numeros..."<<endl;
    for (int i = num_x; i <= num_y; i++)
    {
        if ( (i%i==0) && (i%1==0) && (i%2!=0))//condicion para ser primo
        {
            cout<<i<<" ";//ponemos los primos
        }
        else{
            aux++;
        }
        
    }
    
    if (aux==0)
    {
        cout<<"No hay numeros primos entre los numeros que dio"<<endl;
    }
    

    cout<<endl;
    system("pause");
    return 0;
}





/*
EJERCICIO 5:
Elabore un programa que lea n números y determine cuál es el mayor, el menor y la
media de los números leídos.

1. Con for leemos n numeros.
2. mientras se llenan los datos determinamos con dos auxiliares el menor y el mayor de todos.
3. un tercer auxiliar sumará todo y sacará la media aritmetica
*/
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    
    int n;
    cout<<"Cuantos numeros desea leer?: "<<endl;
    cin>>n;//limite
    float dato_ingresado, aux_mayor=0, aux_menor=0, aux_acumulador=0;

    for (int i=0; i < n; i++)
    {
        cout<<"Ingrese el dato "<<i+1<<": ";
        cin>>dato_ingresado;//leemos los datos

        aux_acumulador=dato_ingresado + aux_acumulador;//acumulador en general
        
        if (aux_mayor<=dato_ingresado){
            aux_mayor=dato_ingresado;//almacenamos solo dato mayor
        }
        else{
            aux_menor=dato_ingresado;//almacenamos solo dato menor
        }
    }
    
    cout<<"El numero mayor de los datos ingresados es: "<<aux_mayor<<endl;
    cout<<"El numero menor de los datos ingresados es: "<<aux_menor<<endl;
    cout<<"El promedio de los datos ingresados es: "<<aux_acumulador/n<<endl;

    cout<<endl;
    system("pause");
    return 0;
}




/*
EJERCICIO 6:
Elabore un programa que calcule la serie de Fibonacci. La serie de Fibonacci es la
sucesión de números: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ... Cada número se calcula sumando
los dos anteriores a él.
*/
#include <iostream>
#include <stdlib.h>

using namespace std;

/*
1. Pedimos un número
2. Entiende el logaritmo de fbonnacci: 1 1 2 3 5 8 13 ... n
    1 -> solo 1
    1 -> 1(anterior) + nada
    2 -> 1(anterior) + 1(anterior)
    3 -> 2(anterior) + 1(anterior)
3. Aplica a la fórmula.
4. Muestra resultado.
*/

int main(){
    /*PASO 1*/
    int num_ingre;
    cout<<"Ingrese el numero para mostrarle la serie de Fibonnacci: "<<endl;
    cin>>num_ingre;

    /*PASO 2*/
    int limite=num_ingre;
    //El USUARIO indica: el límite cuantas operaciones (cuántos numeros apareceran) se van a hacer.
    int aux_i=1;//--> Este servira como almacen y de paso ayudara a sumar.
    for (int i=0; i < limite; i++)
    {
        cout<<aux_i<<" ";//mostramos el avance
        if (i>=2){
            aux_i=(i-1)+aux_i;
        }
        else{
            aux_i=i+aux_i;
        }
    }

    cout<<endl;
    system("pause");

    return 0;
}




/*
EJERCICIO 7:
Calcula el promedio de 3 notas para n estudiantes.
*/
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    
    int n;
    cout<<"Ingrese la cantidad de estudiantes que tiene: "<<endl;
    cin>>n;

    int nota1,nota2,nota3;//3 notas a ingresar

    for (int i = 1; i <= n; i++)
    {
        cout<<"Estudiante numero "<<i<<endl<<"Ingrese sus 3 notas: "<<endl;
        cin>>nota1>>nota2>>nota3;
        cout<<"El promedio de notas del "<<i<<" alumno es: "<<(nota1+nota2+nota3)/3<<endl;//calculamos para cada uno
    }
    
    cout<<endl;
    system("pause");
    return 0;
}



/*
EJERCICIO 8:
Escribir un programa que genere la tabla de multiplicar de un número introducido por el teclado.

1. Pedir un numero entero
2. Hacer un bucle
3. Imrpimir el resultado
*/
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    
    int numero;
    cout<<"Ingrese un numero: "<<endl;
    cin>>numero;

    for (int i = 1; i <= 12; i++)//tabla de multiplicar hasta el  12
    {
        cout<<numero<<" * "<<i<<" = "<<numero*i<<endl;//Aplicamos la multiplicación
    }

    cout<<endl;
    system("pause");
    return 0;
}




/*
EJERCICIO 9:
Escribir un programa que pida al usuario un número entero y muestre por pantalla un triángulo rectángulo como el de más abajo,
de altura el número introducido. 

*               1-> Se imprime un asterisco
**              2 -> Se imrpime 2 asteriscos
***             3   .
****            4   .
*****           5   .

1. Pide un numero entero.
2. hacemos un bucle para conteo de saltos
3. Dentro del anterior otro bucle para imprimir los asteriscos.
    3.1 Tenemos un contador: cont_asterisco
*/
#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int main(){

    int cont_asterisco=1;//este nos ayudará a aumentar la impresión de asteriscos
    int num_asteriscos;
    cout<<"Ingrese un numero entero: para graficar el triangulo "<<endl;
    cin>>num_asteriscos;

    for (int i = 0; i < num_asteriscos; i++)//primer for, para los saltos de línea
    {
        for (int j = 0; j < cont_asterisco; j++)//segundo for para imprimir *
        {
            cout<<"*";
        }
        cout<<endl;//salto
        cont_asterisco++;
        
    }
    
    cout<<endl;
    system("pause");
    return 0;
}





/*
EJERCICIO 10:
Escribir un programa que pida al usuario una palabra y luego muestre por pantalla una a una las letras de la 
palabra introducida empezando por la última.

1. pedir una contraseña al usuario
2. Guardamos en un string
3. Con bucle for, mostramos la contraseña al revés
*/
#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main(){

    string contrasena;
    cout<<"Ingrese su contrasena:"<<endl;
    cin>>contrasena;
    int longitud_contrasena=contrasena.length();//sacamos la longitud de la contraseña

    cout<<"Imprimiendo contrasena: "<<endl;//imprimimos con for
    for (int i =longitud_contrasena ; i >=0; i--)
    {
        cout<<contrasena[i]<<" ";
    }

    cout<<endl;
    system("pause");
    return 0;
}