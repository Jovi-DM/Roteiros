#ifndef HOSPITAL_H
#define HOSPITAL_H
#include "Medico.h"

class Medico;

class Hospital
{
    public:
        Hospital();
        Medico *f[4];

        virtual ~Hospital();

    protected:

    private:
};

#endif // HOSPITAL_H
