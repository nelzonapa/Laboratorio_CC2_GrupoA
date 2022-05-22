#ifndef COLOR_H
#define COLOR_H
using namespace std;

class COLOR{
    private:
        string colores[3]={"rojo","verde","azul"};
    public:
        COLOR();
        ~COLOR();
        //usaremos GETTERS para obtener un solo color de cualquiera de los 3
        string GET_color();//devolvera un valor "string"
};

#endif

