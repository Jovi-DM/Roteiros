#include "Quadrado.h"

Quadrado::Quadrado()
{
    //ctor
}

double Quadrado::calculaArea(){
    double q;

    cout << "Digite o valor do lado do quadrado" << endl;
    cin >> q;

    return (q*q);

}

Quadrado::~Quadrado()
{
    //dtor
}
