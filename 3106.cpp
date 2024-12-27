#include <iostream>

using namespace std;

int formaTime(int qtdAluno){
    int times = qtdAluno / 3;
    return times * 3;

}

int main(){
    int u, alunos, total = 0;

    cin >> u;

    while (u != 0){
        cin >> alunos;

        int tot = formaTime(alunos);
        total += tot;

        u--;
    }

    cout << total << endl;

    return 0;
}