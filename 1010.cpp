#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int cod1, num1, cod2, num2;
    double preco1, preco2;

    cin >> cod1 >> num1 >> preco1 >> cod2 >> num2 >> preco2;

    double valor1 = num1 * preco1;
    double valor2 = num2 * preco2;

    cout << fixed << setprecision(2);
    cout << "VALOR A PAGAR: R$ " << valor1 + valor2 << endl;

    return 0;
}