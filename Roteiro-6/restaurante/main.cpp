#include <iostream>
#include "MesadeRestaurante.h"
#include "RestauranteCaseiro.h"
#define MESAS 20

using namespace std;

int main()
{
    int i = 0, quant, j = 0;
    string d;
    double preco;
    MesadeRestaurante m[MESAS];
    RestauranteCaseiro f;


    while(1){
        cout << "Qual a mesa que voce quer adicionar o pedido (0 para calcular a conta de alguma mesa ou -5 para fechar): " << endl;
        cin >> i;

        while (i == 0){
            cout << "Digite -1 para sair ou -2 para zerar os pedidos ou -3 para calcular os pedidos: " << endl;
            cin >> j;
            if(j == -1){
                break;
            } else if (j == -2){
                cout << "Digite a mesa que voce quer zerar os pedidos :"<< endl;
                cin >> j;
                m[j].zeraPedidos();
            } else if (j == -3){
                cout << "Digite a mesa que voce quer calcular a conta:"<< endl;
                cin >> j;
                cout << "Valor da conta da mesa: " << m[j].calculaTotal() << endl;
            }
        }
        if(i==-5){
            break;
        }
        cout << "Qual o pedido (quant, descricao, valor, num):" << endl;
        cin >> quant >> d >> preco >> j;

        m[i].adicionaAoPedido(d, j, quant, preco);

    }

    cout << "Valor total do Restaurante: R$ " << f.calculaTotalRestaurante() << endl;



    return 0;
}
