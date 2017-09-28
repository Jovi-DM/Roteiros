#include "Funcionario.h"
#include <string>

Funcionario::Funcionario(){
    //ctor
}
std::string Funcionario::getNome(){
    return nome;
}
long int Funcionario::getMatricula(){
    return matricula;
}
double Funcionario::getSalarioF(){
    return salario;
}
void Funcionario::setNome(std::string nome){
    this->nome=nome;
}
void Funcionario::setMatricula(long int matricula){
    this->matricula=matricula;
}
void Funcionario::setSalario(double salario){
    this->salario=salario;
}
Funcionario::~Funcionario() {
    //dtor
}


