#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool procuraNoVetor(vector<int> v, int num){
    for(auto n : v){
        if(n == num) return true;
    }

    return false;
}

int main() {
    int N, R, M;
    vector<int> voltou;

    while(cin >> N >> R) {
        for(int i=0; i<R; i++){
            cin >> M;
            voltou.push_back(M);
        }

        sort(voltou.begin(), voltou.end());

        if(voltou.size() == N){
            cout << "*" << endl;
        } else {
            for(int j=1; j<=N; j++) {
                bool v = procuraNoVetor(voltou, j);

                if(v == 0) cout << j << " ";
            }

            cout << endl;
        }


        voltou.clear();
    }

    return 0;
}