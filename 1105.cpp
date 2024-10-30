#include <iostream>
#include <vector>

using namespace std;

int main(){
    while(true){
        int qtd_bancos = 0;
        int qtd_debenture = 0;
        bool ficou_devendo = false;
        int banco_devedor = 0;
        int banco_credor = 0;
        int divida = 0;
        vector<int> reservas_bancos;

        cin >> qtd_bancos >> qtd_debenture;
        if(qtd_bancos == 0 && qtd_debenture == 0) break;

        for(int i=0; i<qtd_bancos; i++){
            int reservas;
            cin>>reservas;
            reservas_bancos.push_back(reservas);
        }

        for(int i=0; i<qtd_debenture; i++){
            cin >> banco_devedor >> banco_credor >> divida;

            reservas_bancos[banco_devedor - 1] -= divida;
            reservas_bancos[banco_credor - 1] += divida;
        }

        for(int e : reservas_bancos){
            if(e < 0){
                ficou_devendo = true;
            }
        }

        if(ficou_devendo) cout << "N" << endl;
        else cout << "S" << endl;
    } 
    
    return 0;
}