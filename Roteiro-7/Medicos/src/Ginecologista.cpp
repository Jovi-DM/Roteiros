#include "Ginecologista.h"

Ginecologista::Ginecologista()
{
    //ctor
}
void Ginecologista::fazAtendimento(){
    cout << "Ginecologista faz atendimento na parte intima da mulher" << endl;
}

void Ginecologista::fazCirurgia(){
    cout << "O ginecologista " << Ginecologista::getNome() << " faz cirurgia na parte intima da mulher" << endl;
}

Ginecologista::~Ginecologista()
{
    //dtor
}
