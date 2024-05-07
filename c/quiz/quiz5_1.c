//Scrivere un programma C che chiede all’utente una sequenza di lunghezza indefinita di numeri strettamente positivi
//terminata da un valore non strettamente positivo.
//Il programma conta per ciascun valore della sequenza tutti i divisori propri (cioè diversi dal valore stesso)
//e stampa a video la somma totale.
//Ad esempio per la sequenza  1 5 4 3 2 8 9 -1 stamperà 10.
//Infatti 1 ha 0 divisori propri, 5 ne ha 1, 4 ne ha 2, 3 ne ha 1 ....

#include<stdio.h>

int main(){
    int n;
    int i, count=0;

        do{
            scanf("%d", &n);

            for(i=1; i<n; i++){
                if(n%i==0){
                    count++;
                }
            }

        }while(n > 0);

    printf("%d", count);

    return 0;
}