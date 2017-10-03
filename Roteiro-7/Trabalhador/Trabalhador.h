#ifndef TRABALHADOR_H
#define TRABALHADOR_H
#include "string"


class Trabalhador
{
    public:
        Trabalhador();
        virtual ~Trabalhador();
        virtual double calcularPagamento(int);
        std::string getNome();
        double getsalarioMensal();
        void setNome(std::string);
        void setsalarioMensal(double);

    protected:

    private:
        std::string nome;
        double salarioMensal;
};

#endif // TRABALHADOR_H
