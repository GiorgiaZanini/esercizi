/*
Definire la funzione ricorsiva int monotono(int)
che restituisce 1 se il numero passato in ingresso è monotono crescente (es. 137), 0 altrimenti.
*/

#include <stdio.h>

int monotono(int n) {
    if (n < 10) {
        return 1;
    } else {
        int a = n%10;
        int b = monotono(n/10);
        if (b<a) {
            return b;
        } else {
            return 0;
        }
    }
}

int main() {
    int n;
    int flag;

    scanf("%d", &n);
    flag = monotono(n);
    printf("%d", flag);

    return 0;
}