#include <iostream>
#include <iomanip>

using namespace std;

double calculaMedia(double notaA, double notaB, double notaC){
    //notaA vale 2
    //notaB vale 3
    //notaC vale 5
    notaA = (notaA * 2) / 10.0;
    notaB = (notaB * 3) / 10.0;
    notaC = (notaC * 5) / 10.0;

    return notaA + notaB + notaC;
}
 
int main() {
    double A, B, C;

    cin >> A >> B >> C;

    double media = calculaMedia(A, B, C);

    cout << fixed << setprecision(1);
    cout << "MEDIA = " << media << endl;
 
    return 0;
}