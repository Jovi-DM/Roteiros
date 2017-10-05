#ifndef ICONTA_H
#define ICONTA_H

class IConta
{
    public:
        IConta();
        virtual ~IConta();
        virtual void sacar(double valor) = 0;
        virtual void depositar(double valor) = 0;

    protected:

    private:

};

#endif // ICONTA_H
