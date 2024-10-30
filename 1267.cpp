#include <iostream>
#include <vector>

using namespace std;

int main(){
    while(true){
        int n, d;
        bool aluno_janta;
        vector<vector<int>> alunos;

        cin >> n >> d;

        if(n == 0 && d == 0) break;

        for(int i=0; i<d; i++){
            vector<int> jantar;

            for(int j=0; j<n; j++){
                int num;
                cin >> num;
                jantar.push_back(num);
            }

            alunos.push_back(jantar);
        }

        for(int coluna=0; coluna<n; coluna++){
            vector<int> listinha;

            for(int linha=0; linha<d; linha++){
                listinha.push_back(alunos[linha][coluna]);
            }

            for(int e : listinha){
                if(e == 0){
                    aluno_janta = false;
                    break;
                }
                aluno_janta = true;
            }

            if(aluno_janta == true) break;
        }

        if(aluno_janta == true){
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }

    return 0;
}