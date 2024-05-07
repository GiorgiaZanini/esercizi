//Scrivere un programma che ricevuto da tastiera il valore di un intero positivo 
//stampa a video ogni cifra del numero (partendo da destra), 
//ripetuta un numero di volte pari al valore della cifra. 

//Ad esempio, se il numero fosse 134 il programma stamperà a video:
//4444 333 1

#include <stdio.h>
int main(){
	int n;
	int a;
	int i;

	printf("inserisci un numero intero positivo: ");
	scanf("%d",&n);
	while(n<0){
		printf("inserisci un numero intero positivo: ");
		scanf("%d",&n);
	}
	while(n!=0){
		a=n%10;
		for(i=0; i<a; i++){
		 	printf("%d",a);
		}
		printf(" ");
		n /= 10;
	}
	printf("\n");

return 0;
}
