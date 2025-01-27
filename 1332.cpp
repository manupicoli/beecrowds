#include <iostream>

using namespace std;

int main() {
    int testes;
    string num;

    cin >> testes;

    for(int i=0; i<testes; i++) {
        cin >> num;

        if(num.size() == 5) { 
            cout << "3" << endl;
        } else {
            if(num[0] == 'o' && num[1] == 'n') cout << "1" << endl;
            else if(num[1] == 'n' && num[2] == 'e') cout << "1" << endl;
            else if(num[0] == 'o' && num[2] == 'e') cout << "1" << endl;
            else if(num[0] == 't' && num[1] == 'w') cout << "2" << endl;
            else if(num[1] == 'w' && num[2] == 'o') cout << "2" << endl;
            else if(num[0] == 't' && num[2] == 'o') cout << "2" << endl;
        }
    }

    return 0;
}