/* Completare il programma definendo la funzione coppiei che dato come parametro un intero n non negativo restituisce quante coppie, 
anche con sovrapposizione, di cifre uguali in posizioni adiacenti sono presenti nel numero n. 
Ad esempio, coppiei(551122) restituisce 3, coppiei(5122) restituisce 1, coppiei(5222) restituisce 2 
(le coppie di valori adiacenti uguali si sovrappongono), coppiei(9) restituisce 0. */

#include <stdio.h>
int coppiei(int);


int main(){
	int a,r;
	
	do{
		scanf("%d",&a);
	}while(a<0);
	
	r=coppiei(a);
	
	printf("%d",r);
	
	return 0;
}

int coppiei(int a){
    int count=0;
    int a1; 
    int a2;
    
    while(a!=0){
        a1 = a % 10;
        a = a / 10;
        a2 = a % 10;
        
        if(a1 == a2){
            count++;
        }    
    }    
    
    return count;
}