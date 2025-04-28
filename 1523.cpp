#include <iostream>
#include <stack>

using namespace std;

int main() {
    int mot, cpc, entr, sd;

    while(true) {
        cin >> mot >> cpc;

        if(mot == 0 && cpc == 0) break;

        stack<int> entrada;
        stack<int> saida;
        bool estacionou = true;

        for(int i=0; i<mot; i++) {
            cin >> entr >> sd;
            
            int aux = saida.size();

            for(int j=0; j<=aux; j++) {
                if(!saida.empty() && saida.top() <= entr) {
                    saida.pop();
                    entrada.pop();
                } else {
                    break;
                }
            }

            if(entrada.size() == 0 || entrada.size() < cpc && sd < saida.top()) {
                if(!estacionou) {
                    continue;
                } else {
                    entrada.push(entr);
                    saida.push(sd);

                    estacionou = true;
                }
            } else {
                estacionou = false;
            }
        }

        if(estacionou) cout << "Sim" << endl;
        else cout << "Nao" << endl;
    }

    return 0;
}