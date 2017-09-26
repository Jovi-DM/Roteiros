#include <iostream>
#include "Relogio.h"
#include "RelogioTeste.h"

using namespace std;

int main()
{
    RelogioTeste tr;
    int aux,aux1,aux2;
    cout << "Informe a hora: ";
    cin >> aux;

    cout << "Informe a minutos: ";
    cin >> aux1;

    cout << "Informe a segundos: ";
    cin >> aux2;

    tr.t1.setHorario(aux,aux1,aux2);

    cout << endl;

    if(tr.t1.getMinutos()<10 && tr.t1.getSegundos()<10)
        cout << "Sao : " << tr.t1.getHora() << ":0" << tr.t1.getMinutos() << ":0"  << tr.t1.getSegundos() << endl;
    else if(tr.t1.getMinutos()<10 && tr.t1.getSegundos()>10)
        cout << "Sao : " << tr.t1.getHora() << ":0" << tr.t1.getMinutos() << ":"  << tr.t1.getSegundos() << endl;
    else if(tr.t1.getMinutos()>10 && tr.t1.getSegundos()<10)
        cout << "Sao : " << tr.t1.getHora() << ":" << tr.t1.getMinutos() << ":0"  << tr.t1.getSegundos() << endl;
    else
        cout << "Sao : " << tr.t1.getHora() << ":" << tr.t1.getMinutos() << ":"  << tr.t1.getSegundos() << endl;

    tr.t1.avancaHorario();

    if(tr.t1.getMinutos()<10 && tr.t1.getSegundos()<10)
        cout << "Com o avancahorario sao : " << tr.t1.getHora() << ":0" << tr.t1.getMinutos() << ":0"  << tr.t1.getSegundos() << endl;
    else if(tr.t1.getMinutos()<10 && tr.t1.getSegundos()>10)
        cout << "Com o avancahorario sao : " << tr.t1.getHora() << ":0" << tr.t1.getMinutos() << ":"  << tr.t1.getSegundos() << endl;
    else if(tr.t1.getMinutos()>10 && tr.t1.getSegundos()<10)
        cout << "Com o avancahorario sao : " << tr.t1.getHora() << ":" << tr.t1.getMinutos() << ":0"  << tr.t1.getSegundos() << endl;
    else
        cout << "Sao : " << tr.t1.getHora() << ":" << tr.t1.getMinutos() << ":"  << tr.t1.getSegundos() << endl;

    return 0;
}
