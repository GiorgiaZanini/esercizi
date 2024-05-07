/* Scrivere un programma che legge un array di 10 interi sicuramente positivi.

Il programma stampa, per ogni elemento dell'array il valore, 1 se è flag_primo 0 se non è flag_primo, il numero dei suoi divisori (utilizzare printf("%d %d %d\n" ....).

Per verificare se un intero è flag_primo o no e calcolare quanti sono i suoi divisori utilizzare la funzione con il prototipo:

int verifica(int, int *);

che preso un intero come parametro, restituisce 1 se è flag_primo, 0 se non è flag_primo e inserisce in un parametro passato per indirizzo il numero dei divisori


Input	                    Result

4 6 9 2 7 5 3 20 10 5       4 0 3
                            6 0 4
                            9 0 3
                            2 1 2
                            7 1 2
                            5 1 2
                            3 1 2
                            20 0 6
                            10 0 4
                            5 1 2                            */

#include<stdio.h>
#define DIM 10

int verifica(int, int *);

int main(){
    int a[DIM];
    int flag_primo;
    int count_div = 2;

    for(int i = 0; i < DIM; i++){
        scanf("%d", &a[i]);
    }
    
    for(int i = 0; i < DIM; i++){
        flag_primo = verifica(a[i], &count_div);
        printf("%d %d %d\n", a[i], flag_primo, count_div);
        count_div = 2;
    }

    return 0;
}

int verifica(int n, int *count_div){

    for(int i = 2; i <= n/2; i++){
        if(n % i == 0){
            *count_div += 1;
        }
    }
    
    if(*count_div > 2){
        return 0;
    }else{
        return 1;
    }
}