#include "stdafx.h"
#include "Casa.h"

using namespace std;

Casa::Casa(int a, int b, double c, double d)
{
	numerodePavimentos = a;
	quantidadedeQuartos = b;
	areadoTerreno = c;
	areaConstruida = d;
	cout << "CASA" << endl;
	cout << "Numero de pavimentos: " << numerodePavimentos << endl;
	cout << "Quantidade de quartos: " << quantidadedeQuartos << endl;
	cout << "Area do terreno: " << areadoTerreno << endl;
	cout << "Area construida: " << areaConstruida << endl;
}

void Casa::getDescricao(string log, string bai, int n, string ci , string ce)
{
	setEndereco(log, bai, n, ci, ce);
	cout << "Logradouro: " << getEndereco().logradouro << endl;
	cout << "Bairro: " << getEndereco().bairro << endl;
	cout << "Numero: " << getEndereco().numero << endl;
	cout << "Cidade: " << getEndereco().cidade << endl;
	cout << "Cep: " << getEndereco().cep << endl;
	
}


Casa::~Casa()
{
}
