#include <stdio.h>

int main(){

    int arr1[3];
    int arr2[3];
    int arr3[3];
    int caneca1[3];
    int caneca2[3];
    int caneca3[3];
    int resp;
    while(scanf("%d %d %d", &arr1[0], &arr1[1], &arr1[2]) == 3){
        long long minCases = 1e11;
        scanf("%d %d %d", &arr2[0], &arr2[1], &arr2[2]);
        scanf("%d %d %d", &arr3[0], &arr3[1], &arr3[2]);
        caneca1[0] = arr2[0] + arr3[0];
        caneca1[1] = arr2[1] + arr3[1];
        caneca1[2] = arr2[2] + arr3[2];
        caneca2[0] = arr1[0] + arr3[0];
        caneca2[1] = arr1[1] + arr3[1];
        caneca2[2] = arr1[2] + arr3[2];
        caneca3[0] = arr1[0] + arr2[0];
        caneca3[1] = arr1[1] + arr2[1];
        caneca3[2] = arr1[2] + arr2[2];
        // BCG = 0
        // BGC = 1
        // CBG = 2
        // CGB = 3
        // GBC = 4
        // GCB = 5
        if (caneca1[0] + caneca2[2] + caneca3[1] < minCases){
            minCases = caneca1[0] + caneca2[2] + caneca3[1];
            resp = 0;
        }
        if (caneca1[0] + caneca2[1] + caneca3[2] < minCases){
            minCases = caneca1[0] + caneca2[1] + caneca3[2];
            resp = 1;
        }
        if (caneca1[2] + caneca2[0] + caneca3[1] < minCases){
            minCases = caneca1[2] + caneca2[0] + caneca3[1];
            resp = 2;
        }
        if (caneca1[2] + caneca2[1] + caneca3[0] < minCases){
            minCases = caneca1[2] + caneca2[1] + caneca3[0];
            resp = 3;
        }
        if (caneca1[1] + caneca2[0] + caneca3[2] < minCases){
            minCases = caneca1[1] + caneca2[0] + caneca3[2];
            resp = 4;
        }
        if (caneca1[1] + caneca2[2] + caneca3[0] < minCases){
            minCases = caneca1[1] + caneca2[2] + caneca3[0];
            resp = 5;
        }
        if (resp == 0){
            printf("BCG ");
        }
        if (resp == 1){
            printf("BGC ");
        }
        if (resp == 2){
            printf("CBG ");
        }
        if (resp == 3){
            printf("CGB ");
        }
        if (resp == 4){
            printf("GBC ");
        }
        if (resp == 5){
            printf("GCB ");
        }
        printf("%d\n", minCases);
    }
        return 0;
}