/* La serie “buffa” di interi è così definita: 
gli elementi di posizione 1, 2 e 3 valgono tutti e tre 1, 
e in generale l'elemento di posizione i (con i >= 4) è uguale alla somma degli elementi di posizione i - 1 e i - 3. 

A partire da questa definizione si ricava ad esempio che i numeri della serie buffa di posizione da 1 a 9 sono 1, 1, 1, 2, 3, 4, 6, 9, 13.

Scrivere la versione ricorsiva della funzione che calcola l’elemento di posizione z della serie buffa. */

#include <stdio.h>

int calcola(int i){
    if(i < 4){
        return 1;
    }
    return (calcola(i - 1) + calcola(i - 3));
}

int main(){
    int z;
    int risultato;

    do{
        printf("inserisci un indice z: ");
        scanf("%d", &z);
    }while(z <= 0);

    risultato = calcola(z);

    printf("%d\n", risultato);

    return 0;
}