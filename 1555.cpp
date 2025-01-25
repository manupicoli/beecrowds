#include <iostream>

using namespace std;

int rafaelFunction(int x, int y){
    return ((3 * x) * (3 * x)) + (y * y);
}

int betoFunction(int x, int y){
    return (2 * (x * x)) + ((5 * y) * (5 * y));
}

int carlosFunction(int x, int y){
    return (y * y * y) - (100 * x);
}

int main(){
    int qtd;
    int x, y;

    cin >> qtd;

    for(int i=0; i<qtd; i++){
        cin >> x >> y;

        int r = rafaelFunction(x, y);
        int b = betoFunction(x, y);
        int c = carlosFunction(x, y);

        if(r > b && r > c) cout << "Rafael ganhou" << endl;
        if(b > r && b > c) cout << "Beto ganhou" << endl;
        if(c > r && c > b) cout << "Carlos ganhou" << endl;
    }

    return 0;
}