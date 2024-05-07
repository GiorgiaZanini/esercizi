/*Scrivere nel file il sottoprogramma 

int higherdigit(int n, int m) 
che ricevuti in ingresso due interi n e m non negativi, restituisce la cifra più alta tra quelle presenti nei due numeri, 
se i due numeri sono formati dallo stesso numero di cifre,  -1 altrimenti. 

Ad esempio, 
se al sottoprogramma vengono passati in ingresso i numeri 31 e 421 esso restituirà -1, 
infatti 31 è composto i 2 cifre mentre 421 di 3; 
se al sottoprogramma vengono passati  in ingresso i numeri 31 e 42 esso restituirà 4, 
infatti i numeri sono di 2 cifre e la più alta che compare è 4.


31      -1
421

33      6 
56
                 */

#include <stdio.h>
int higherdigit(int, int);
int main(){
	int a, b, r;
	
	do{
		scanf("%d",&a);
	}while(a<0);
	do{
		scanf("%d",&b);
	}while(b<0);
	
	r=higherdigit(a,b);
	
	printf("\n Esito su %d e %d: %d",a,b,r);
	
	return 0;
}

int higherdigit (int a, int b){
    int count_a = 0;
    int count_b = 0;
    int max_a = -1;
    int max_b = -1;
    int temp;

    do{
        count_a++;
        temp = a % 10;
        a /= 10;
        if(temp > max_a){
            max_a = temp;
        }
    }while(a > 0);

    do{
        count_b++;
        temp = b % 10;
        b /= 10;
        if(temp > max_b){
            max_b = temp;
        }
    }while(b > 0);

    if(count_a != count_b){
        return -1;
    }else if (max_a > max_b){
        return max_a;
    }else{
        return max_b; 
    }
}