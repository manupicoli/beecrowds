#include <iostream>

using namespace std;

// TODO revisar
int calculaTempoTotal(int atraso, int reacao, int tempo, string frase){
    int atrasos = atraso + reacao;
    int digitacao = frase.size() * tempo;

    return digitacao + atrasos;
}

int main(){
    int Am, Rm, Em, Av, Rv, Ev;
    string frase;

    cin >> Am >> Rm >> Em;
    cin >> Av >> Rv >> Ev;

    cin >> frase;

    int matheus = calculaTempoTotal(Am, Rm, Em, frase);
    int vinicius = calculaTempoTotal(Av, Rv, Ev, frase);

    if(matheus > vinicius) cout << "Matheus" << endl;
    else cout << "Vinicius" << endl;

    return 0;
}