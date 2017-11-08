#ifndef CONTA_H
#define CONTA_H
#include "IConta.h"
#include <string>

class Conta : public IConta
{
    public:
        Conta();
        virtual ~Conta();
        std::string getnomeCliente();
        double getsalarioMensal();
        int getnumeroConta();
        double getsaldo();
        double getlimite();
        void setnomeCliente(std::string);
        void setsalarioMensal(double);
        void setsaldo(double);
        void setlimite(double);
        void setnumeroConta(int);
        virtual void definirLimite();
        void sacar(double);
        void depositar(double);

    protected:

    private:
        std::string nomeCliente;
        double salarioMensal;
        int numeroConta;
        double saldo;
        double limite;
};

#endif // CONTA_H
