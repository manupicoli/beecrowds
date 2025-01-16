#include <iostream>
#include <vector>

using namespace std;

int main(){
    int total;
    vector<int> cedulas = {100, 50, 20, 10, 5, 2, 1};

    cin >> total;
    cout << total << endl;

    for(int i = 0; i < cedulas.size(); i++){
        int qtd = 0;

        if(total / cedulas[i] >= 1){
            qtd = total / cedulas[i];
        }

        cout << qtd << " nota(s) de R$ " << cedulas[i] << ",00" << endl;

        total -= qtd * cedulas[i];        
    }

    return 0;
}