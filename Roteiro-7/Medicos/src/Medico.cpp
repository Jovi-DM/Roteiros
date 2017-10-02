#include "Medico.h"

using namespace std;

Medico::Medico()
{
    //ctor
}
void Medico::fazCirurgia(){

}

double Medico::getAltura(){
    return altura;
}
string Medico::getNome(){
    return nome;
}
double Medico::getPeso(){
    return peso;
}
void Medico::setAltura(double a){
    altura = a;
}
void Medico::setNome(string n){
    nome = n;
}
void Medico::setPeso(double p){
    peso = p;
}
void Medico::setCurso(string c){
    nomecurso = c;
}
string Medico::getCurso(){
    return nomecurso;
}
void Medico::fazAtendimento(){
}

Medico::~Medico()
{
    //dtor
}
