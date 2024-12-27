#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

double calculaUmQuilo(double preco, double gramas){
    return (1000 * preco) / gramas;
}

int main(){
    int n;
    double p, g;
    int menor = 0;
    vector<double> results;

    cin >> n;

    while(n != 0){
        cin >> p >> g;
        double resultado = calculaUmQuilo(p, g);
        results.push_back(resultado);
        n--;
    }

    sort(results.begin(), results.end());

    cout << fixed << setprecision(2);
    cout << results[0] << endl;

    return 0;
}