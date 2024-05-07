#include <stdio.h>

//void swap(int n, int m);
void swap(int *, int *); //combio parametri a puntatori ad intero, per poterli scambiare senza restituire niente

int main(){
    int a=5;
    int b=7;

//    swap(a,b); //il main ha bisogno di 2 nuovi valori
    swap(&a, &b); //puntatore ad intero

    printf("%d %d\n", a, b);

return 0;
}

// void swap(int n, int m){ //non cambia niente
//     int tmp;
//     tmp=n;
//     n=m;
//     m=tmp;
// }

void swap(int *n, int *m){ //non cambia niente
    int tmp;
    tmp=*n;
    *n=*m;
    *m=tmp;
}