#include <iostream>
#include <vector>
using namespace std;

int main(){
    int amostras;

    while(true){
        int seq;
        int aux=0;
        char direcao;
        vector<int> loop;

        cin >> amostras;
        if(amostras == 0) break;

        for(int i=0; i<amostras; i++){
            cin >> seq;
            loop.push_back(seq);
        }

        for(int j=0; j<loop.size(); j++){
            if(j==0 && loop[loop.size()-1] > loop[j]){
                direcao = 'B';
            } 
            if(j==0 && loop[loop.size()-1] < loop[j]){
                direcao = 'C';
            }
            
            if(j==loop.size()-1){
                if(loop[j] > loop[0] && direcao != 'B'){
                    aux++;
                    direcao = 'B';
                }
                if (loop[j] < loop[0] && direcao != 'C'){
                    aux++;
                    direcao = 'C';
                }
            } else {
                if(loop[j+1] > loop[j] && direcao != 'C') {
                    aux++;
                    direcao = 'C';
                }

                if(loop[j+1] < loop[j] && direcao != 'B'){
                    aux++;
                    direcao = 'B';
                }
            }
        }
        cout << aux << endl;
    }
    return 0;
}