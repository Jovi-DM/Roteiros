#ifndef CIRURGIAO_H
#define CIRURGIAO_H
#include "Medico.h"
#include <iostream>

using namespace std;

class Cirurgiao: public Medico
{
public:
    Cirurgiao();

    void fazCirurgia();
    void fazAtendimento();
    virtual ~Cirurgiao();

protected:

private:
string nomecurso;

};

#endif // CIRURGIAO_H
