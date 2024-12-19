#include <iostream>
#include <vector>

using namespace std;

bool buscaNoVetor(char d, vector<char> v){
    for(char c : v){
        if(c == d) return true;
    }

    return false;
}

int main(){
    int n1, n2;
    string auxiliar;
    vector<char> verificaRepeticao;
    vector<int> numeros;

    while(cin >> n1 >> n2){
        for(int i=n1; i<=n2; i++){
            int aux = 0;

            auxiliar = to_string(i);

            for(char digit : auxiliar){

                int busca = buscaNoVetor(digit, verificaRepeticao);

                if(busca == 1){
                    aux++;
                } else {
                    verificaRepeticao.push_back(digit);
                }
            }

            if(aux == 0) numeros.push_back(i);

            verificaRepeticao.clear();

        }

        cout << numeros.size() << endl;
        numeros.clear();
    }
    return 0;
}