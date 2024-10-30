//botas perdidas
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int num_teste;
    int numero;
    char lado;
    int aux=0;
    vector<char> direita;
    vector<char> esquerda;

    while(cin >> num_teste){
        for(int i=0; i<num_teste; i++){
            cin >> numero >> lado;
            if(lado == 'D') direita.push_back(numero);
            else esquerda.push_back(numero);
        }
        for(int j=0; j<direita.size(); j++){
            for(int l=0; l<esquerda.size(); l++){
                if(esquerda[l] == direita[j]){
                    aux++;
                    esquerda.erase(esquerda.begin() + l);
                    break;
                }
            }
        }
        cout << aux << endl;
        aux = 0;

        direita.clear();
        esquerda.clear();
    }
    return 0;
}