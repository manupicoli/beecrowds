#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <cctype>
#include <vector>

using namespace std;

int main(){
    int testes;
    string linha;

    cin >> testes;

    cin.ignore();

    for(int i=0; i<testes; i++){
        int maior = 0;
        vector<char> aux;
        map<char, int> letras;

        getline(cin, linha);

        for(auto c : linha){
            if(isalpha(c)){
                c = tolower(c);
                letras[c]++;
            }
        }

        for(auto l : letras){
            if(l.second > maior) {
                maior = l.second;
            }
        }

        for(auto m : letras){
            if(m.second == maior) {
                aux.push_back(m.first);
            }
        }

        sort(aux.begin(), aux.end());

        for(auto r : aux){
            cout << r;
        }

        cout << endl;
    }

    return 0;
}