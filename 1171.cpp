#include <iostream>
#include <map>

using namespace std;

int main(){
    int n;
    int num;
    map<int, int> lista;

    cin >> n;
    

    for(int i=0; i<n; i++){
        cin >> num;
        if(lista.find(num) == lista.end()) lista[num] = 1;
        else lista[num]++; 
    }

    for(auto numero : lista) cout << numero.first << " aparece " << numero.second << " vez(es)" << endl;

    return 0;
}
