#include "MesadeRestaurante.h"

MesadeRestaurante::MesadeRestaurante(){
    //ctor
}
void MesadeRestaurante::adicionaAoPedido(std::string desc, int num, int quant, double pre){
    double soma =0;
    if (a[num].getPreco() == 0){
        a[num].setDescricao(desc);
        a[num].setQuantidade(quant);
        a[num].setPreco(pre);
    } else {
        a[num].setDescricao(desc);
        a[num].setQuantidade(quant);
        soma = a[num].getPreco() + pre;
        a[num].setPreco(soma);
    }
}
void MesadeRestaurante::zeraPedidos(){

    int i;

    for(i = 0; i < 100; i++){
        a[i].setDescricao("");
        a[i].setNumero(0);
        a[i].setQuantidade(0);
        a[i].setPreco(0);
    }
}
double MesadeRestaurante::calculaTotal(){
    int j;
    double resultado = 0;
    for (j =0; j < 100; j++){
        resultado += a[j].getPreco();
    }
    return resultado;
}
MesadeRestaurante::~MesadeRestaurante(){
    //dtor
}
