#ifndef GINECOLOGISTA_H
#define GINECOLOGISTA_H
#include "Medico.h"

class Ginecologista: public Medico
{
    public:
        Ginecologista();
        void fazCirurgia();
        void fazAtendimento();
        virtual ~Ginecologista();

    protected:

    private:
        std::string nomecurso;
};

#endif // GINECOLOGISTA_H
