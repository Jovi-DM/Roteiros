#include "Otorrino.h"

using namespace std;

Otorrino::Otorrino()
{
    //ctor
}
void Otorrino::fazAtendimento(){
    cout << "Otorrino faz atendimento" << endl;
}
void Otorrino::fazCirurgia(){
    cout << "O Otorrino " << Otorrino::getNome() << " faz cirurgia na area dos ouvidos" << endl;
}

Otorrino::~Otorrino()
{
    //dtor
}
