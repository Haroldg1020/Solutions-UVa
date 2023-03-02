#include <stdio.h>

int op(){
    int s;
    int d;
    scanf("%d", &s);
    scanf("%d", &d);
    int suma = s / 2 + d / 2;
    if(s % 2 != 0 && d % 2 != 0){
        suma++;
    }
    int resta = s - suma;
    if(resta < 0 || ((s + d) % 2) != 0){
        printf("%s\n", "impossible");
    }
    else{
        printf("%d ", suma);
        printf("%d\n", resta);
        return 0;
    }
}

int main(){
    int n;
    scanf("%d", &n);
    while(n >= 1){
        op();
            n--;
    }

    return 0;
}
