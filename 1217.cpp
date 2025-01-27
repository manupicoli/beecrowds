#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <map>

using namespace std;

int main() {
    int testes;
    double preco, total = 0, kg, qtdFrutas;
    string frutas, aux;
    vector<string> fruta;
    map<int, int> frutaPerDay;

    cin >> testes;

    for(int i=0; i<testes; i++){
        cin >> preco;
        cin.ignore();

        getline(cin, frutas);

        total += preco;

        for(int j=0; j<=frutas.size(); j++){
            if(frutas[j] == ' ' || j==frutas.size()){
                fruta.push_back(aux);
                aux.clear();
            } else {
                aux += frutas[j];
            }
        }

        cout << "day " << i+1 << ": " << fruta.size() << " kg" << endl;

        frutaPerDay[i] = fruta.size();
        fruta.clear();
    }

    for(auto f : frutaPerDay){
        qtdFrutas += f.second;
    }

    kg = qtdFrutas / testes;

    cout << fixed << setprecision(2) << kg << " kg by day" << endl;
    cout << "R$ " << fixed << setprecision(2) << total / testes << " by day" << endl;

    return 0;
}