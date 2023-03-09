#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    int n;
    string rule;
    int i;
    cin>>T;
    while(T--){
        cin>>n;
        int tPasos = 0;
        int arr[110];
        int current = 0;
        while(n--){
            string entrada;
            cin>>entrada;
            if(entrada == "LEFT"){
                tPasos --;
                arr[current] = -1;
            }
            else if(entrada == "RIGHT"){
                tPasos ++;
                arr[current] = 1;
            }
            else{
                cin>>entrada>>i;
                tPasos += arr[i-1];
                arr[current] = arr[i-1];
            }
            current ++;
        }
        cout<<tPasos<<endl;
    }
    
    return 0;
}