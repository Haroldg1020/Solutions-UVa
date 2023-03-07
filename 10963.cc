#include <bits/stdc++.h>

using namespace std;



int main(){

    int t, n, s, col;
    cin>>t;
    while(t--){
        cin>>col;
        int tamAnterior = -10;
        bool posible = true;
        for(int i = 0 ; i < col ; i ++){
            cin>>n>>s;
            int tamano = n-s+1;
            if(tamAnterior != -10){
                if(tamAnterior != tamano){
                    posible = false;
                }
            }
            tamAnterior = tamano;
        }

        if(posible){
            cout << "yes";
        } 
        else{ 
            cout << "no";
        }
        if(t > 0){
            cout << "\n\n";
        }
        else{
            cout << "\n";
        }
    }

}