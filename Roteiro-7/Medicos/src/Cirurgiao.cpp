#include "Cirurgiao.h"

using namespace std;

Cirurgiao::Cirurgiao()
{
    //ctor
}

void Cirurgiao::fazCirurgia(){
    cout << "O cirurgiao " << Cirurgiao::getNome() << " faz cirurgia" << endl;
}
void Cirurgiao::fazAtendimento(){
    cout << "O cirurgiao " << Cirurgiao::getNome() << " faz atendimentos mais basicos" << endl;
}
Cirurgiao::~Cirurgiao()
{
    //dtor
}
