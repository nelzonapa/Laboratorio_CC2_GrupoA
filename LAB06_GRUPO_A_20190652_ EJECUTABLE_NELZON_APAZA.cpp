/*EJERCICIOS RESUELTOS DE LABORATORIO 06 CC2 -- 
EJECUTAR TODO EL ARCHIVO .CPP, PARA ESCOGER EL EJERCICIO QUE DESEE PROBAR EN LA EJECUCIÓN*/
/*
DATOS PERSONALES:
Alumno: Apaza Apaza Nelzon Jorge 
CUI:20190652
CURSO: CC2 - Laboratorio - GRUPO A
*/

#include "iostream"
#include "stdlib.h"
#include <time.h>//para usar time() --> relacionado con rand()

using namespace std;
//FUNCIONES
void ejercicio1();
void ejercicio2();
void ejercicio3();
void ejercicio4();
void ejercicio5();

int main()
{
    int opcion;
    string menu="Elegir opcion:\n1. Ejercicio 1\n2. Ejercicio 2\n3. Ejercicio 3\n4. Ejercicio 4\n5. Ejercicio 5\n";
    cout<<menu;
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
    default:
        break;
    }

    return 0;
}
/*-------------------------------------------------------------------------------------------*/
/*

Ejercicio 1: 
Implemente un programa con clases que calcule el área de un rectángulo y perímetro.

PASOS:
1. Creo la clase Rectangulo.
2. Le pongo en private: largo y ancho.
3. En públic:
    - Declaramos al constructor.
    - Ponemos las funciones de la clase.
4. Inicializamos el constructor.
5. Definimos las funciones.
6. En int main() creamos un objeto y llamamos a la acción
*/

/*PASO 1, 2 y 3*/
class Rectangulo{
    private:
        float largo;
        float ancho;
    public:
        Rectangulo(float,float);//constructor
        void perimetro();//función para hallar el perimetro.
        void area();//función para hallar el área
};

/*PASO 4*/
Rectangulo::Rectangulo(float _largo, float _ancho){//inicalizamos el constructor
    largo=_largo;
    ancho=_ancho;
}

/*PSO 5*/
void Rectangulo::perimetro(){//función para hallar el perimetro.
    cout<<"El PERIMETRO de su figura es: "<<2.0*largo+2.0*ancho<<endl;
}

void Rectangulo::area(){//función para hallar el área.
    cout<<"El AREA de su figura es: "<<largo*ancho<<endl;
}

/*PASO 6*/
void ejercicio1(){
    cout<<"Medidas iniciales del rectangulo: largo=20 y ancho=5"<<endl;
    Rectangulo rectangulito = Rectangulo(20,5);
    rectangulito.area();
    rectangulito.perimetro();

    system("pause");
}


/*-------------------------------------------------------------------------------------------*/

/*

Ejercicio 2: Se conoce de un alumno de la Universidad Nacional de San Agustín: CUI, nombre
completo y tres notas parciales (nota1, nota2, nota3). El programa con clases debe
imprimir: CUI, el primer nombre, el promedio de las tres notas e indique con un
mensaje si el alumno aprobó (nota final >= 10.5) o no aprobó (nota final < 10.5) la
asignatura de Ciencias de la Computación II.

1, Creamos la clase alumno_CC2.
2. Atributos: CUI, Nombre Completo y 3 notas parciales.
#PARA hallar el primer nombre, podemos almacenarlo en un array, usar codigo ASCCI para ver que
si se encuentra un primer espacio solo se imprima hasta ahí
3. Funciones: Imprimir--> CUI, primer nombre.
    Imprimir_promedio y Mensaje de si esta aprobado o no

*/

class AlumnoCC2 {
    private:
        string cui,nombre_completo;
        float nota1,nota2,nota3;
    public:
        AlumnoCC2(string,string,float,float,float);//constructor
        //DESTRUCTOR:
        ~AlumnoCC2();
        //funciones:
        void imprimir_datos();
        void promedio_final();
};

AlumnoCC2::AlumnoCC2(string _cui,string _nombreCom,float _nota1,float _nota2, float _nota3){
    cui=_cui;
    nombre_completo=_nombreCom;
    nota1=_nota1;
    nota2=_nota2;
    nota3=_nota3;
}
//DESTRUCTOR
AlumnoCC2::~AlumnoCC2(){}

/*DEFINIMOS FUNCIONES*/
void AlumnoCC2::imprimir_datos(){
    cout<<"Alumno: ";
    for (int i = 0; i < nombre_completo.length(); i++)
    {
        if (nombre_completo[i]!=' ')//HACEMOS que solo imprima el primer nombre
        {
            cout<<nombre_completo[i];
        }
        else{
            break;
        }
        
    }
    
    cout<<endl<<"CUI: "<<cui<<endl;
    cout<<"NOTAS FINALES: "<<nota1<<"\t"<<nota2<<"\t"<<nota3<<endl;
}

void AlumnoCC2::promedio_final(){
    float promedio=(nota1+nota2+nota3)/3;
    cout<<"Su promedio FINAL ES: "<<promedio<<endl;
    if (promedio>=10.5 and promedio>0)
    {
        cout<<"ALUMNO APROBADO"<<endl;
    }
    else if(promedio<10.5 and promedio>=0){
        cout<<"ALUMNO DESAPROBADO"<<endl;
    }
    else {
        cout<<"Datos ingresados de forma incorrecta"<<endl;
    }
    
}

void ejercicio2(){
    //creamos objeto alumnito de clase AlumnoCC2
    AlumnoCC2 alumnito=AlumnoCC2("20190652","Nelzon Jorge Apaza Apaza",15,16,14);
    //usamos funciones
    alumnito.imprimir_datos();
    alumnito.promedio_final();

    //llamamos al destructor:
    alumnito.~AlumnoCC2();
    system("pause");
}


/*-------------------------------------------------------------------------------------------*/

/*

Ejercicio 3: Implemente un programa con clases que lea la fecha de nacimiento y la fecha de hoy
y muestre por pantalla el nombre y la edad de la persona.

1. Crear class: Persona
2. Atributos: fecha_nacimiento(dia-mes-anio)
        fecha_actual(dia-mes-anio)
        nombre
        edad
3. funciones/métodos:
    - Mostrar nombre y edad

*/
class PERSONA
{
    private:
        int dia_N, mes_N,anio_N,dia_A, mes_A,anio_A;
        string nombre;
    public:
        PERSONA(int,int,int,int,int,int,string);
        ~PERSONA();//destructor
        //funciomes
        void mostrar_datos();
};

PERSONA::PERSONA(int _diaN,int _mesN, int _anioN,int _diaA,int _mesA,int _anioA, string _nombre)
{
    //nacimiento
    dia_N=_diaN;
    mes_N=_mesN;
    anio_N=_anioN;

    //actual
    dia_A=_diaA;
    mes_A=_mesA;
    anio_A=_anioA;
    
    nombre=_nombre;
}

PERSONA::~PERSONA()//destructor
{
}

void PERSONA::mostrar_datos(){
    //filtramos el día, mes y anio, para poner la edad exacta
    if (dia_A>=dia_N and mes_A>=mes_N and anio_A>anio_N){
                int edad= anio_A-anio_N;
                cout<<"la persona "<<nombre<<" tiene "<<edad<<" anios"<<endl;
    }
    else
    {
        int edad= anio_A-(anio_N+1);//si es que aún no pasó la fecha de cumpleaños
        cout<<"La persona "<<nombre<<" tiene "<<edad<<" anios"<<endl;
    }
    
}

void ejercicio3(){
    PERSONA personita= PERSONA(7,9,2000,12,5,2022,"Nelzon");
    personita.mostrar_datos();
    //destruimos
    personita.~PERSONA();

}

/*-------------------------------------------------------------------------------------------*/

/*

Ejercicio 4: Implemente una aplicación con clases donde una clase contiene un arreglo en el que
se pueden almacenar como máximo 5 datos. Debe tener un nuevo dato para
almacenarlo, debe existir un método que verifique que el arreglo tenga espacio
disponible para guardar el dato. En caso contrario se debe mostrar un mensaje
indicando que el arreglo está lleno. Asimismo, debe tener un método para retirar un
dato del arreglo, este método debe verificar que, si haya algo para sacar del arreglo,
es decir que el arreglo no vaya a estar vacío, en cuyo caso debe desplegar un mensaje
diciendo que no hay nada para sacar de arreglo.

PASOS:
1. CLASE1
    Atributos:
    - array(5 datos)
    Métodos:
    //CREO QUE USAREMOS PUNTEROS
    - verificar espacio(que vea que no te excedas de valores), mostrar advertencia
    - Retirar dato(1. array no vacio(decir que esta vacio si lo está) 2.Retirar elemento(reemplazamos con 0))

*/
class APLICACION{
    private:
        int cantidad_array=5;
        int *puntero_array_dinamico=new int[cantidad_array];
        char espacio=' ';//32 es el espacio " " en codigo ASCII
    public:
    APLICACION();//constructor por defecto
    //DESTRUCTOR
    ~APLICACION();
    void ingresar_verificar_datos();
    void mostrar_datos();
    //verificamos que no este vacio ningun espacio
    void retirar_datos();
        
};

APLICACION::APLICACION(){}

//DESTRUCTOR
APLICACION::~APLICACION(){}

void APLICACION::ingresar_verificar_datos(){
    for (int i = 0; i < cantidad_array; i++)
    {
        cout<<"Ingrese el valor  en la posicion "<<i<<endl;
        cin>>puntero_array_dinamico[i];
    }
    cout<<endl<<"Su array tiene todos los espacios llenos"<<endl;
    
}

void APLICACION::mostrar_datos(){
    cout<<endl<<"Mostrando el array: "<<endl;
    for (int i = 0; i < cantidad_array; i++)
    {
        if (puntero_array_dinamico[i]==32)
        {
            cout<<" ";
        }
        else {
            cout<<puntero_array_dinamico[i];
        }
        cout<<", ";
    }
}

void APLICACION::retirar_datos(){
    int aux_vacio=0;
    int dato_retirar_posicion;
    for (int i = 0; i < cantidad_array; i++)
    {
        if (puntero_array_dinamico[i]==espacio)//si se tiene un lugar vacio
        {
            aux_vacio+=1;
        }
    }
    if (aux_vacio>0)
    {
        cout<<endl<<"Su cadena contiene 1 o mas espacios vacios"<<endl;
    }
    else if (aux_vacio==cantidad_array)
    {
        cout<<endl<<"SU ARRAY ESTA VACIO, NO SE PUEDE RETIRAR NINGUN ELEMENTO"<<endl;
    }
    else
    {
        cout<<endl<<"Que dato desea retirar? Indique la posicion: "<<endl;
        cin>>dato_retirar_posicion;
        for (int i = 0; i < cantidad_array; i++)
        {
            if (puntero_array_dinamico[i]==espacio)//POR SI ESE ESPACIO ya está VACIO
            {
                cout<<"Ese espacio YA SE ENCUENTRA vacio"<<endl;
            }
            else {
                if (i==dato_retirar_posicion)//pedimos el dato a retirar por posicion o indice
                {
                    puntero_array_dinamico[i]=espacio;
                }
            } 
        }
    }
    
}

void ejercicio4(){

    APLICACION aplicativo=APLICACION();
    aplicativo.ingresar_verificar_datos();
    aplicativo.mostrar_datos();
    aplicativo.retirar_datos();
    aplicativo.mostrar_datos();
    //destruimos
    aplicativo.~APLICACION();
}
/*-------------------------------------------------------------------------------------------*/

/*

Ejercicio 5: Implementar un programa con clases que haga la búsqueda de un dato almacenado en
una matriz de 3x3 que tiene los números de 1 al 9 ingresados aleatoriamente y debe
indicar la posición donde se encuentra el dato.

PASOS:
1. Creamos una clase llamada MATRIZ
    Atributos:
    -matriz
    Métodos, funciones:
    -rellenar matriz aleatoriamente(1-9).
    - mostrar matriz
    -buscar un valor(que muestre la posición).
2. desarrollar..
*/

class MATRIZ{
    private:
        int matriz[3][3];//matriz de 3x3
    public:
        //constructor
        MATRIZ();
        ~MATRIZ();
        void rellenar_Alea_matriz();
        void buscar_valor_matriz();
        void mostrar_matriz();
};

MATRIZ::MATRIZ(){}
//DESCTRUCTOR
MATRIZ::~MATRIZ(){}

void MATRIZ::rellenar_Alea_matriz(){
    srand(time(NULL));//para RAND()
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            //USAMOS RAND() --> valor = 0 + rand() % 2;// Obtiene valores entre 0 y 1
            matriz[i][j]=1 + rand()%10;//numeros aleatorios entre 1 al 9
        }
    }
}
void MATRIZ::mostrar_matriz(){
    cout<<"Mostrando matriz creada con numeros aleatorios"<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }
}
void MATRIZ::buscar_valor_matriz()
{
    int valor_buscar, aux_contador=1;
    cout<<"Ingrese el valor a buscar en la matriz: "<<endl;
    cin>>valor_buscar;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matriz[i][j]==valor_buscar)
            {   //Mostramos la ubicación en la matriz de lo buscado
                cout<<"El valor "<<valor_buscar<<" se encuentra en la posicion ["<<i<<"]["<<j<<"]"<<endl;
            }
            else{
                aux_contador+=1;
            }
        }
    }
    if (aux_contador==1)
    {   //En el caso de no ser igual a ninguno, no encontrarse en la matriz
        cout<<"Su numero No se encuentra en la matriz"<<endl;
    }
    
}

void ejercicio5(){
    MATRIZ matriz_nueva=MATRIZ();
    matriz_nueva.rellenar_Alea_matriz();
    system("pause");
    matriz_nueva.mostrar_matriz();
    system("pause");
    matriz_nueva.buscar_valor_matriz();
    matriz_nueva.~MATRIZ();
}