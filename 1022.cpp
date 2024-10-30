#include <iostream>

using namespace std;

int achaDivisorComum(int result1, int result2){
    int maior, divisorComum;
    if(result1 > result2) maior = result1;
    else maior = result2;

    for(int i=1; i<maior; i++){
        if(result1 % i == 0 && result2 % i == 0) divisorComum = i;
    }

    if(result1 == result2) divisorComum = result1;

    return divisorComum ? divisorComum : 0;
}

int main(){
    int num_testes;
    int N1, N2, D1, D2;
    string operacao, barra;
    int resultado1 = 0;
    int resultado2 = 0;
    int resultadoSimplificado1 = 0;
    int resultadoSimplificado2 = 0;

    cin >> num_testes;

    while(num_testes > 0){
        cin >> N1 >> barra >> D1 >> operacao >> N2 >> barra >> D2;
        
        if(operacao == "+"){
            resultado1 = (N1 * D2 + N2 * D1);
            resultado2 = (D1 * D2);
        }
        if(operacao == "-"){
            resultado1 = (N1 * D2 - N2 * D1);
            resultado2 = (D1 * D2);
        }
        if(operacao == "*"){
            resultado1 = (N1 * N2);
            resultado2 = (D1 * D2);
        }
        if(operacao == "/"){
            resultado1 = (N1 * D2);
            resultado2 = (N2 * D1);
        }

        int guardaValor = achaDivisorComum(resultado1, resultado2);

        if(guardaValor > 0){
            resultadoSimplificado1 = resultado1 / guardaValor;
            resultadoSimplificado2 = resultado2 / guardaValor;
        } else {
            resultadoSimplificado1 = resultado1;
            resultadoSimplificado2 = resultado2;
        }

        cout << resultado1 << "/" << resultado2 << " = " << resultadoSimplificado1 << "/" << resultadoSimplificado2 << endl;

        num_testes--;
    }

    return 0;
}