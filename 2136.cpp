#include <iostream>
#include <set>

using namespace std;

int main(){
    string nome, escolha, maior;
    set<string> amigos;
    set<string> naoAmigos;

    while(true){
        cin >> nome;
        if(nome == "FIM") break;
        cin >> escolha;

        if(escolha == "YES") {
            if(nome.size() > maior.size()) maior = nome;
            amigos.insert(nome);
        } else {
            naoAmigos.insert(nome);
        }
    }

    for(const auto &a : amigos){
        cout << a << endl;
    }

    for(const auto &na : naoAmigos){
        cout << na << endl;
    }

    cout << endl << "Amigo do Habay:" << endl;
    cout << maior << endl;

    return 0;
}