/*
Scrivere un programma C che apre un file di testo “testo.txt”
 contenente parole ciascuna di al massimo 15 caratteri (si considerino soltanto i caratteri minuscoli).

 Il programma trova tutte le parole con almeno tre vocali e le stampa al rovescio.
 Ad esempio, se il file “testo.txt” contiene il testo:

bisogna studiare

Il programma visualizzerà il testo:

angosib eraiduts


(Input)	                                                            Expected
bisogna studiare passo e adagio per ottenere un voto alto           angosib eraiduts oigada erenetto

*/

#include<stdio.h>
#include<string.h>
#define FNAME "../file/testo.txt"
#define MAXS 15
#define SOGLIA 3

int main(){
    int ok, i;
    FILE *fp;
    char p[MAXS+1];

    fp=fopen(FNAME,"r");


}