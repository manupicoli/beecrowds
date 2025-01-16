#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    double p = (x2 - x1) * (x2 - x1);
    double s = (y2 - y1) * (y2 - y1);

    double raiz = sqrt(p + s);

    cout << fixed << setprecision(4);
    cout << raiz << endl;

    return 0;
}