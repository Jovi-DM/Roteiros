#include "Pedido.h"

Pedido::Pedido(){
    //ctor
}
Pedido::Pedido(int numero, int quantidade, std::string descricao, double preco){
    this->numero = numero;
    this->quantidade = quantidade;
    this->descricao = descricao;
    this->preco = preco;
}
int Pedido::getNumero(){
    return numero;
}
int Pedido::getQuantidade(){
    return quantidade;
}
double Pedido::getPreco(){
    return preco;
}
std::string Pedido::getDescricao(){
    return descricao;
}
void Pedido::setNumero(int numero){
    this->numero=numero;
}
void Pedido::setQuantidade(int){
    this->quantidade=quantidade;
}
void Pedido::setDescricao(std::string descricao)
{
    this->descricao=descricao;
}
void Pedido::setPreco(double preco)
{
    this->preco=preco;
}
Pedido::~Pedido(){
    //dtor
}
