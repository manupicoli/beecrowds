#include <iostream>

using namespace std;

int main(){
    double entrada;

    cin >> entrada;

    if(0 <= entrada && entrada <= 25.00){
        cout << "Intervalo [0,25]" << endl;
    } else if (25.00 < entrada && entrada <= 50.00){
        cout << "Intervalo (25,50]" << endl;
    } else if (50.00 < entrada && entrada <= 75.00){
        cout << "Intervalo (50,75]" << endl;
    } else if (75.00 < entrada && entrada <= 100.00) {
        cout << "Intervalo (75,100]" << endl;
    } else {
        cout << "Fora de intervalo" << endl;
    }

    return 0;
}