#include <stdio.h>

int f(int, int, int *); //restituisce flag, ma per poter recuperare un altro valore dalla funzione  uso un puntatore

int main(){
    int a, b;
    int somma;
    int r;

    scanf("%d %d\n" &a, &b);
    r=f(a, b, &somma);

    printf("la somma di %d e %d è %d, flag %d", a, b, somma, r);

return 0;    
}

int f(int n, int m, int *s){
    *s = n + m; //va a modificare il valore in memoria, in modo da poi recuperarlo, 
                //perchè le sole variabili vengono modificare nella sola funzione 
                //  (nel main rimangono come sono)

    if((*s)%2 == 0)
        return 1;
    else return 0;
}