#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main() {
    int teste;
    string linha, aux;

    cin >> teste;
    cin.ignore();

    for(int i=0; i<teste; i++) {
        getline(cin, linha);
        int total = 0;

        for(int j=0; j<=linha.size(); j++) {
            if(isalnum(linha[j]) == 4) {
                aux += linha[j];
            } else {
                if(!aux.empty()){
                    int auxNum = stoi(aux);
                    total += auxNum;
                    aux.clear();
                }
            }
        }

        cout << total << endl;
    }

    return 0;
}