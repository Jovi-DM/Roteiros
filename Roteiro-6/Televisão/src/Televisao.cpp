#include "Televisao.h"

Televisao::Televisao()
{
    //ctor
}
void Televisao::setVolume(int v){
    volume = v;
}
void Televisao::setCanal(int ca){
    canal = ca;
}
int Televisao::getCanal(){
    return canal;
}
int Televisao::getVolume(){
    return volume;
}
void Televisao::mudaCanal(int cana){
    canal = cana;
}
void Televisao::aumentaVolume(){
    volume++;
}
void Televisao::aumentaCanal(){
    canal++;
}
void Televisao::diminuirVolume(){
    volume--;
}
void Televisao::diminuirCanal(){
    canal--;
}

Televisao::~Televisao()
{
    //dtor
}
