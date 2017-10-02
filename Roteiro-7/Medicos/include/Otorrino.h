#ifndef OTORRINO_H
#define OTORRINO_H
#include "Medico.h"


class Otorrino: public Medico
{
    public:
        Otorrino();
        void fazCirurgia();
        void fazAtendimento();
        virtual ~Otorrino();

    protected:

    private:
        std::string nomecurso;
};

#endif // OTORRINO_H
