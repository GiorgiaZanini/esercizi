/*Scrivere un programma in linguaggio C che legga da tastiera una sequenza di numeri positivi 
e ad ogni numero letto ne stampi la somma progressiva. 
Il programma termina quando si introduce un numero minore o uguale a zero. */

#include <stdio.h>
int main(){
    int n, count=0;

    do{
        scanf("%d", &n);
        count += n;
        printf("%d\n", count);
    }while(n>0);

    return 0;
}