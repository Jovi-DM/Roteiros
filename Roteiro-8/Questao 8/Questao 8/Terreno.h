#pragma once
#include "Imovel.h"
class Terreno:public Imovel 
{
public:
	Terreno(double);
	void getDescricao(string, string, int, string, string);
	double area;
	~Terreno();
};

