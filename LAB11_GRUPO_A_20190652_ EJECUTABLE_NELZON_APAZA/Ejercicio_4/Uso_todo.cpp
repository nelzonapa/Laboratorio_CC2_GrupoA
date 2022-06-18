#include "Uso_todo.h"

#include "iostream"

Uso_todo::Uso_todo(){}

int Uso_todo::parte_top_torre(){
    if (NODO1::top1 != NULL && NODO1::top1->dato1 == 1 ){//
        return 1;
    }
    else if (top2 != NULL && top2->dato2 == 1){
        return 2;
    }
    else if (top3 != NULL && top3->dato3 == 1){
        return 3;
    }
}

void Uso_todo::juego_todo(int n)
{
    //variables a usar
    int i, x, a, b;
    for (i = 0; i < (pow(2,n)); i++){
        //mostramos de las 3 clases
        mostrar1();
        mostrar2();
        mostrar3();
        x = parte_top_torre();//guardamos la parte top de la torre en x
        if (i % 2 == 0){//en caso de ser par el conteo
            //condiciones
            if (x == 1){
                agregar3(eliminar1());
            }
            else if (x == 2){
                agregar1(eliminar2());
            }
            else if (x == 3){
                agregar2(eliminar3());
            }
        }
        ///caso contrario
        else{
            if (x == 1){//caso 1
                //tenemos condiciones matemáticas especiales
                //eliminamos elementos
                a = eliminar2();
                b = eliminar3();
                if (a < b && b != 999){
                    agregar3(b);
                    agregar3(a);
                }
                else if (a > b && a != 999){
                    agregar2(a);
                    agregar2(b);
                }
                else if (b == 999){
                    agregar3(a);
                }
                else if (a == 999){
                    agregar2(b);
                }
            }
            else if (x == 2)//caso 2
            {
                //tenemos condiciones matemáticas especiales
                //eliminamos elementos
                a = eliminar1();
                b = eliminar3();
                if (a < b && b != 999){
                    agregar3(b);
                    agregar3(a);
                }
                else if (a > b && a != 999){
                    agregar1(a);
                    agregar1(b);
                }
                else if (b == 999){
                    agregar3(a);
                }
                else if (a == 999){
                    agregar1(b);
                }
            }

            else if (x == 3)//caso 3
            {
                //tenemos condiciones matemáticas especiales
                //eliminamos elementos
                a = eliminar1();
                b = eliminar2();
                if (a < b && b != 999){
                    agregar2(b);
                    agregar2(a);
                }
                else if (a > b && a != 999){
                    agregar1(a);
                    agregar1(b);
                }
                else if (b == 999){
                    agregar2(a);
                }
                else if (a == 999){
                    agregar1(b);
                }
            }
        }
    }
}

Uso_todo::~Uso_todo(){}//destructor