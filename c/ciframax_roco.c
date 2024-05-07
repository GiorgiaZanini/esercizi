/*
Si scriva un programma C che definisce la funzione ricorsiva int cifra_massima(int num)
la quale deve restituire la cifra massima nella rappresentazione decimale di num.
Tale programma dovrà inoltre definire un main che
 (1) chiede all’utente di inserire un numero non negativo,
 (2) chiama la funzione cifra massima per calcolarne la cifra massima e
 (3) stampa tale cifra massima trovata.
*/

#include <stdio.h>

int ciframax(int num) {
    if (num < 10){
        return num;
    } else {
        int a = num%10;
        int b = ciframax(num/10);
        if(a > b)
            return a;
        else
            return b;
    }
}

int main() {
    int num;

    do{
        scanf("%d", &num);
    }while(num < 0);

    num = ciframax(num);

    printf("%d", num);

return 0;
}