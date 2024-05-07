/* Si scriva un programma C che definisce le funzioni:

- leggi(), che legge da tastiera un numero intero non negativo e lo restituisce. 
  Se fosse negativo, deve continuare a chiederlo all'utente;

- stampa(int numero), che stampa le cifre del numero indicato, in italiano. 
  Per esempio, se numero e 4301 allora deve stampare quattro tre zero uno; se numero e 0 allora deve stampare zero. */

#include <stdio.h>

int leggi(void){
    int n;

    do{
        scanf("%d", &n);
    }while(n < 0);

    return n;
}

int stampa(int n){
    int cifra;
    int n_girato = 0;
    int pow = 10;
        

    if(n == 0){
        printf("zero\n");
        return 0;
    }


    int m = n;  //variabile uguale a n che poi si va a modificare per sapre il numero di cifre del numero
    int n_cifre = 0;    //variabile per contare il numero di cifre

    do{     //il numero non può esser uguale a zero
        m /= 10;    //tolgo una cifra dal numero
        n_cifre++;  //incremento il count del numero delle cifre di uno
    }while (m > 0); //continuo finché m non arriva a 0

    for(int i = 0; n != 0; i++){
        int potenza = 1;    //risetto la potenza a 1 ogni volta che rientro nel for
        cifra = n % 10;     //prendo l'ultima cifra del numero
        n /= 10;    //tolgo l'ultima cifra del numero
        n_cifre--;      //decremento il numero di cifre di 1, inizialmente perché sennò fa un giro in più, poi per scrivere le altre cifre

        for(int j = 0; j < n_cifre; j++){
            potenza *= pow;     //calcola la potenza ((((1 * 10) * 10) * 10) ... )
        }
        n_girato += (cifra * potenza);
    }

    while(n_girato != 0){
        cifra = n_girato % 10;
        n_girato /= 10;

        switch (cifra){
            case 0:
                printf("zero ");
                break;
            case 1:
                printf("uno ");
                break;
            case 2:
                printf("due ");
                break;    
            case 3:
                printf("tre ");
                break;
            case 4:
                printf("quattro ");
                break;
            case 5:
                printf("cinque ");
                break;
            case 6:
                printf("sei ");
                break;    
            case 7:
                printf("sette ");
                break;  
            case 8:
                printf("otto ");
                break;
            case 9:
                printf("nove ");
                break;          
            default:
                break;
        }
    }
    printf("\n");

    return 0;
}

int main(){
  int n;

  n = leggi();

  stampa(n);
  
return 0;
}