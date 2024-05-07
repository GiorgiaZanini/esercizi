/* Scrivere una funzione ricorsiva 
che dato un array di interi, la sua dimensione effettiva e qualsiasi altro parametro ritenuto utile, 
calcola la somma degli elementi dell’array */

#include <stdio.h>

int sum(int a[], int dim, int i){
//    printf("\t%d\n", i);
    if(i == -1){
//        printf("\til numero nella posozione %d è: %d", i, a[i]);
        return 0;
    }else{
//        printf("\til numero nella posozione %d è: %d", i, a[i]);
        return (a[i] + sum(a, dim, i - 1));
    }    
}

int main(){
    int dim = 5, i; 
    int a[dim];
    int somma;

//acquisizione
    do{
        printf("inserisci la dimensione dell'array: ");
        scanf("%d", &dim);
    }while(dim < 1);

    printf("inserisci un array di dimesione %d: ", dim);
    for(i = 0; i < dim; i++){
        scanf("%d", &a[i]);
    }

//print
/*
    for(i = 0; i < dim; i++){
        printf("%d", a[i]);
    }
    printf("\n");

    printf("%d\n\n", i);
*/
//fine print    

    somma = sum(a, dim, i - 1);

    printf("la somma è: %d\n", somma);

    return 0;
}