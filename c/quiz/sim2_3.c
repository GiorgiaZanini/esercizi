/*Scrivere un programma che acquisisce un array di 10 numeri interi e un intero n senz’altro positivo e strettamente <10. 

Il programma modifica l’array facendo scorrere ogni intero di n posizioni a destra (gli ultimi n interi vengono riportati all’inizio) 
e stampa l'array a video (usare "%d ").

1 2 3 4 5 6 7 8 9 10        9 10 1 2 3 4 5 6 7 8 
2                                                       */


#include <stdio.h>
#define N 10

int main(){
    int src[N], src1[N];
    int i, n;

//acquisizione

    for(i=0; i<N; i++)
            scanf("%d",&src[i]);
    
    do{
        scanf("%d",&n);	
    }while(n<=0 || n>N);
    
//modifica array

    for (i=0; i<N; i++){
        if(i+n<N){
            src1[i+n]=src[i];
        }else{
            src1[i+n-N]=src[i];
        }
    }

//stampa a video

    for (i=0; i<N; i++){
        printf("%d ", src1[i]);
    }
    
    return 0;
}