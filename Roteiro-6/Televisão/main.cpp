#include <iostream>
#include "TesteTelevisao.h"

using namespace std;

int main()
{
    TesteTelevisao tv2;
    int c, v, es;

    cout << "Digite o valor do canal e do volume: " << endl;
    cin >> c >> v;
    tv2.tv1.setCanal(c);
    tv2.tv1.setVolume(v);

    while (1){
        cout << "Digite 1 para mudar o canal" << endl;
        cout << "Digite 2 para aumentar o volume" << endl;
        cout << "Digite 3 para aumentar o canal" << endl;
        cout << "Digite 4 para diminuir o volume" << endl;
        cout << "Digite 5 para diminuir o canal" << endl;
        cout << "Digite 6 para checar o volume e o canal" << endl;
        cout << "Digite 0 para desligar a tv" << endl;
        cin >> es;
            if (es == 0){
                break;
            } else if (es == 1){
                cout << "Digite o valor do canal: " << endl;
                cin >> c;
                tv2.tv1.setCanal(c);
                continue;
            } else if (es == 2){
                tv2.tv1.aumentaVolume();
                continue;
            } else if (es == 3){
                tv2.tv1.aumentaCanal();
                continue;
            } else if (es == 4) {
                tv2.tv1.diminuirVolume();
                continue;
            } else if (es == 5) {
                tv2.tv1.diminuirCanal();
                continue;
            } else if (es == 6) {
                cout << tv2.tv1.getCanal() << " <- Canal atual " << tv2.tv1.getVolume() << " <- Volume atual" << endl;
            }

    }
    return 0;
}
