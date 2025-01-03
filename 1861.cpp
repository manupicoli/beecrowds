#include <iostream>
#include <map>
#include <set>

using namespace std;

int main(){
    string assassino, assassinado;
    map<string, int> assassinos;
    set<string> assassinados;   

    while(cin >> assassino && cin >> assassinado){
        assassinos[assassino]++;
        assassinados.insert(assassinado);
    }

    cout << "HALL OF MURDERERS" << endl;

    for(auto pessoa : assassinos){
        if(assassinados.find(pessoa.first) == assassinados.end()){
            cout << pessoa.first << " " << pessoa.second << endl;
        }
    }

    return 0;
}