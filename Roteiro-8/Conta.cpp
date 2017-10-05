#include "Conta.h"
#include <iostream>


Conta::Conta(){
    //ctor
}
Conta::~Conta(){
    //dtor
}
double Conta::getsalarioMensal(){
    return salarioMensal;
}
std::string Conta::getnomeCliente(){
    return nomeCliente;
}
double Conta::getsaldo(){
    return saldo;
}
int Conta::getnumeroConta(){
    return numeroConta;
}
double Conta::getlimite(){
    return limite;
}
void Conta::setsalarioMensal(double salarioMensal){
    this->salarioMensal=salarioMensal;
}
void Conta::setnomeCliente(std::string nomeCliente){
    this->nomeCliente=nomeCliente;
}
void Conta::setsaldo(double saldo){
    this->saldo=saldo;
}
void Conta::setnumeroConta(int numeroConta){
    this->numeroConta=numeroConta;
}
void Conta::setlimite(double limite){
    this->limite=limite;
}
void Conta::definirLimite(){
    limite = (salarioMensal * 2);
}
void Conta::sacar(double valor){
    saldo = saldo - valor;
    std::cout << "(Conta)Saldo apos deposito: " << saldo << "\n";
}
void Conta::depositar(double valor){
    saldo = saldo - valor;
    std::cout << "(Conta)Saldo apos saque: " << saldo << "\n";
}


