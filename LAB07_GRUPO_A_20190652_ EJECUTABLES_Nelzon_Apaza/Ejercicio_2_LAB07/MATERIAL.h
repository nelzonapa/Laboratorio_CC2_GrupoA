#ifndef MATERIAL_H
#define MATERIAL_H
/*Creamos la segunda clase*/
using namespace std;

class MATERIAL{
    private:
        string material[3]={"madera","vidrio","plastico"};
    public:
        MATERIAL();
        ~MATERIAL();
        string GET_material();
};

#endif