#include<stdio.h>
#include<string.h>

int main(){
    char nombre[10];
    int cases = 1;
    int n = 1;
    while(strcmp(nombre, "*") != 0){
        scanf("%s", nombre);

        if(strcmp(nombre, "Hajj") == 0){
            printf("Case %d: %s\n",n, "Hajj-e-Akbar");
        }
        else if (strcmp(nombre, "Umrah") == 0){
            printf("Case %d: %s\n",n, "Hajj-e-Asghar");
        }
        n+=1;
    }
    return 0;
}
