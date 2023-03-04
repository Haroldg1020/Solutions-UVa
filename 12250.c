#include<stdio.h>
#include<string.h>


int main(){
    char arr[14];
    int n = 1;
    while(strcmp(arr, "#") != 0){
        scanf("%s", arr);
        if(strcmp(arr, "HELLO") == 0){
            printf("Case %d: %s\n",n, "ENGLISH");
            }
        else if(strcmp(arr, "HOLA") == 0){
            printf("Case %d: %s\n",n, "SPANISH");
        }
        else if(strcmp(arr, "HALLO") == 0){
            printf("Case %d: %s\n",n, "GERMAN");
        }
        else if(strcmp(arr, "BONJOUR") == 0){
            printf("Case %d: %s\n",n, "FRENCH");
        }
        else if(strcmp(arr, "CIAO") == 0){
            printf("Case %d: %s\n",n, "ITALIAN");
        }
        else if(strcmp(arr, "ZDRAVSTVUJTE") == 0){
            printf("Case %d: %s\n",n, "RUSSIAN");
        }
        else if (strcmp(arr, "#") != 0){
            printf("Case %d: %s\n",n, "UNKNOWN");
        }
        n++;
    }
    return 0;
}