#include <iostream>

using namespace std;

int main(){
    long int n, m, v;

    while(cin >> n && cin >> m){
        v = n ^ m;
        cout << v << endl;
    }
    
    return 0;
}