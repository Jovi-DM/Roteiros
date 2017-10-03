#include "TrabalhadorPorHora.h"
#include <iostream>

TrabalhadorPorHora::TrabalhadorPorHora(){
    //ctor
}
TrabalhadorPorHora::~TrabalhadorPorHora(){
    //dtor
}
double TrabalhadorPorHora::calcularPagamento(int horas){
    double salario = 0;
    double result = 0, valorphora;
    int excesso=0;

    if(horas==40){
        std::cout << "Ele trabalhou o que devia 40 horas." << std::endl;
        return getsalarioMensal();
    }else if (horas>=40){
        excesso = (horas - 40);
        valorphora = getsalarioMensal()/160;
        salario = excesso*(valorphora * 1.5); // 1.5 é 1:30h
        std::cout << "Trabalhou 40 horas e mais " << excesso << " adicionais." << std::endl;
        result = getsalarioMensal() + salario;
        return result;
    }else if(horas < 40){
        std::cout << "Trabalhou menos do que 40 horas." << std::endl;
    }
}
