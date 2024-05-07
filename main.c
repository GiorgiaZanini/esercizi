#include <stdio.h>

/*
Scrivere un programma scomposto in funzioni che:
 - Definisce globalmente una matrice 4*4 di interi
 - Riempie la matrice con valori tra 0 e 10 (estremi compresi) rifiutando valori non validi
 - Stampa la matrice
 - Restituisce al main l’indice di riga e di colonna
    che hanno somma degli elementi massima (se esistono più righe e/o colonne con somma massima restituire  la prima incontrata)
*/

int matrix[4][4];

void acquisizione() {
    //printf("Inizio acquisizione\n");
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++){
            do{
                //printf("Pre scan\n");
                scanf("%d", &matrix[i][j]);
                //printf("Scan: %d\n", matrix[i][j]);
            }while(matrix[i][j] < 0 || matrix[i][j] > 10);
        }
    }
    //printf("Fine acquisizione\n");
}

void stampa() {
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int colonne() {
    int indice;
    int i, j;
    int max = 0;
    int count = 0;

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            count +=  matrix[i][j];
        }
        if(count > max) {
            indice = i;
            max = count; //questo codice è carino <3
        }
        count = 0;
    }

    return indice;
}

int righe() {
    int indice;
    int i, j;
    int max = 0;
    int count = 0;

    for(j = 0; j < 4; j++) {
        for(i = 0; i < 4; i++) {
            count +=  matrix[i][j];
        }
        if(count > max) {
            indice = j;
            max = count;
        }
        count = 0;
    }

    return indice;
}

int main() {
int i, j;

    acquisizione();
    stampa();
    i = colonne();
    j = righe();

    printf("%d %d", i, j);

    return 0;
}
