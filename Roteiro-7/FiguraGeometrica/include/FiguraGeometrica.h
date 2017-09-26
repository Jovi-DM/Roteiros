#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include <string>
#include <iostream>

using namespace std;

class FiguraGeometrica
{
    public:
        FiguraGeometrica();
        virtual ~FiguraGeometrica();
        virtual double calculaArea();
        string nome;


    protected:

    private:

};

#endif // FIGURAGEOMETRICA_H
