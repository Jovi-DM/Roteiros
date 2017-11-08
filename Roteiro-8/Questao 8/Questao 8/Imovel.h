#pragma once
#include <string>
#include "Endereco.h"
#include <iostream>

class Imovel
{
public:

	Imovel();
	Endereco getEndereco();
	void setEndereco(string logra, string bairro, int num, string cidade, string cep);
	virtual void getDescricao();
	Endereco end;
	~Imovel();
private:
	
};

