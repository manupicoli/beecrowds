#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    string nome;
    double salario, totalVendas;

    cin >> nome >> salario >> totalVendas;

    double comissao = (totalVendas * 15) / 100;

    cout << fixed << setprecision(2);
    cout << "TOTAL = R$ " << salario + comissao << endl;

    return 0;
}