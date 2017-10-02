#include "Oftamologista.h"

Oftamologista::Oftamologista()
{
    //ctor
}

void Oftamologista::fazCirurgia(){
    cout << "O oftamologista " << Oftamologista::getNome() << " faz cirurgia nos olhos" << endl;
}
void Oftamologista::fazAtendimento(){
    cout << "O cirurgiao " << Oftamologista::getNome() << " faz atendimentos na região dos olhos" << endl;
}

Oftamologista::~Oftamologista()
{
    //dtor
}
