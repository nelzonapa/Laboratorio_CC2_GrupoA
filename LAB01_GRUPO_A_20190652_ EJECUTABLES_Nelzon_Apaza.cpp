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
Escriba un código que solicite al usuario ingresar dos números enteros y que muestre
el producto de ambos.

1. Solictamos datos.
2. multiplicar.
3. mostrar resultado.
*/
using namespace std;

int main(){
    
    int valor1, valor2;
    cout<<"Ingrese 2 valores enteros: "<<endl;
    cin>>valor1>>valor2;
    cout<<"El producto de ambos numeros es: "<<valor1*valor2<<endl;
    system("pause");
    return 0;
}





/*
EJERCICIO 2:
Escriba un código que solicite el primer nombre de una persona, el apellido paterno
y el apellido materno. Retornar su correo UNSA generado, el cual consiste de la
primera letra del nombre, el apellido paterno completo, y la primera letra del apellido
materno. (se agrega el dominio de la universidad al final)

1. solicita nombre.
2. solicita apellido paterno
3. solicita apellido materno.
4. Hacer logaritmo de correo UNSA.
    - 1(Nombre) --> Apellido Paterno --> 1(AP materno) --> @unsa.edu.pe
5. Mostrar el resultado.
*/
#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int main(){

    string nombre;
    cout<<"Ingrese su primer nombre: "<<endl;//PASO1
    cin>>nombre;

    string Apellido_PA;
    cout<<"Ingrese su apellido paterno: "<<endl;//PASO2
    cin>>Apellido_PA;

    string Apellido_MA;
    cout<<"Ingrese su apellido materno: "<<endl;//PASO3
    cin>>Apellido_MA;

    string correo_unsa;//PASO4
    correo_unsa=nombre[0] + Apellido_PA + Apellido_MA[0] + "@unsa.edu.pe";

    cout<<"Su correo UNSA es: "<<correo_unsa<<endl;

    system("pause");
    return 0;
}






/*
EJERCICIO 3:
Elabore un programa que solicite ingresar una hora del día (HH:MM en formato de
cadena), solicite un tiempo en minutos a agregar, y retorne la hora de finalización (el
formato de salida debe de estar en AM o PM según corresponda).
*/
#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int main(){
    
    string hora_dia;
    cout<<"Ingrese la hora del día: "<<endl;
    cin>>hora_dia;

    string minutos_agregar;
    cout<<"Ingrese los minutos que desea agregar"<<endl;
    cin>>minutos_agregar;


    cout<<endl;
    system("pause");
    return 0;
}






/*
EJERCICIO 7:
Elabore un algoritmo que lea por teclado dos números enteros y determine si uno es
divisor del otro.
*/
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    
    int numero1, numero2;
    cout<<"Ingrese 2 valores: "<<endl;//pedimos valores
    cin>>numero1>>numero2;
    //Comprobamos si uno es divisor de otro
    if (numero1%numero2==0)
    {
        cout<<"El numero "<<numero2<<" es divisor de "<<numero1<<endl;//resultado
    }
    else if (numero2%numero1==0)
    {
        cout<<"El numero "<<numero1<<" es divisor de "<<numero2<<endl;//resultado
    }
    
    cout<<endl;
    system("pause");
    return 0;
}






/*
EJERCICIO 8:
Escribir un programa que calcule la media de x cantidad números introducidos por el teclado.

1. Pedir la cantidad de numeros que desea ingresar.
2. Comenzar a pedirle los datos, mediante un bucle.
    2.1 Creamos un valor auxiliar que ayude sumar los numeros ingresados para sacar la media
3. Calculamos la media.
4. Mostramos resultados.
*/
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    
    int cantidad_numeros;
    int aux_acumulador=0;//aux que almacenara la suma
    cout<<"Ingrese un cantidad de numeros que ingresara: "<<endl;
    cin>>cantidad_numeros;
    //cantidad_numeros será el limite
    for (int i = 0; i < cantidad_numeros; i++)//tabla de multiplicar del 12
    {
        cout<<"Ingrese el numero "<<i+1<<": "<<endl;
        cin>>aux_acumulador;
        aux_acumulador=aux_acumulador+aux_acumulador;
    }

    /*Sacamos la media*/
    cout<<"La media de los numeros ingresados es: "<<aux_acumulador/cantidad_numeros<<endl;

    cout<<endl;
    system("pause");
    return 0;
}





/*
EJERCICIO 9:
Escribir un programa que lea 10 datos desde el teclado y sume sólo aquellos que sean negativos.

1. Pedir 10 datos al usuario.
2. Filtramos que solo se tomen en cuenta numeros negativos
3. Sumar los valores negativos.
4. Mostrar resultado
*/
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    float numero_ingresado;
    float aux_acumulador=0.0;
    cout<<"Ingrese 10 numeros positivos o negativos: "<<endl;
    for (int i = 0; i < 10; i++)
    {
        cout<<"Ingrese el numero "<<i+1<<": "<<endl;
        cin>>numero_ingresado;
        //filtramos: PAso 2
        if (numero_ingresado<0)
        {
            aux_acumulador=aux_acumulador+numero_ingresado;//Ya tenemos la suma de los valores solo negativos
        }
        
    }
    cout<<"La suma de los valores negativos que ingreso es: "<<aux_acumulador<<endl;
    cout<<endl;
    system("pause");
    return 0;
}



/*
EJERCICIO 10:
Escribir un programa que almacene la cadena de caracteres contraseña en una variable, 
pregunte al usuario por la contraseña hasta que introduzca la contraseña correcta.

1. pedir una contraseña al usuario
2. Guardamos en un string
3. Pedimos que vuelva a ingresar la contraseña
4. Con un Bucle pedimos que repita la misma contraseña
5. Mostramos error o exito
*/
#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main(){

    string contrasena;
    cout<<"Ingrese su contrasena:"<<endl;
    cin>>contrasena;

    system("pause");

    string aux_contrasena;//aux que guardará la segunda contraseña y comparar
    cout<<"Ahora volvera a introducir su contrasena para verificacion: "<<endl;
    cin>>aux_contrasena;

    while (aux_contrasena!=contrasena)//igualamos hasta obtener lo correcto
    {
        cout<<"Vuelva a intentarlo..";
        cin>>aux_contrasena;
    }
    cout<<"La verificacion fue un exito!";
    
    

    cout<<endl;
    system("pause");
    return 0;
}