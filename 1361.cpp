#include <iostream>
#include <map>
#include <cmath>
#include <algorithm>

using namespace std;

bool comp(int a, int b) {
    return a > b;
}

int calculaAndares(map<int, char> &pr){
    int aux = 0;
    char cor = 'N';
    
    for(auto it = pr.rbegin(); it != pr.rend(); ++it) {
        if(cor == 'N') {
            if(it->second == 'V') cor = 'V';
            else cor = 'A';
            aux++;
        } else {
            if(cor == 'A'){
                if(it->second == 'V') {
                    cor = 'V';
                    aux++;
                }
            } else {
                if(it->second == 'A') {
                    cor = 'A';
                    aux++;
                }
            }
        }
    }

    return aux;
}

int main() {
    int num_testes, andares, andar;
    map<int, char> predio;

    cin >> num_testes;

    for(int i=0; i<num_testes; i++) {
        cin >> andares;

        for(int j=0; j<andares; j++) {
            cin >> andar;

            if(andar < 0) predio[abs(andar)] = 'V';
            else predio[andar] = 'A';
        }

        int res = calculaAndares(predio);

        cout << res << endl;

        predio.clear();
    }

    return 0;
}