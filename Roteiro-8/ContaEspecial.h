#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H
#include "Conta.h"
#include <iostream>


class ContaEspecial : public Conta
{
    public:
        ContaEspecial();
        virtual ~ContaEspecial();
        virtual void definirLimite();
        void sacar(double valor);
        void depositar(double valor);

    protected:

    private:
};

#endif // CONTAESPECIAL_H
