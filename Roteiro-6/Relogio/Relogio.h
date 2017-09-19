#ifndef RELOGIO_H
#define RELOGIO_H


class Relogio
{
    public:
        Relogio();
        virtual ~Relogio();
        void setHorario(int, int, int);
        int getHora();
        int getMinutos();
        int getSegundos();
        int avancaHorario();

    protected:

    private:
        int hora;
        int minutos;
        int segundos;
};

#endif // RELOGIO_H
