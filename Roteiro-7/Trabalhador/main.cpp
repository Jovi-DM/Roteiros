#include <iostream>
#include "Trabalhador.h"
#include "TrabalhadorPorHora.h"
#include "TrabalhadorAssalariado.h"
#include <string>

using namespace std;

int main()
{
    string nome;
    double salarioMensal;
    int i,horas;
    Trabalhador *a[2];

    a[0] = new TrabalhadorPorHora();
    a[1] = new TrabalhadorAssalariado();

    while(1){
        cout << "Digite 0 para calcular o salario do trabalhador por Hora ou 1 para o trabalhador assalariado." << endl;
        cin >> i;
        if(i==0){
            cout << "Informe o nome do trabalhador: ";
            cin >> nome;
            cout << "Salario Mensal: ";
            cin >> salarioMensal;
            cout << "Horas Trabalhadas: ";
            cin >> horas;
            a[i]->setNome(nome);
            a[i]->setsalarioMensal(salarioMensal);
            a[i]->calcularPagamento(horas);
            cout << "---Informacoes---" << endl;
            cout << "Nome: " << a[i]->getNome() << endl;
            cout << "Salario Base: " << a[i]->getsalarioMensal() << endl;
            cout << "Pagamento: R$" << a[i]->calcularPagamento(horas) << "\n" << endl;
        }else if(i==1){
            cout << "Informe o nome do trabalhador: ";
            cin >> nome;
            cout << "Salario Mensal: ";
            cin >> salarioMensal;
            cout << "Horas Trabalhadas: ";
            cin >> horas;
            a[i]->setNome(nome);
            a[i]->setsalarioMensal(salarioMensal);
            cout << "---Informacoes---" << endl;
            cout << "Nome: " << a[i]->getNome() << endl;
            cout << "Salario Base: " << a[i]->getsalarioMensal() << endl;
            cout << "Pagamento: R$" << a[i]->calcularPagamento(horas) << "\n" << endl;
        }
    }

    return 0;
}
