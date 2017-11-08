#include "stdafx.h"
#include "Endereco.h"


Endereco::Endereco()
{
}

Endereco::Endereco(string a, string b, int c, string d, string e)
{
	logradouro = a;
	bairro = b;
	numero = c;
	cidade = d;
	cep = e;
}

string Endereco::getLogradouro()
{
	return logradouro;
}

string Endereco::getBairro()
{
	return bairro;
}

int Endereco::getNumero()
{
	return numero;
}

string Endereco::getCidade()
{
	return cidade;
}

string Endereco::getCep()
{
	return cep;
}


Endereco::~Endereco()
{
}
