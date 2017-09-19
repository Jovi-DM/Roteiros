#ifndef TELEVISAO_H
#define TELEVISAO_H


class Televisao
{
    public:
        Televisao();
        virtual ~Televisao();
        void setVolume(int);
        void setCanal(int);
        int getVolume();
        int getCanal();
        void mudaCanal(int);
        void aumentaCanal();
        void aumentaVolume();
        void diminuirCanal();
        void diminuirVolume();

    protected:

    private:
        int volume, canal;
};

#endif // TELEVISAO_H
