#ifndef OPERACIONBASE_H
#define OPERACIONBASE_H
/*
1. Creamos la clase OperacionBase
    1.1 Usamos (#) protected y (+) public
    1.2 Ingresamos lo demás de acuerdo al gráfico
*/

class OperacionBase{//tomaremos a operación base como la suma
    protected:
        int operador_numero;//operador será un número
    public:
        void set_operador(int);//definimos el numero
        int get_operador();//obtenemos el numero ingresado o almacenado
};

#endif