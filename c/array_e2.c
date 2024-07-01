/*
Realizzare il sottoprogramma somme_prefisse che accetta come parametro un array di interi a[] di lunghezza N (e qualsiasi altro parametro ritenuto necessario);
 si garantisce che si avrà sempre N >= 1.

La funzione deve restituire un NUOVO array b[], sempre di lunghezza N, contenente le "somme prefisse" di a[].

Specificamente, per ogni j (j=0,…,N-1) i valori di b[j] si ottengono dalla somma degli elementi a[0] +…+ a[j].

Ad esempio, se a[] = {1,2,1,2,1}, si otterrà b[] = {1,3,4,6,7}.

Si scrivano inoltre il prototipo del sottoprogramma, la chiamata nel main, e la dichiarazione di tutte le variabili ritenute utili.
(Bonus di 1 punto per la definizione ricorsiva)
*/

#include <stdio.h>
#define N 5

int* somme_prefisse (int*, int, int*);
void somme_prefisse_rico (int*, int, int*, int);

void recursivePrefixSum(int arr[], int n, int index, int prefixArr[]) {
    if (index == 0) {
        // Caso base: la prima somma prefissa è uguale al primo elemento dell'array originale
        prefixArr[0] = arr[0];
    } else {
        // Calcola la somma prefissa per l'indice corrente
        recursivePrefixSum(arr, n, index - 1, prefixArr);
        prefixArr[index] = prefixArr[index - 1] + arr[index];
    }
}

int main () {
    int a[N] = {1,2,1,2,1};
    int b[N] = {0,0,0,0,0};
    int i = 0;
    int d[N] = {0,0,0,0,0};
/*
    for (i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }
*/
    int* c = somme_prefisse(a, N, b);

    printf("array b generato della funzione iterativa: ");
    for (i = 0; i < N; i++) {
        printf("%d ", b[i]);
    }


    i = N - 1;
    recursivePrefixSum(b, N, N - 1, a);
//    somme_prefisse_rico(a, N, b, i);

    printf("\narray d generato della funzione ricorsiava: ");
    for (i = 0; i < N; i++) {
        printf("%d ", b[i]);
    }

    return 0;
}

int* somme_prefisse (int a[], int dim, int b[]) {
    for (int i = 0; i < dim; i++) {
        for (int j = 0; j <= i; j++) {
            b[i] += a[j];
        }
    }

    return b;
}

void somme_prefisse_rico (int a[], int dim, int d[], int i) {
    if (i == 0) {
        a[0] = d[0];
    } else {
        somme_prefisse_rico(a, dim, d, i-1);
        d[i] = d[i - 1] + a[i];
    }
}
