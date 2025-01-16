#include <iostream>
#include <cmath>

using namespace std;

int achaOMaior(int a, int b){
    int maiorAB = (a + b + abs(a-b)) / 2;

    return maiorAB;
}

int main(){
    int A, B, C;
    cin >> A >> B >> C;

    int first = achaOMaior(A, B);
    int maior = achaOMaior(first, C);

    cout << maior << " eh o maior" << endl;
    
    return 0;
}