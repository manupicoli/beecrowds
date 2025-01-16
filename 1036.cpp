#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    double A, B, C;

    cin >> A >> B >> C;

    double bhaskara1 = (-B + (sqrt((B * B) - (4 * A * C)))) / (2 * A);
    double bhaskara2 = (-B - (sqrt((B * B) - (4 * A * C)))) / (2 * A);

    if(isnan(bhaskara1) || isnan(bhaskara2 || isinf(bhaskara1) || isinf(bhaskara2))){
        cout << "Impossivel calcular" << endl;
    } else {
        cout << fixed << setprecision(5);
        cout << "R1 = " << bhaskara1 << endl;
        
        cout << fixed << setprecision(5);
        cout << "R2 = " << bhaskara2 << endl;        
    }

    return 0;
}