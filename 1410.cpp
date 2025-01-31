#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int A, D, at, de;
    vector<int> defensores;

    while(true) {
        int menorAt = 0;
        cin >> A >> D;

        if (A == 0 && D == 0) break;

        for(int i=0; i<A; i++) {
            cin >> at;
            
            if(i==0){
                menorAt = at;
            } else {
                if(at < menorAt) menorAt = at;
            }
        }

        for (int j=0; j<D; j++){
            cin >> de;
            defensores.push_back(de);
        }

        sort(defensores.begin(), defensores.end());

        if (menorAt >= defensores[0] && menorAt >= defensores[1]) cout << "N" << endl;
        else if (menorAt >= defensores[1]) cout << "N" << endl;
        else cout << "Y" << endl;

        defensores.clear();
        
    }

    return 0;
}