#include "Trabalhador.h"

Trabalhador::Trabalhador(){
    //ctor
}
Trabalhador::~Trabalhador(){
    //dtor
}
std::string Trabalhador::getNome(){
    return nome;
}
double Trabalhador::getsalarioMensal(){
    return salarioMensal;
}
void Trabalhador::setNome(std::string nome){
    this->nome = nome;
}
void Trabalhador::setsalarioMensal(double salarioMensal){
    this->salarioMensal = salarioMensal;
}
double Trabalhador::calcularPagamento(int horas){
    return salarioMensal;
}
