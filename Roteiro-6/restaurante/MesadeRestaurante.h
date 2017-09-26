#ifndef MESADERESTAURANTE_H
#define MESADERESTAURANTE_H
#include "Pedido.h"
#include <string>


class MesadeRestaurante
{
    public:
        MesadeRestaurante();
        virtual ~MesadeRestaurante();
        void adicionaAoPedido(std::string, int, int, double);
        void zeraPedidos();
        double calculaTotal();
        Pedido a[100];

    protected:

    private:


};

#endif // MESADERESTAURANTE_H
