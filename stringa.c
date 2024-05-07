/*Scrivere un programma C (non scomposto in funzioni) che acquisisce una stringa s1 di massimo 50 caratteri e un numero intero n. 
Il programma controlla se n è maggiore di zero e minore della lunghezza della stringa e, se le condizioni non sono verificate continua a richiedere il valore; 
poi il programma crea una nuova stringa s2 che contiene la rotazione (spostamento) verso destra di s1 di n posizioni e la visualizza. 
Esempio: s1="studente" e n=2 -> s2="udentest".*/

#include <stdio.h>
#define D 50

int main(){
    char s1[D+1];   //stringa interpretata come puntatore dell'array
    int n;
    int dim = 0;

    char s2[D+1];
    int tmp;


    printf("inserisci una stringa: ");
    scanf("%s", s1);

    //printf("%s\n", s1);

    for(int i = 0; s1[i] != '\0'; i++){
        dim++;
    }

    //printf("dim is %d\n", dim);

    do{
        printf("inserisci un intero: ");
        scanf("%d", &n);
    }while(n <= 0 || n > dim);

    //printf("%d %s", n, s1);

    for(int i = 0; i <= D; i++){
        if((i + n) <= D){
            s2[i] = s1[i + n];
        }
        if else()
    }

/*    for(int i = 0; i < D; i++){
        tmp = s2[i];
        s2[i] = s2[i + n];
        s2[i + n] = tmp;
    } */

    printf("%s\n", s2);

return 0;
}