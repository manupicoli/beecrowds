//meu avo é famoso
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct player{
    int id;
    int pontos;
};

bool comp(player x, player y){
    return x.pontos < y.pontos;
}

int exist_in_vector(vector<player> v, int id_player){
    for(int i=0; i<v.size(); i++){
        if(v[i].id == id_player) return i;
    }
    return -1;
}

vector<player> create_ranking(vector<vector<int>> matriz){
    vector<player> r;

    for(int linha=0; linha<matriz.size(); linha++){
        for(int coluna=0; coluna<matriz[linha].size(); coluna++){
            int index = exist_in_vector(r, matriz[linha][coluna]);

            if(index != -1){
                
                r[index].pontos++;                
            } else {
                player p;
                p.id = matriz[linha][coluna];
                p.pontos = 1;
                r.push_back(p);
            }
        }
    }

    return r;
}

void find_second(vector<player> rank){
    vector<int> ids;
    int second = 0;
    int n = rank.size();
    int first = 0;

    sort(rank.begin(), rank.end(), comp);

    for(int i=0; i<n; i++){
        if(rank[i].pontos > first){
            first = rank[i].pontos;
        }
    }

    for(int i=0; i<n; i++){
        if(rank[i].pontos > second && rank[i].pontos < first){
            second = rank[i].pontos;
        }
    }

    for(int i=0; i<n; i++){
        if(rank[i].pontos == second){
            ids.push_back(rank[i].id);
        }
    }

    sort(ids.begin(), ids.end());

    for(auto p : ids){
        cout << p << " ";
    }
}


int main(){
    int n, m;

    while(true){
        cin >> n >> m;

        if(n==0 && m==0) break;

        vector<vector<int>> matriz;

        for(int i=0; i<n; i++){
            vector<int> linha;

            for(int j=0; j<m; j++){                
                int jogador;
                cin >> jogador;
                linha.push_back(jogador);                
            }

            matriz.push_back(linha);
        }

        vector<player> ranking = create_ranking(matriz);
        find_second(ranking);
        cout << endl;
    }

    return 0;
}