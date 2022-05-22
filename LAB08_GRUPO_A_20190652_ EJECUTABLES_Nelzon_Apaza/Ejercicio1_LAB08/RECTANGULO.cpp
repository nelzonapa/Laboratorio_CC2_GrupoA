#include "RECTANGULO.h"
#include "FORMA.h"

RECTANGULO::RECTANGULO(string _color,int _x, int _y, char *_nombres_figura, float _menor, float _mayor):FORMA(_color,_x,_y,_nombres_figura){
    lado_menor=_menor;
    lado_mayor=_mayor;
}
RECTANGULO::~RECTANGULO(){}

void RECTANGULO::imprimir(){
    int opcion;
    FORMA::imprimir();//USAMOS LA FUNCION IMPRIMIR de la clase FORMA (Virtual)
    cout<<"\tSus lados son los siguientes: "<<endl;
    cout<<"\tLado menor: "<<lado_menor<<endl;
    cout<<"\tLado mayor: "<<lado_mayor<<endl;
    cout<<"---MENU 2---"<<endl<<"1. Mostrar area y perimetro de mi figura."<<endl<<"2. Cambiar tamanio"<<endl;
    cin>>opcion;
    switch (opcion)
    {
    case 1:
        area();
        perimetro();
        break;
    case 2:
        camb_tamanio();
        break;
    default:
        break;
    }
}

void RECTANGULO::area(){
    float area;
    area=lado_menor*lado_mayor;
    cout<<"El area del rectangulo es: "<<area<<endl;
}

void RECTANGULO::perimetro(){
    float perimetro;
    perimetro=2*lado_menor + 2*lado_mayor;
    cout<<"El perimetro del rectangulo es: "<<perimetro<<endl;
}
void RECTANGULO::camb_tamanio(){
    float escala;
    cout<<"Ingrese una escala para disminuir o aumentar el tamanio de su figura: "<<endl;
    cin>>escala;
    if (escala<=0.0)
    {
        cout<<"Vuelvalo a intentar: "<<endl;
        cin>>escala;
    }
    lado_menor=lado_menor*escala;//CAMBIAMOS las medidas
    lado_mayor=lado_mayor*escala;
    cout<<"NUEVOS DATOS: "<<endl;
    area();
    perimetro();
}