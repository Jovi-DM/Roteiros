#include "Consultor.h"
#include <iostream>

Consultor::Consultor(){
    //ctor
}
Consultor::~Consultor(){
    //dtor
}
double Consultor::getSalario(Funcionario f){
    double salario = f.getSalarioF();
    double result = salario + (salario*(getSalario(percentual)/100.0));
    return result;
}
float Consultor::getSalario(float percentual){
    this->percentual = percentual;
    std::cout << "Valor do percentual inserido: " << percentual << "%" << std::endl;
    return percentual;
}
