#include <iostream>

using namespace std;

int main() {
    int t, n, p;
    string pais;

    while(true) {
        int total = 0, totalP = 0;

        cin >> t >> n;

        if(t == 0 && n == 0) break;

        for(int i=0; i<t; i++) {
            cin >> pais >> p;
            totalP += p;
        }

        total = n * 3;

        cout << total - totalP << endl;
    }
    
    return 0;
}