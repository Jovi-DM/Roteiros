#ifndef OFTAMOLOGISTA_H
#define OFTAMOLOGISTA_H
#include "Medico.h"

class Oftamologista : public Medico
{
    public:
        Oftamologista();
        void fazCirurgia();
        void fazAtendimento();
        virtual ~Oftamologista();

    protected:

    private:
        std::string nomecurso;
};

#endif // OFTAMOLOGISTA_H
