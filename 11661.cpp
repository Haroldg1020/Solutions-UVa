#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n != 0){
        string carretera;
        cin>>carretera;
        int contDistanciaD =-1, contDistanciaR =-1;
        int minimo = INT_MAX;
        for(int i = 0 ; i < carretera.size() ; i ++){
            if(carretera[i] == 'D'){
                if(contDistanciaR != -1){
                    minimo = min(minimo, i - contDistanciaR);
                }
                contDistanciaD = i;
            }else if(carretera[i] == 'R'){
                    if(contDistanciaD != -1){
                        minimo = min(minimo, i - contDistanciaD);
                    }
                    contDistanciaR = i;
            }else if(carretera[i] == 'Z'){
                minimo = 0;
            }
        }
        cout << minimo << endl;
        cin>>n;
    }



}