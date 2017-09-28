#include <iostream>
#include "Funcionario.h"
#include "Consultor.h"
#include "MinhaEmpresa.h"

using namespace std;

int main()
{
    MinhaEmpresa me;

    string nome;
    long int mat;
    double salario;
    float percen;

    cout << "Digite o nome do Funcionario: ";
    cin >> nome;
    cout << "Informe a matricula do Funcionario: ";
    cin >> mat;
    cout << "Salario do Funcionario: ";
    cin >> salario;
    cout << "Percentual de aumento para o Funcionario: ";
    cin >> percen;

    me.f.setNome(nome);
    me.f.setMatricula(mat);
    me.f.setSalario(salario);
    me.c.getSalario(percen);

    cout << "\n" << "Nome: " << me.f.getNome() << endl;
    cout << "Matricula: " << me.f.getMatricula() << endl;
    cout << "Salario: R$" << me.f.getSalarioF() << endl;
    cout << "Salario com Acrescimo: R$ " << me.c.getSalario(me.f);

    return 0;
}
