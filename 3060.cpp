#include <iostream>
#include <cmath>

using namespace std;

void calcula(int valor, int parcela){
    int divisao = valor % parcela; // 3
    int valorParcela;

    if(divisao == 0){
        valorParcela = valor / parcela;

        for(int i = 0; i < parcela; i++){
            cout << valorParcela << endl;
        }
    } else {
        double v = valor;
        double p = parcela;

        double vP = v / p;
        valorParcela = ceil(vP);

        for(int j = 0; j < divisao; j++){
            cout << valorParcela << endl;
        }

        valor -= valorParcela * divisao;
        parcela -= divisao;

        calcula(valor, parcela);
    }
}

int main(){
    int valor, parcelas;
    cin >> valor >> parcelas;

    calcula(valor, parcelas);

    return 0;
}