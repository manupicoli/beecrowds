#include <iostream>
#include <map>

using namespace std;

char calculaPontosAdicionais(int auxMark, int auxLeti){
    if(auxMark > 0 && auxLeti > 0) {
        if(auxMark < auxLeti) return 'M';
        else if (auxLeti < auxMark) return 'L';
        else return 'T';
    } else if (auxMark > 0) {
        return 'M';
    } else if (auxLeti > 0) {
        return 'L';
    } else {
        return 'N';
    }
}

int calculaPontos(map<int, int> pontos){
    int total = 0;

    for(auto p : pontos){
        total += (p.first * p.second);
    }

    return total;
}

int main(){
    int rodadas;
    int pontoM, pontoL;
    map<int, int> pontosMark;
    map<int, int> pontosLeti;

    while(true){
        map<int, int> auxiliar1;
        map<int, int> auxiliar2;
        int auxM = 0, auxL = 0;

        cin >> rodadas;

        if(rodadas == 0) break;

        for(int i=0; i<rodadas; i++){
            cin >> pontoM;

            pontosMark[pontoM]++;
            auxiliar1[i] = pontoM;

            if(pontosMark[pontoM] == 3 && auxM == 0){
                if(auxiliar1[i] == auxiliar1[i-1] && auxiliar1[i-1] == auxiliar1[i-2]) auxM = i;
            }
        }

        for(int i=0; i<rodadas; i++){
            cin >> pontoL;

            pontosLeti[pontoL]++;
            auxiliar2[i] = pontoL;

            if(pontosLeti[pontoL] == 3 && auxL == 0){
                if(auxiliar2[i] == auxiliar2[i-1] && auxiliar2[i-1] == auxiliar2[i-2]) auxL = i;
            }
        }

        int totalLeti = calculaPontos(pontosLeti);
        int totalMark = calculaPontos(pontosMark);

        char v = calculaPontosAdicionais(auxM, auxL);

        if(v == 'M') totalMark += 30;
        if(v == 'L') totalLeti += 30;

        if(totalMark > totalLeti) cout << "M" << endl;
        if(totalLeti > totalMark) cout << "L" << endl;
        if(totalLeti == totalMark) cout << "T" << endl;

        pontosMark.clear();
        pontosLeti.clear();
    }

    return 0;
}