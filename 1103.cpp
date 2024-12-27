#include <iostream>

using namespace std;

bool isDiaSeguinte(int hora1, int minuto1, int hora2, int minuto2){
    if(hora1 > hora2){
        return true;
    } else if (hora1 == hora2) {
        if(minuto1 > minuto2){
            return true;
        } else {
            return false;
        }
    } else {
        return false;
    }
}

int main(){
    int hora1, minuto1, hora2, minuto2;
    int total;

    while(true){
        cin >> hora1 >> minuto1 >> hora2 >> minuto2;

        if(hora1 == 0 && minuto1 == 0 && hora2 == 0 && minuto2 == 0) break;

        int diaSeguinte = isDiaSeguinte(hora1, minuto1, hora2, minuto2);
        int difMinutos = minuto2 - minuto1;

        if(diaSeguinte){
            int finalDia1 = (24 - hora1) * 60;
            int somaDia2 = finalDia1 + (hora2 * 60);

            total = somaDia2 + difMinutos;
            cout << total << endl;

        } else {
            hora1 *= 60;
            hora2 *= 60;

            int difHoras = hora2 - hora1;
            total = difHoras + difMinutos;

            cout << total << endl;
        }
    }

    return 0;
}