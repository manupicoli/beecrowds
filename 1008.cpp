#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int num, horas;
    float valorHora;

    cin >> num >> horas >> valorHora;

    cout << "NUMBER = " << num << endl;
    cout << fixed << setprecision(2);
    cout << "SALARY = U$ " << horas * valorHora << endl;

    return 0;
}