#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(){
    string nome, distancia;
    int aux = 0;
    double total = 0;

    while(getline(cin, nome)){
        getline(cin, distancia);
       
        total += stoi(distancia);
        aux++;
    }

    cout << fixed << setprecision(1) << total / aux << endl;

    return 0;
}