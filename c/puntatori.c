/*Scrivere sottoprogramma con il seguente prototipo:
int conta(int a[], int dim, int *primi)
che preso come parametro un array di interi e la sua dimensione (al massimo di 10 interi),
conta quanti numeri dispari e quanti numeri primi sono presenti nell’array e restituisce entrambi i valori al chiamante.
Il main chiede in ingresso all’utente un array di massimo 10 interi (-1 per terminare),
richiamando il sottoprogramma conta stampa i due valori numerici ottenuti.
*/


#include <stdio.h>
#define D 10
int conta (int a[], int dim, int *primi);

int main () {
    int a[D];
    int n_primi = 0;

    for(int i = 0, flag = 1; i < D && flag == 1; i++) {
//        printf("Sei alla %d posizione\n", i+1);
        scanf("%d", &a[i]);

        if (a[i] == -1) {
            flag = 0;
             for (int j = i; j < D; j++) {
                 a[j] = 0;
             }
        }
    }

    int n_dispari = conta(a, D, &n_primi);

    printf("%d è il numero di primi in questo array\n%d è il numero di dispari in questo array", n_primi, n_dispari);
}

int conta (int a[], int dim, int *primi) {
    int count_dispari = 0;
    int flag_primi = 1;
    int flag_dispari = 0;
    int count_primi = 0;

    for (int i = 0; i < dim; i++) {
        for (int j = 1; j < a[i]; j++) {
            if (a[i] % 2 != 0) {
                flag_dispari = 1;
            }
            if (a[i] % j == 0 && a[i] != 1) {
                flag_primi = 0;
            }
        }

        if (flag_dispari == 1) {
            count_dispari++;
            flag_dispari = 0;
        }
        if (flag_primi == 1) {
            (*primi)++;
            count_primi++;
        }
        flag_primi = 0;
    }

    return count_dispari;
}