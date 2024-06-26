/*
Completare il file scrivendo i seguenti sottoprogrammi:

- la funzione crea() che
 presi in input due array di interi a1 e a2 di dimensione 10,
 crei l’array a2 contenente, per ogni numero in a1, la somma delle sue cifre, senza salvare le ripetizioni e
 restituisca il numero di elementi effettivamente inseriti in a2.

 Si noti che l’ordine con cui i valori sono salvati in a2 è irrilevante.
 Per esempio se a1 fosse l’array: 12 24 200 42 5 68 3 111 100 30
 il programma inizializzerà l’array a2 con i valori: 3 (ottenuto come 1+2) 6 (ottenuto come 2+4) 2 5 14 1
 e restituirà al chiamante 6 (sono stati inseriti 6 valori in a2).
 Per determinare la somma delle cifre di ogni numero in a1 si usi la funzione ricorsiva somma().


- la funzione ricorsiva somma()
 che preso un intero sicuramente non negativo, restituisca la somma delle sue cifre.


For example:

Input	                                Result
12 24 200 42 5 68 3 111 100 30          6


*/

#include<stdio.h>
#define DIM 10

/* prototipi */
int crea(int *,int *);
int somma(int);

int main() {
    int ar1[DIM], ar2[DIM], i,r;
    for(i=0; i<DIM; i++){
        scanf("%d",&ar1[i]);
    }
    r=crea(ar1,ar2);
    printf("%d",r);

    return (0);
}


int crea (int a1[], int a2[]) {
    int n, k = 0, skip = 0;
    for (int i = 0; i < DIM; i++) {
        n = somma(a1[i]);
        for (int j = 0; j < k; j++) {
            if (a2[j] == n) {
                skip = 1;
                break;
            }
        }

        if (skip == 0) {
            a2[k] = n;
            k++;
        }

        skip = 0;
    }

/*    for (int i = 0; i < DIM; i++)
        printf("%d ", a2[i]);

    printf("\n");*/

    return k;
}

int somma (int n) {
    if (n < 10) {
        return n;
    }
    return (n%10 + somma(n/10));
}