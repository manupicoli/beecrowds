#include <iostream>
#include <stack>

using namespace std;

int main(){
    string entrada;
    
    while(cin >> entrada){
        stack<char> parenteses;
        bool temParentese = false;


        for(int i=0; i<entrada.size(); i++){
            if(entrada[i] == '('){
                temParentese = true;
                parenteses.push(entrada[i]);    
            }
            else if (entrada[i] == ')'){
                temParentese = true;
                if(parenteses.empty()){
                    parenteses.push('x');
                    break;
                }
                parenteses.pop();
            } 
        }

        if(!temParentese || !parenteses.empty()){
            cout << "incorrect" << endl;
        } else {
            cout << "correct" << endl;
        }
    }
}