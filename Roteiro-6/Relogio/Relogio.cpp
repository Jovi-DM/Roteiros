#include "Relogio.h"
#include <iostream>

Relogio::Relogio()
{
    //ctor
}
void Relogio::setHorario(int hora, int minutos, int segundos){
    this->hora=hora;
    this->minutos=minutos;
    this->segundos=segundos;
}
int Relogio::avancaHorario(){

    if(hora>24 || minutos>59 || segundos>59){
        std::cout << "Hora Invalida!" << std::endl;
    }else if(hora==23 && segundos==59 && minutos==59){
        hora=0;
        segundos=0;
        minutos=0;
    }else if(segundos==59 && minutos==59){
        hora+=1;
        minutos=0;
        segundos=0;
    }else if(segundos==59){
        minutos+=1;
        segundos=0;
    }else{
        segundos+=1;
    }
}
Relogio::getHora(){
    return hora;
}
Relogio::getMinutos(){
    return minutos;
}
Relogio::getSegundos(){
    return segundos;
}
Relogio::~Relogio(){
    //dtor
}
