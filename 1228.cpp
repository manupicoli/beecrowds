#include <iostream>
#include <vector>

using namespace std;

int findPosition(int initialPosition, vector<int> &finalPositions){
    for(int f=0; f<finalPositions.size(); f++){
        if(finalPositions[f] == initialPosition) return f;
    }

    return 0;
}
//TODO refazer
int main() {
    int num, comp, ult;
    vector<int> grid;
    vector<int> chegada;

    while(cin >> num){
        for(int i=0; i<num; i++){
            cin >> comp;
            grid.push_back(comp);
        }

        for(int j=0; j<num; j++){
            cin >> comp;
            chegada.push_back(comp);
        }

        for(int i=0; i<chegada.size(); i++){
            if(chegada.at(i) != grid.at(i)) {
                int newIndex = findPosition(grid.at(i), chegada);
                int previousIndex = findPosition(chegada.at(i), grid);

                //quando o newIndex é maior que o previousIndex, signifca que ele foi ultrapassado
                //quando o previousIndex é maior, significa que ele ultrapassou

                if(newIndex > previousIndex){
                    //3 1 2 5 4
                    //1 2 3 4 5     

                    int competidorAux = grid.at(i);

                    //inserindo o valor no novo indice
                    for(int s=i; s < newIndex; s++) {
                        grid.at(s) = grid.at(s+1);
                        ult++;
                    }

                    grid.at(newIndex) = competidorAux;

                } else {
                    //1 2 3 4 5
                    //3 1 2 5 4

                    int competidorAux = chegada.at(i);

                    for(int s=previousIndex; s>i; s--){
                        grid.at(s) = grid.at(s-1);
                        ult++;
                    }

                    grid.at(previousIndex) = competidorAux;
                }
            }
        }

        cout << ult  << endl;

        grid.clear();
        chegada.clear();
        ult = 0;
    }

    return 0;
}