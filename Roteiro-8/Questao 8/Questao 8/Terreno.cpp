#include "stdafx.h"
#include "Terreno.h"


Terreno::Terreno(double a)
{
	area = a;
	cout << "TERRENO" << endl;
	cout << "Area: " << area << endl;

}

void Terreno::getDescricao(string log, string bai, int n, string ci, string ce)
{
	setEndereco(log, bai, n, ci, ce);
	cout << "Logradouro: " << getEndereco().logradouro << endl;
	cout << "Bairro: " << getEndereco().bairro << endl;
	cout << "Numero: " << getEndereco().numero << endl;
	cout << "Cidade: " << getEndereco().cidade << endl;
	cout << "Cep: " << getEndereco().cep << endl;
}


Terreno::~Terreno()
{
}
