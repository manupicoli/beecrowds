#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int horas, velocidade;
    cin >> horas >> velocidade;

    double totalDistancia = horas * velocidade;
    double combustivel = totalDistancia / 12;

    cout << fixed << setprecision(3);
    cout << combustivel << endl;

    return 0;
}