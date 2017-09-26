#ifndef QUADRADO_H
#define QUADRADO_H
#include "FiguraGeometrica.h"


class Quadrado: public FiguraGeometrica
{
    public:
        Quadrado();
        double calculaArea();
        virtual ~Quadrado();

    protected:

    private:
};

#endif // QUADRADO_H
