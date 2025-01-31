#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    string linha;
    char aux = ' ';
    vector<char> letras;

    while(getline(cin, linha)){

        if(linha == "*") break;

        for(int i=0; i<=linha.size(); i++){
            if(aux == ' '){
                aux = tolower(linha[i]);
                letras.push_back(aux);
            } else {
                aux = linha[i];
            }
        }

        aux = letras[0];
        char res = 'Y';

        for(auto l : letras) {
            if(aux != l) res = 'N';
        }

        cout << res << endl;

        letras.clear();
        aux = ' ';
    }

    return 0;
}