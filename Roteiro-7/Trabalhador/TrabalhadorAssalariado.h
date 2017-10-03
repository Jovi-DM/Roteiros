#ifndef TRABALHADORASSALARIADO_H
#define TRABALHADORASSALARIADO_H
#include "Trabalhador.h"

class TrabalhadorAssalariado : public Trabalhador
{
    public:
        TrabalhadorAssalariado();
        virtual ~TrabalhadorAssalariado();
        virtual double calcularPagamento(int);

    protected:

    private:
};

#endif // TRABALHADORASSALARIADO_H
