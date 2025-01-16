#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double A, B, C;
    double pi = 3.14159;

    cin >> A >> B >> C;

    double triangulo = (A * C) / 2;
    double circulo = pi * (C * C);
    double trapezio = ((A + B) * C) / 2;
    double quadrado = B * B;
    double retangulo = A * B;

    cout << fixed << setprecision(3);
    cout << "TRIANGULO: " << triangulo << endl;
    cout << "CIRCULO: " << circulo << endl;
    cout << "TRAPEZIO: " << trapezio << endl;
    cout << "QUADRADO: " << quadrado << endl;
    cout << "RETANGULO: " << retangulo << endl;

    return 0;
}