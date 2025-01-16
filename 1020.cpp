#include <iostream>

using namespace std;

int main(){
    int dias, ano, meses;
    cin >> dias;
    
    if(dias / 365 >= 1){
        ano = dias / 365;
        dias -= ano * 365;
    }

    if(dias / 30 >= 1){
        meses = dias / 30;
        dias -= meses * 30;
    }

    int dia = dias;
    cout << ano << " anos(s)" << endl;
    cout << meses << " mes(es)" << endl;
    cout << dia << " dia(s)" << endl;

    return 0;
}