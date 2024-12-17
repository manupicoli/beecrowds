#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(int a, int b) {
    return a > b;
}

int main(){
    int n;
    vector<int> pares;
    vector<int> impares;

    cin >> n;

    for(int i=0; i<n; i++){
        int num;
        cin >> num;

        if(num % 2 == 0){
            pares.push_back(num);
        } else {
            impares.push_back(num);
        }
    }

    sort(pares.begin(), pares.end());
    sort(impares.begin(), impares.end(), comp);

    for(auto par : pares){
        cout << par << endl;
    }

    for(auto impar : impares){
        cout << impar << endl;
    }

    return 0;
}