/* Scrivere un sottoprogramma che riceve due numeri interi positivi e calcola l'elevamento a potenza del primo rispetto al secondo.

Scrivere un sottoprogramma che calcola la radice ennesima intera di un numero intero positivo. 
Il sottoprogramma prende come parametri il numero, il grado della radice, e una variabile, passata per indirizzo, in cui memorizzare la radice intera. 
Il sottoprogramma restituisce 1 se la radice intera è precisa, in alternativa 0. 
Scrivere un programma che utilizza tale sottoprogramma per calcolare la radice ennesima intera di un numero e di un grado chiesti all'utente, e ne visualizza il risultato. 
E’ consigliato sfruttare la funzione potenza definita per il punto precedente.*/

#include <stdio.h>

int potenza(int, int);
int radice(int *, int *, int *);

int main(){
    int base;
    int exp;
    int pow;

    printf("inserisci base e esponente: ");
    scanf("%d %d", &base, &exp);

    pow = potenza(base, exp);

    printf("%d ^ %d = %d\n", base, exp, pow);

    int root;
    int flag;

    printf("inserisci base e indice della radice: ");
    scanf("%d %d", &base, &exp);

    flag = radice(&base, &exp, &root);

    if(flag==1){
        printf("è una radice %d-esima perfetta", exp);
    }else{
        printf("non è una radice %d-esima perfetta", exp);
    }
    printf(" e la sua radice %d-esima di %d intera è: %d\n", exp, base, root);

return 0;
}

int potenza(int base, int exp){
    
    int pow;
    pow = 1;

    if(exp == 0){
        return 1;
    }else{
        for(int i = 1; i <= exp; i++){
            pow *= base;
        }
    }

    return pow;

}

int radice(int *base, int *exp, int *root){

    int tmp = 1;

    for (int i = 1; i <= *base + 1; i++) {
        for(int j = 1; j <= *exp; j++){

            tmp *= i;
            
            if (tmp == *base) {
                *root = i;
                return 1;
            }
            else if (tmp > *base) {
                *root = i - 1;
                return 0;
            }
        }    
            
    }

}