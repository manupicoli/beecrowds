#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using namespace std;

int main() {
    string linha, aux, num;
    int cont = 1;

    while(cin >> num) {
        int fem = 0, masc = 0;
        cin.ignore();

        getline(cin, linha);

        for(int i=0; i<linha.size(); i++) {
            int res = isalpha(linha[i]);

            if(isalpha(linha[i]) != 0){
                if(aux == num){
                    if(linha[i] == 'F') fem++;
                    if(linha[i] == 'M') masc++;
                }

                aux.clear();
            } else {
                if(isalnum(linha[i]) != 0) aux += linha[i];
            }
        }

        if(cont != 1) cout << endl;
        cout << "Caso " << cont << ":" << endl;
        cout << "Pares Iguais: " << fem + masc << endl;
        cout << "F: " << fem << endl;
        cout << "M: " << masc << endl;

        cont++;
    }

    return 0;
}