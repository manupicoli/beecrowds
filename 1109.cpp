#include <iostream>
#include <string>
#include <stack>
#include <vector>

using namespace std;

char valida(string palavra, vector<string> &expressao){
    if(palavra == expressao[0]) return 'Y';
    else return 'N';
}

// TODO terminar

int main(){
    string regex, subRegex, palavra;
    vector<string> expressao;
    stack<char> aux;
    int testes;

    while(getline(cin, regex)) {
        for(int i=0; i<regex.size(); i++) {
            if(regex[i] == '(') {
                aux.push('(');
            } else if (regex[i] == ')') {
                aux.pop();
                expressao.push_back(subRegex);
            } else {
                subRegex += regex[i];
            }
        }

        cin >> testes;

        for(int j=0; j<testes; j++) {
            cin >> palavra;

            char v = valida(palavra, expressao);
            cout << v << endl;
        }
    }

    return 0;
}