#ifndef MEDICO_H
#define MEDICO_H
#include <string>
#include <iostream>

using namespace std;

class Medico
{
    public:
        Medico();
        virtual void setAltura(double);
        virtual void setPeso(double);
        virtual void setNome(string);
        virtual string getNome();
        virtual double getAltura();
        virtual double getPeso();
        virtual void fazCirurgia();
        virtual void setCurso(string);
        virtual string getCurso();
        virtual void fazAtendimento();
        virtual ~Medico();

    protected:

    private:
        string nome;
        double peso;
        double altura;
        string nomecurso;
};

#endif // MEDICO_H
