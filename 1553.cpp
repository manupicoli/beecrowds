#include <iostream>
#include <map>

using namespace std;

int main() {
    int N, K, num;
    map<int, int> perguntas;

    while(true) {
        int aux = 0;

        cin >> N >> K;

        if(N == 0 && K == 0) break;
        
        for(int i=0; i<N; i++) {
            cin >> num;
            perguntas[num]++;
        }

        for(auto p : perguntas) {
            if(p.second >= K) aux++;
        }

        cout << aux << endl;

        perguntas.clear();
    }

    return 0;
}