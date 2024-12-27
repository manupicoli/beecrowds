#include <iostream>
#include <vector>

using namespace std;

bool procuraNoVetor(vector<int> b, int num){
    for(int j=0; j<b.size(); j++){
        if(num == b[j]) {
            return true;
        }
    }

    return false;
}

int main(){
    int aux = 0;
    int n, m, bilhete;
    vector<int> bilhetes;
    vector<int> procurados;

    while(true){
        cin >> n >> m;

        if(n == 0 & m == 0) break;

        for(int i=0; i<m; i++){

            cin >> bilhete;

            int p = procuraNoVetor(bilhetes, bilhete);
            int v = procuraNoVetor(procurados, bilhete);

            if(p == 1 && v == 0){
                aux++;
                procurados.push_back(bilhete);
            } else {
                bilhetes.push_back(bilhete);
            }
        }

        cout << aux << endl;

        aux = 0;
        bilhetes.clear();
        procurados.clear();
    }
    
    return 0;
}