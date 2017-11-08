#pragma once
#include "Imovel.h"
class Apartamento:public Imovel
{
public:
	void getDescricao(string, string, int, string, string);
	Apartamento(std::string, double, int);
	std::string posicao;
	double valorDoCondominio;
	int numeroDeVagas;
	
	~Apartamento();
};

