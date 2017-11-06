#include "ContaEspecial.h"

ContaEspecial::ContaEspecial(){
    //ctor
}
ContaEspecial::~ContaEspecial(){
    //dtor
}
void ContaEspecial::definirLimite(){
    double limitet = (getsalarioMensal()*3);
    setlimite(limitet);
}
void ContaEspecial::sacar(double valor){
    double saldo1 = getsaldo();
    saldo1 = saldo1 - valor;
    setsaldo(saldo1);
    std::cout << "(ContaEspecial)Saldo apos saque: " << getsaldo() << "\n";
}
void ContaEspecial::depositar(double valor){
    double saldo2 = getsaldo();
    saldo2 = valor + saldo2;
    setsaldo(saldo2);
    std::cout << "(ContaEspecial)Saldo apos depositar: " << getsaldo() << "\n";
}

