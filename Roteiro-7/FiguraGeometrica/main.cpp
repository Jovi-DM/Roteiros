#include <iostream>
#include "FiguraGeometrica.h"
#include "Triangulo.h"
#include "Quadrado.h"
#include "Circulo.h"

using namespace std;

int main()
{
    int i;
    FiguraGeometrica *a[3];

    a[0] = new Quadrado();
    a[1] = new Triangulo();
    a[2] = new Circulo();
    string k;
    while (1){
        cout << "Digite 1 para calcular area do quadrado 2 para triangulo 3 para circulo e 0 para sair"<< endl;
        cin >> i;
        if (i == 1){
            cout << "Digite o nome da figura geometrica:" << endl;
            cin >> k;
            a[0] ->nome = k;
            cout << a[0]->calculaArea()<< endl;
            continue;
        } else if (i == 2){
            cout << a[1]->calculaArea()<< endl;
            cout << "Digite o nome da figura geometrica:" << endl;
            cin >> k;
            a[1]->nome = k;
            continue;
        } else if (i == 3){
            cout << a[2]->calculaArea()<< endl;
            cout << "Digite o nome da figura geometrica:" << endl;
            cin >> k;
            a[2]->nome = k;
            continue;
        } else if (i == 0){
            break;
        }
    }
    return 0;
}
