#include <iostream>
#include "Hospital.h"
#include "Medico.h"
#include "Cirurgiao.h"
#include "Otorrino.h"
#include "Ginecologista.h"
#include "Oftamologista.h"

using namespace std;

int main()
{
    int i;
    double h;
    string c;
    Hospital a;
    a.f[0] = new Cirurgiao();
    a.f[1] = new Otorrino();
    a.f[2] = new Ginecologista();
    a.f[3] = new Oftamologista();

    while (1){
        cout << "CADASTRO:" << endl;
        cout << "Digite -1 para Cirurgiao, -2 Para Otorrino, -3 Para Ginecologista, -4 Para Oftamologista ou 0 para sair:";
        cin >> i;
        if (i == 0){
            break;
        } else if (i == -1){
            cout << "Digite o nome do Cirurgiao :";
            cin >> c;
            a.f[0]->setNome(c);
            cout << "Digite a altura do Cirurgiao : ";
            cin >> h;
            a.f[0]->setAltura(h);
            cout << "Digite o peso do Cirurgiao :";
            cin >> h;
            a.f[0]->setPeso(h);
            cout << "Digite o curso de formacao do cirurgiao: ";
            cin >> c;
            a.f[0]->setCurso(c);
            cout << "Nome : " << a.f[0]->getNome()<< endl;
            cout << "Altura : " << a.f[0]->getAltura()<< endl;
            cout << "Peso : " << a.f[0]->getPeso()<< endl;
            cout << "Curso : " << a.f[0]->getCurso() << endl;

        } else if (i == -2){
            cout << "Digite o nome do otorrino :";
            cin >> c;
            a.f[1]->setNome(c);
            cout << "Digite a altura do otorrino : ";
            cin >> h;
            a.f[1]->setAltura(h);
            cout << "Digite o peso do otorrino:";
            cin >> h;
            a.f[1]->setPeso(h);
            cout << "Digite o curso de formacao do otorrino: ";
            cin >> c;
            a.f[1]->setCurso(c);
            cout << "Nome : " << a.f[1]->getNome()<< endl;
            cout << "Altura : " << a.f[1]->getAltura()<< endl;
            cout << "Peso : " << a.f[1]->getPeso()<< endl;
            cout << "Curso : " << a.f[1]->getCurso() << endl;

        } else if (i == -3){
            cout << "Digite o nome do Ginecologista :";
            cin >> c;
            a.f[2]->setNome(c);
            cout << "Digite a altura do Ginecologista : ";
            cin >> h;
            a.f[2]->setAltura(h);
            cout << "Digite o peso do Ginecologista :";
            cin >> h;
            a.f[2]->setPeso(h);
            cout << "Digite o curso de formacao do Ginecologista: ";
            cin >> c;
            a.f[2]->setCurso(c);
            cout << "Nome : " << a.f[2]->getNome()<< endl;
            cout << "Altura : " << a.f[2]->getAltura()<< endl;
            cout << "Peso : " << a.f[2]->getPeso()<< endl;
            cout << "Curso : " << a.f[2]->getCurso() << endl;

        } else if (i == -4){
            cout << "Digite o nome do Oftamologista :";
            cin >> c;
            a.f[3]->setNome(c);
            cout << "Digite a altura do Oftamologista : ";
            cin >> h;
            a.f[3]->setAltura(h);
            cout << "Digite o peso do Oftamologista :";
            cin >> h;
            a.f[3]->setPeso(h);
            cout << "Digite o curso de formacao do Oftamologista : ";
            cin >> c;
            a.f[3]->setCurso(c);
            cout << "Nome : " << a.f[3]->getNome()<< endl;
            cout << "Altura : " << a.f[3]->getAltura()<< endl;
            cout << "Peso : " << a.f[3]->getPeso()<< endl;
            cout << "Curso : " << a.f[3]->getCurso() << endl;

        }

    }

    for (i=0; i<4; i++){
        cout << "Informacoes de todos os medicos " << endl;
        if (i == 0){
            cout << "Cirurgiao: " << endl;

        } else if (i == 1){
            cout << "Otorrino: " << endl;

        } else if (i == 2){
            cout << "Ginecologista: " << endl;

        } else if (i == 3) {
            cout << "Oftamologista: " << endl;

        }
        cout << "Nome : " << a.f[i]->getNome()<< endl;
        cout << "Altura : " << a.f[i]->getAltura()<< endl;
        cout << "Peso : " << a.f[i]->getPeso()<< endl;
        cout << "Curso : " << a.f[i]->getCurso() << endl;
    }
    return 0;
}
