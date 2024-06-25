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
#include<string.h>
#define FNAME "testo.txt"
#define MAXS 15
#define SOGLIA 3

int main(){
    int ok, i;
    FILE *fp;
    char p[MAXS+1];

    fp=fopen(FNAME,"r");


}