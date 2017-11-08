#pragma once

#include "Imovel.h"
class Casa:public Imovel
{
public:
	Casa(int, int, double, double);
	int numerodePavimentos;
	int quantidadedeQuartos;
	double areadoTerreno;
	double areaConstruida;
	void getDescricao(string, string, int, string, string);

	~Casa();

};

