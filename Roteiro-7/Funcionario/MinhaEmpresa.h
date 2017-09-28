#ifndef MINHAEMPRESA_H
#define MINHAEMPRESA_H
#include "Funcionario.h"
#include "Consultor.h"


class MinhaEmpresa
{
    public:
        Consultor c;
        Funcionario f;
        MinhaEmpresa();
        virtual ~MinhaEmpresa();
};

#endif // MINHAEMPRESA_H
