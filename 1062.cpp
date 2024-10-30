//trilhos
#include <iostream>
#include <queue>

using namespace std;

int main(){
    int num_vagoes;
    int vagoes;
    int aux = 1;
    queue<int> trem;
    queue<int> saida;
    queue<int> estacao;

    while(true){
        cin >> num_vagoes;
        if(num_vagoes == 0) break;

        while(true){
            cin >> vagoes;
            if(vagoes == 0){
                cout << endl;
                break;
            }
            saida.push(vagoes);
            trem.push(aux);
            aux++;

            while(true){
                //aqui vou conferir se a saída é possível
                
            }
        }

        while(!trem.empty()){
            cout << trem.front() << endl;
            trem.pop();
        }

    }

    return 0;
}