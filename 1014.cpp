#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int km;
    double litros;

    cin >> km >> litros;

    double kmPorLitro = km / litros;

    cout << fixed << setprecision(3);
    cout << kmPorLitro << " km/l" << endl;

    return 0;
}