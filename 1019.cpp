#include <iostream>

using namespace std;

int main(){
    int entrada, horas = 0, minutos = 0, segundos = 0;
    cin >> entrada;
    
    if(entrada / 3600 >= 1){
        horas = entrada / 3600;
        entrada -= horas * 3600;
    }

    if(entrada / 60 >= 1){
        minutos = entrada / 60;
        entrada -= minutos * 60;
    }

    segundos = entrada;
    entrada -= segundos;
    
    cout << horas << ":" << minutos << ":" << segundos << endl;

    return 0;
}