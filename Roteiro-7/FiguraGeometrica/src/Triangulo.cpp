#include "Triangulo.h"

using namespace std;

Triangulo::Triangulo()
{
    //ctor
}
double FiguraGeometrica::calculaArea(){
    double h, b;

    cout << "Digite o valor da altura do triangulo: " << endl;
    cin >> h;
    cout << "Digite o valor da base do triangulo: " << endl;
    cin >> b;

   return (b*h)/2;
}

Triangulo::~Triangulo()
{
    //dtor
}
