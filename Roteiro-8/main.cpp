#include <iostream>
#include "Conta.h"
#include "ContaEspecial.h"
#include "IConta.h"
#include <string>

using namespace std;

int main()
{
    Conta *c[2];

    c[0] = new Conta();
    c[1] = new ContaEspecial();

    string nome;
    double saldo, salario,depost,sac;
    int nconta,i=0;
    do{
        cout << "Digite '0' para conta normal e '1' para conta especial '-1' para sair." << endl;
        cin >> i;
        if(i==0){
            cout << "Informe o nome do Cliente: ";
            cin >> nome;
            cout << "Informe o salario Mensal: ";
            cin >> salario;
            cout << "Informe o saldo: ";
            cin >> saldo;
            cout << "Informe o numero da Conta: ";
            cin >> nconta;
            cout << "Valor a ser depositado: ";
            cin >> depost;
            cout << "Valor a ser sacado: ";
            cin >> sac;

            c[i]->setnomeCliente(nome);
            c[i]->setsalarioMensal(salario);
            c[i]->setsaldo(saldo);
            c[i]->setnumeroConta(nconta);
            c[i]->definirLimite();
            c[i]->depositar(depost);
            c[i]->sacar(sac);

            cout << "\n" << "---INFORMACOES---" << "\n";
            cout << "Nome: " << c[i]->getnomeCliente() << endl;
            cout << "Numero da Conta: " << c[i]->getnumeroConta() << endl;
            cout << "Salario Mensal: " << c[i]->getsalarioMensal() << endl;
            cout << "Saldo Cliente: " << c[i]->getsaldo() << endl;
            cout << "Limite: " << c[i]->getlimite() << endl;

        }else if(i==1){
            cout << "Informe o nome do Cliente: ";
            cin >> nome;
            cout << "Informe o salario Mensal: ";
            cin >> salario;
            cout << "Informe o saldo: ";
            cin >> saldo;
            cout << "Informe o numero da Conta: ";
            cin >> nconta;
            cout << "Valor a ser depositado: ";
            cin >> depost;
            cout << "Valor a ser sacado: ";
            cin >> sac;

            c[i]->setnomeCliente(nome);
            c[i]->setsalarioMensal(salario);
            c[i]->setsaldo(saldo);
            c[i]->setnumeroConta(nconta);
            c[i]->definirLimite();
            c[i]->depositar(depost);
            c[i]->sacar(sac);

            cout << "\n" << "---INFORMACOES---" << "\n";
            cout << "Nome: " << c[i]->getnomeCliente() << endl;
            cout << "Numero da Conta: " << c[i]->getnumeroConta() << endl;
            cout << "Salario Mensal: " << c[i]->getsalarioMensal() << endl;
            cout << "Saldo Cliente: " << c[i]->getsaldo() << endl;
            cout << "Limite: " << c[i]->getlimite() << endl;
        }

    }while(i!=-1);

    return 0;
}
