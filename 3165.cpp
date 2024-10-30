#include <iostream>
#include <vector>

using namespace std;

int main(){
    int entrada;
    vector<int> numeros_primos;
    cin >> entrada;

    for(int i=2; i<=entrada; i++){
        bool divide = false;
        for(int j=2; j<=i; j++){
            int resto = i % j;
            if(i != j && resto == 0){
                divide = true;
                break;
            }
        }

        if(divide == false) numeros_primos.push_back(i);
    }

    for(int e=numeros_primos.size(); e>0; e--) {
        if(numeros_primos[e] - numeros_primos[e-1] == 2){
            cout << numeros_primos[e-1] << " " << numeros_primos[e] << endl;
            break;
        }
    }

    return 0;
}