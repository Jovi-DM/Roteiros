#include "TrabalhadorAssalariado.h"
#include <iostream>

TrabalhadorAssalariado::TrabalhadorAssalariado(){
    //ctor
}
TrabalhadorAssalariado::~TrabalhadorAssalariado(){
    //dtor
}
double TrabalhadorAssalariado::calcularPagamento(int horas){
    if(horas == 40 || horas >= 40){
        std::cout << "Ele trabalhou o que devia, 40 horas." << std::endl;
        return getsalarioMensal();
    }else if(horas < 40){
        std::cout << "Trabalhou menos do que 40 horas." << std::endl;
        return getsalarioMensal();
    }
    return 1;
}
