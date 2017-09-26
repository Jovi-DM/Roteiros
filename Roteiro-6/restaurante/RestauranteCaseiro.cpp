#include "RestauranteCaseiro.h"

RestauranteCaseiro::RestauranteCaseiro()
{
    //ctor
}
double RestauranteCaseiro::calculaTotalRestaurante()
{
    //Pedido a[100];
    int j,k;
    double resultado = 0;
    for (j =0; j < 20; j++){
        for(k = 0;k < 100; k++){
            resultado += a[j].getPreco();
        }
    }
    return resultado;
}
RestauranteCaseiro::~RestauranteCaseiro()
{
    //dtor
}
