#ifndef PRODUCTOBANCARIO_H
#define PRODUCTOBANCARIO_H

class ProductoBancario{
    private:
        string cliente;
    protected:
        double saldo;
    public:
        int numProductos;
        ProductoBancario(string, double, int);
        void imprimir();
        ~ProductoBancario();
};

#endif