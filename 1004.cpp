#include <iostream>
#include <iomanip>

using namespace std;

float calculaMedia(float notaA, float notaB){
    //notaA vale 3.5
    //notaB vale7.5
    notaA = (notaA * 3.5) / 10.0;
    notaB = (notaB * 7.5) / 10.0;

    float media11 = notaA + notaB;

    return (media11 * 10.0) / 11.0;
}
 
int main() {
    float A, B;

    cin >> A >> B;

    float media = calculaMedia(A, B);

    cout << fixed << setprecision(5);
    cout << "MEDIA = " << media << endl;
 
    return 0;
}