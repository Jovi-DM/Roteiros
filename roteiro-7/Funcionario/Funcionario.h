#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>

class Funcionario
{
    public:
        Funcionario();
        virtual ~Funcionario();
        std::string getNome();
        long int getMatricula();
        double getSalarioF();
        void setNome(std::string);
        void setMatricula(long int);
        void setSalario(double);

    private:
        long int matricula;
        std::string nome;
        double salario;
};

#endif // FUNCIONARIO_H
