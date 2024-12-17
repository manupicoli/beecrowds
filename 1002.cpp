#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    const double pi = 3.14159;
    double raio;

    cin >> raio;

    double area = (raio * raio) * pi;

    cout << fixed << setprecision(4);
    cout << "A=" << area << endl;

    return 0;
}