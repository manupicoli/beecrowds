#include <iostream>

using namespace std;

int main(){

    int a, c, x, y;

    cin >> a >> c >> x >> y;

    int totalComputadores = c - 1 - x - y;

    if(totalComputadores >= a){
        cout << "Igor feliz!" << endl;
    } else if (x > (y / 2)){
        cout << "Caio, a culpa eh sua!" << endl;
    } else {
        cout << "Igor bolado!" << endl;
    }

    return 0;
}