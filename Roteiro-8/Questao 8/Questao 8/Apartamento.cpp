#include "stdafx.h"
#include "Apartamento.h"

using namespace std;

void Apartamento::getDescricao(string log, string bai, int n, string ci, string ce)
{
	setEndereco(log, bai, n, ci, ce);
	
	cout << "Logradouro: " << getEndereco().getLogradouro() << endl;
	cout << "Bairro: " << getEndereco().bairro << endl;
	cout << "Numero: " << getEndereco().numero << endl;
	cout << "Cidade: " << getEndereco().cidade << endl;
	cout << "Cep: " << getEndereco().cep << endl;
	
	

}

Apartamento::Apartamento(std::string a, double b, int c)
{
	posicao = a;
	valorDoCondominio = b;
	numeroDeVagas = c;
	cout << "APARTAMENTO" << endl;
	cout << "Posicao: " << posicao << endl;
	cout << "Valor do condominio: " << valorDoCondominio << endl;
	cout << "Numero de vagas: " << numeroDeVagas << endl;
}

Apartamento::~Apartamento()
{
}
