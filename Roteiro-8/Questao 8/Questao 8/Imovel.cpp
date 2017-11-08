#include "stdafx.h"
#include "Imovel.h"


Imovel::Imovel()
{
}

Endereco Imovel::getEndereco()
{
	return end;
}

void Imovel::setEndereco(string logra, string bairro, int num, string cidade, string cep)
{
	end.logradouro = logra;
	end.bairro = bairro;
	end.numero = num;
	end.cidade = cidade;
	end.cep = cep;

	cout << "Logradouro: " << end.logradouro << endl;
	cout << "Bairro: " << end.bairro << endl;
	cout << "Numero: " << end.numero << endl;
	cout << "Cidade: " << end.cidade << endl;
	cout << "Cep: " << end.cep << endl;
}

void Imovel::getDescricao()
{
}


Imovel::~Imovel()
{
}
