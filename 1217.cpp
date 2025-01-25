#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

int main(){
    int testes;
    double preco, total = 0, kg, qtdFrutas;
    string frutas, aux;
    vector<string> fruta;

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

    }

    qtdFrutas = frutas.size();

    cout << qtdFrutas << endl;

    kg = qtdFrutas / testes;

    cout << kg << " kg by day" << endl;
    cout << "R$ " << total / testes << " by day" << endl;

    // for(auto f : fruta){
    //     cout << f << endl;
    // }

    

    return 0;
}