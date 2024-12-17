//presentation error

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool comp(string s1, string s2) {
    return s1.size() > s2.size();
}

int main(){
    int n;
    cin >> n;

    cin.ignore();

    for(int i=0; i<n; i++){
        vector<string> palavras;
        vector<string> ordenado;
        string linha;
        string letra;

        getline(cin, linha);
        
        for(int j=0; j<=linha.size(); j++){
            if(linha[j] == ' ' || j==linha.size()){
                palavras.push_back(letra);
                letra.clear();
            } else {
                letra += linha[j];
            }
        }

        stable_sort(palavras.begin(), palavras.end(), comp);

        for(auto palavra : palavras){
           cout << palavra << " ";
        }

        cout << endl;
    }

    return 0;
}