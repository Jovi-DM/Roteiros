#ifndef CONSULTOR_H
#define CONSULTOR_H
#include "Funcionario.h"


class Consultor : public Funcionario
{
    public:
        Consultor();
        virtual ~Consultor();
        virtual double getSalario(Funcionario);
        float getSalario(float);
        float percentual=0;

    protected:

    private:
};

#endif // CONSULTOR_H
