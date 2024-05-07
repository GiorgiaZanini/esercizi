/*Scrivere un sottoprogramma che calcola la radice quadrata intera di un numero intero positivo. 

Il sottoprogramma riceve come parametro il numero intero ed un'altra variabile, 
passata per indirizzo, in cui memorizzare la radice intera. 

Il sottoprogramma restituisce 1 se la radice intera è precisa (il numero è un quadrato perfetto), in alternativa 0. 

Scrivere un programma che utilizza tale sottoprogramma per calcolare la radice quadrata intera 
di un numero chiesto all'utente, e ne visualizza il risultato.

NB: non usare la funzione sqrt!*/

#include <stdio.h>

int radice(int, int*);

int main(){
    int n;
    int root;
    int flag;

    scanf("%d", &n);

    flag=radice(n, &root);

    if(flag==1){
        printf("è un quadrato perfetto");
    }else{
        printf("non è un quadrato perfetto");
    }
    printf(" e la sua radice intera è: %d", root);

return 0;    
}

int radice(int n, int *root){

    for (int i = 0; i <= n; i++) {
        if (i * i == n) {
            *root = i;
            return 1;
        }
        else if ((i + 1) * (i + 1) > n) {
            *root = i;
            return 0;
        }
    }
}