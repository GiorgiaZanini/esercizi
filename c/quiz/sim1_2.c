/* Si scriva un programma in grado di leggere da tastiera un array di interi di dimensione 10;
l’array deve essere modificato in modo che tutti i numeri dispari precedano i numeri pari
(il primo pari incontrato partendo da sinistra viene scambiato con il dispari presente più a destra etc.). 

Stampare l'array ottenuto separando i valori con uno spazio (printf("%d ",....);)
Verrà penalizzata la soluzione che utilizza un array di supporto per raggiungere la soluzione.

59 26 53 22 31 41 80 87 78 37       59 37 53 87 31 41 80 22 78 26    */

#include <stdio.h>
#define N 10

int main(){ 
    int src[N];
    int i=0, j;
    int temp;
    int flag=1;
    
    for(i=0; i<N; i++){
        scanf("%d", &src[i]);
    }

    for(i=0; i<N; i++){
        if(src[i]%2==0){
            for(j=N-1; i<j && flag==1; j--){
                if(src[j]%2!=0){
                    temp=src[i];
                    src[i]=src[j];
                    src[j]=temp;
                    flag=0;
                } 
            }
        }
        flag=1;
    }    
    
    for(i=0; i<N; i++){
        printf("%d ", src[i]);
    }
    
return(0); 
  
}
