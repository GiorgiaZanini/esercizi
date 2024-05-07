/*Data una matrice NXN (con N=9) utilizzata per una semplificazione del gioco Sudoku. 
Si scriva un programma C in grado di:

- Riempire la matrice da tastiera.
In ogni cella della matrice dovrà comparire soltanto un numero appartenente all'intervallo [1,9] 
(non è necessario correggere errori di inserimento dati)

- Chiedere all'utente l'inserimento da tastiera di un indice di riga r e un indice di colonna c appartenenti all'insieme {0,3,6}.

- Verificare se nel quadrato di dimensione 3X3 e origine nel punto (r,c), 
ogni valore dell'intervallo [1,9] compare esattamente 1 volta.

Stampare a video 1 se la proprietà è verificata, 0 altrimenti.

1	2	3	8	7	5	4	5	9            1
1	1	4	1	2	3	5	4	1           
3	4	7	4	6	9	6	3	2              
9	2	3	1	4	5	7	2	3
8	1	2	1	7	6	3	1	4
7	2	4	7	8	5	2	6	5
6	5	4	3	2	1	1	7	6
5	6	7	5	2	1	5	8	7
4	1	3	5	5	7	6	9	8 
0 3
*/

#include<stdio.h>
#define N 9
int main(){
    int m[N][N]=    {{1, 2, 3, 8, 7, 5, 4, 5, 9},{1, 1, 4, 1, 2, 3, 5, 4, 1},{3, 4, 7, 4, 6, 9, 6, 3, 2},
                    {9, 2, 3, 1, 4, 5, 7, 2, 3},{8, 1, 2, 1, 7, 6, 3, 1, 4},{7, 2, 4, 7, 8, 5, 2, 6, 5},
                    {6, 5, 4, 3, 2, 1, 1, 7, 6},{5, 6, 7, 5, 2, 1, 5, 8, 7},{4, 1, 3, 5, 5,	7, 6, 9, 8}};    
    int i, j, r=0, c=3, n;
    int proprietà=1;
    int count;
    
/*    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            scanf("%d\t", &m[i][j]);
        }
    }

    scanf("%d %d", &r, &c);     */

    for(n=1; n<=9 && proprietà; n++){    
//        printf("\nsetto il count a 0");
        count=0;
        for(i=r; i<r+3 && proprietà; i++){   //sistemare r c 
            for(j=c; j<c+3 && proprietà; j++){
//            printf("\nenro nella sottomatrice");    
                                
                if(m[i][j]==n){
                    count++;
//                    printf("\nc'è un %d", n);
                }
                if(count>1){
                    proprietà=0;
//                    printf("\nci sono più %d", n);
                }
                
            }            
        }
    } 

    printf("\n%d", proprietà);
    
return 0;
} 