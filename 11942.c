#include<stdio.h>
#include<string.h>

int main(){
    int N;
    int a[10];
    scanf("%d", &N);
    printf("Lumberjacks:\n");
    while(N--){
        for(int i = 0; i < 10; i++){
            scanf("%d", &a[i]);
        }
        int org = 1, desor = 1;
        for(int i = 1; i < 10; i++){
            if(a[i] < a[i - 1]){
                org = 0;
            }
            if(a[i] > a[i - 1]){
                desor = 0;
            }   
        }
        if(org || desor){
            printf("Ordered\n");
        }
        else{
            printf("Unordered\n");
        }
    }
    return 0;
}