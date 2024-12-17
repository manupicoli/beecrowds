#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

float calcula_nota(float n, int peso){
    return (n * peso) / 10;
}

int main(){
    float n1, n2, n3, n4;
    //pesos 2, 3, 4, 1

    cin >> n1 >> n2 >> n3 >> n4;

    float nota = calcula_nota(n1, 2);
    float nota2 = calcula_nota(n2, 3);
    float nota3 = calcula_nota(n3, 4);
    float nota4 = calcula_nota(n4, 1);

    float media = nota + nota2 + nota3 + nota4;

    auto print_truncated = [](float value) {
        float truncated = floor(value * 10) / 10.0;
        cout << fixed << setprecision(1) << truncated;
    };

    cout << "Media: "; print_truncated(media); cout << endl;

    if(media >= 7.0){
        cout << "Aluno aprovado." << endl;
    } else if (media < 5.0){
        cout << "Aluno reprovado." << endl;
    } else {
        float nota_exame;
        cout << "Aluno em exame." << endl;

        cin >> nota_exame;

        cout << "Nota do exame: "; print_truncated(nota_exame); cout << endl;

        float nova_media = (media + nota_exame) / 2;

        if(nova_media > 5.0){
            cout << "Aluno aprovado." << endl;
        } else {
            cout << "Aluno reprovado." << endl;
        }

        cout << "Media final: "; print_truncated(nova_media); cout << endl;
    }

    return 0;
}