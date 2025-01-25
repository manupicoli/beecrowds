#include <iostream>
#include <string>
#include <vector>
#include <ctype.h>

using namespace std;

int main(){
    int testes;
    string linha, res;
    vector<string> aux;

    cin >> testes;

    cin.ignore();

    for(int i=0; i<testes; i++){
        string palavra;
        
        getline(cin, linha);

        for(char l : linha){
            if(isspace(l)){
                aux.push_back(palavra);
                palavra.clear();
            } else {
                palavra += l;
            }
        }

        aux.push_back(palavra);

        for(auto p : aux){
            if(p.length() > 0)
                res += p[0];
        }

        cout << res << endl;

        aux.clear();
        res.clear();
    }

    return 0;
}