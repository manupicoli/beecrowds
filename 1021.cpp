#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    double total;
    vector<double> cedulas = {100.00, 50.00, 20.00, 10.00, 5.00, 2.00};
    vector<double> moedas = {1.00, 0.50, 0.25, 0.10, 0.05, 0.01};

    cin >> total;

    cout << "NOTAS:" << endl;

    for(int i = 0; i < cedulas.size(); i++){
        int qtd = 0;

        if(total / cedulas[i] >= 1){
            qtd = total / cedulas[i];
        }

        cout << fixed << setprecision(2);
        cout << qtd << " nota(s) de R$ " << cedulas[i] << endl;
        total -= qtd * cedulas[i];        
    }

    cout << "MOEDAS:" << endl;

    for(int j = 0; j < moedas.size(); j++){
        int qtd = 0;

        int totInt = round(total * 100);
        int totMoedas = round(moedas[j] * 100);

        int div = round(totInt / totMoedas);

        if(div >= 1){
            qtd = div;
        }

        cout << fixed << setprecision(2);
        cout << qtd << " moeda(s) de R$ " << moedas[j] << endl;
        total -= qtd * moedas[j];
    }

    return 0;
}