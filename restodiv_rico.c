/*
Scrivere una funzione ricorsiva che calcola il resto della divisione tra due interi positivi
(avendo a disposizione solo somme e sottrazioni).
*/

#include <stdio.h>

int leggi() {
    int n;
    do{
        scanf("%d", &n);
    }while(n < 0);
    return n;
}

int div(int x, int y) {
    if(x < y){
        return x;
    } else {
        return div((x-y), y);
    }
}

int main() {
    int x, y;
    int resto;

    x = leggi();
    y = leggi();

    resto = div(x, y);

    printf("%d", resto);

    return 0;
}