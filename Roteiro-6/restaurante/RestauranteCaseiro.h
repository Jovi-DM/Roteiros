#ifndef RESTAURANTECASEIRO_H
#define RESTAURANTECASEIRO_H
#include "MesadeRestaurante.h"


class RestauranteCaseiro: public MesadeRestaurante
{
    public:
        RestauranteCaseiro();
        virtual ~RestauranteCaseiro();
        //void adicionaAoPedido();
        double calculaTotalRestaurante();

    protected:

    private:
};

#endif // RESTAURANTECASEIRO_H
