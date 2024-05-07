/* Si completi il file scrivendo la funzione

colonna che data una matrice rettangolare 7x6 composta di soli numeri 0 e 1 
restituisce l’indice della prima colonna con la più lunga sequenza di valori 1 consecutivi,
−1 se nella matrice non sono presenti valori 1.
For example:

Input	        Result
                1
0 1 0 0 0 0     
0 0 1 0 0 0
0 1 1 0 0 0
0 1 1 0 0 0
1 1 1 0 0 0
1 1 0 0 0 0
1 0 0 0 0 0                  */

#include <stdlib.h>
#include <stdio.h>

#define RIGHE 7
#define COL 6

//prototipi
int conta(int mat[RIGHE][COL]);

int main(void) {
    int i, j, M[RIGHE][COL];
    int c;
        for(i=0; i<RIGHE; i++){
            for(j=0; j<COL; j++){
                scanf("%d",&M[i][j]);
            }
        }
        c=conta(M);
    printf("%d", c);
    
    return(0);
  
}

/* la funzione restituisce l'indice della prima colonna con il maggior numero di 1 consecutivi, -1 se non esiste */

int conta(int mat[RIGHE][COL]){
    int i, j;
    int count = 0;
    int max = 0;
    int indice;
    
    for(j=0; j<COL; j++){
        for(i=0; i<RIGHE; i++){
            if(mat[i][j] == 1){
                count++;
            }
        }
        if(count >= max){
            indice = j;
            max = count;
        }
        count = 0;
    }

    if(max == 0){
        indice = -1;
    }
    return indice;
}