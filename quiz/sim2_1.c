/*Scrivere un programma C non scomposto in funzioni in grado di:

leggere da tastiera una matrice m1 quadrata NxN di interi per righe.

Creare una matrice quadrata m2 di interi di dimensione NxN dove ciascun elemento m2[i][j] 
è il numero degli elementi validi e diversi da zero intorno a/sul bordo di quello m1[i][j], elemento m1[i][j] incluso. 
Nel calcolo del numero di valori diversi da zero vanno considerati solo gli elementi validi, ovvero quelli presenti in coordinate valide.

Stampare la matrice m2 ottenuta stampando ogni intero in uno spazio di 3 caratteri (printf(”%3d”,...)).


0 4 3       3  5  4
6 1 3       4  7  5
-1 0 1      3  5  3     */
  
#include<stdio.h>
#define N 3
int main(){
    int i, j, h, k;
    int m1[N][N];
    int m2[N][N];
    int count;

    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            scanf("%d", &m1[i][j]);
        }
    }

    for(i=0; i<N; i++){
        for(j=0; j<N; j++){

             for(h=i-1; h<=i+1; h++){
                for(k=j-1; k<=j+1; k++){
                    
                    if(h>=0 && h<N && k>=0 && k<N && m1[h][k]!=0){
                        count++;
                    }

                }
            }

            m2[i][j]=count;
            count=0;

        }
    }

    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            printf("%d\t", m2[i][j]);
        }
        printf("\n");
    }

return 0;
}    