#include "Circulo.h"

Circulo::Circulo()
{
    //ctor
}
double Circulo::calculaArea(){
    double r;

    cout << "Digite o valor do raio do circulo:"<< endl;
    cin >> r;

    return (r*r)*3.14;
}
Circulo::~Circulo()
{
    //dtor
}
