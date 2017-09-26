#ifndef PEDIDO_H
#define PEDIDO_H
#include "string"

class Pedido
{
    public:
        Pedido();
        virtual ~Pedido();
        Pedido(int, int, std::string, double);
        int getNumero();
        int getQuantidade();
        double getPreco();
        std::string getDescricao();
        void setNumero(int);
        void setQuantidade(int);
        void setDescricao(std::string);
        void setPreco(double);

    protected:

    private:
        int numero,quantidade;
        std::string descricao;
        double preco;
};

#endif // PEDIDO_H
