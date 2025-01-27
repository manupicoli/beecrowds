#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
    int n, c, k, num, menor;
    map<int, int> sorteios;
    vector<int> numeros;

    while(true) {
        cin >> n >> c >> k;

        if(n == 0 && c == 0 && k == 0) break;

        for(int l=0; l<k; l++) sorteios[l] = 0;

        for(int i=0; i<n; i++) {
            for(int j=0; j<c; j++){
                cin >> num;
                sorteios[num-1]++;
            }   
        }

        menor = n;

        for(auto s : sorteios){
            if(s.second < menor) menor = s.second;
        }

        for(auto si : sorteios){
            if(si.second == menor) numeros.push_back(si.first);
        }

        for(int j=0; j<numeros.size(); j++){
            if(j == numeros.size() - 1) cout << numeros[j] + 1;
            else cout << numeros[j] + 1 << " ";
        }

        cout << endl;

        sorteios.clear();
        numeros.clear();
    }

    return 0;
}