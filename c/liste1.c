/*
Si vuole gestire una classe di studenti tramite un array di dimensione variabile;
le informazioni degli studenti hanno la seguente definizione di tipo struct

Scrivere una funzione C che prende come parametro il numero di studenti da inserire e che restituisce l’indirizzo dell’array dinamico.
I nomi e le età vengono lette da tastiera.
Gestire eventuali errori nella fase di allocazione di memoria, restituendo NULL in caso di errori,
l’indirizzo del vettore in caso di successo.
 */

#include <stdio.h>
#include <stdlib.h>
typedef struct {
    char nome[21];
    int eta;
} t_stud;

t_stud* c(int studenti) {

    t_stud *p = (t_stud*) malloc(studenti * sizeof(t_stud));

    if (p == NULL) {
        return NULL;
    } else {

        for (int i = 0; i < studenti; i++) {
            printf("\ninserisci il nome dello studente %d: ", i+1);
            scanf(" %20s", p[i].nome);
            printf("\ninserisci l'età dello studente %d: ", i+1);
            scanf(" %d", &p[i].eta);
        }

        for (int i = 0; i < studenti; i++) {
            printf("\nstudente %d", i+1);
            printf("\n%s ", p[i].nome);
            printf("\n%d\n", p[i].eta);
        }

        return p;
    }
}

int main () {
    int studenti = 0;

    do {
        scanf("%d", &studenti);
    } while (studenti <= 0);

/*
    t_stud array[studenti];

    for (int i = 0; i < studenti; i++) {
        printf("\ninserisci il nome dello studente %d: ", i+1);
        scanf(" %20s", array[i].nome);
        printf("\ninserisci l'età dello studente %d: ", i+1);
        scanf(" %d", &array[i].eta);
    }

    for (int i = 0; i < studenti; i++) {
        printf("studente %d\n", i+1);
        printf("\n%s ", array[i].nome);
        printf("\n%d\n", array[i].eta);
    }
*/

    t_stud *p;
    p = c(studenti);

    printf("%p", p);

}

