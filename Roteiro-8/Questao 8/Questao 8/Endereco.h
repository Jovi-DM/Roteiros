#pragma once

#include <string>

using namespace std;
class Endereco
{
public:
	Endereco();
	Endereco(string, string, int, string, string);
	string getLogradouro();
	string getBairro();
	int getNumero();
	string getCidade();
	string getCep();
	~Endereco();
	string logradouro, bairro, cidade, cep;
	int numero;
private:
	
};

