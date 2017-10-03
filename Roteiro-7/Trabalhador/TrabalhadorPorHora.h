#ifndef TRABALHADORPORHORA_H
#define TRABALHADORPORHORA_H
#include "Trabalhador.h"


class TrabalhadorPorHora : public Trabalhador
{
    public:
        TrabalhadorPorHora();
        virtual ~TrabalhadorPorHora();
        virtual double calcularPagamento(int);

    protected:

    private:
};

#endif // TRABALHADORPORHORA_H
