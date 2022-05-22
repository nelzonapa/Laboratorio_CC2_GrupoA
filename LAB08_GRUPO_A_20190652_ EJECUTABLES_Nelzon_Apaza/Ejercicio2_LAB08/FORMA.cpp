#include "FORMA.h"

FORMA::FORMA(string _color,int _x, int _y, char *_nombres_figura){//constructor
    color=_color;
    x=_x;
    y=_y;
    nombre_figura=_nombres_figura;
}

FORMA::~FORMA(){}//destructor

void FORMA::imprimir(){
    cout<<"\tEl color de su figura es: "<<color<<endl;
    cout<<"\tLas coordenadas del centro de su figura son: "<<x<<", "<<y<<endl;
    cout<<"\tEl nombre de su figura es: "<<nombre_figura<<endl;//posible impresion de un solo dígito
}

string FORMA::get_color(){//Para obtener el color
    return color;
}

void FORMA::set_nuevo_color(){//Para cambiar el color
    cout<<"\tIngrese nuevo color: "<<endl;
    cin>>color;
}