//Dati in input due numeri interi n e y entrambi > 0, stampare a video quali ("quante") cifre di n sono divisori di y.
//Esempio se n=156 e y=48 l’output sarà 2 (le cifre 1 e 6 di n sono divisori di 48)

#include <stdio.h>
int main(){
	int n;
	int y;
	int cifra;

	printf("scrivi due numeri n e y: ");
	scanf("%d %d",&n,&y);
	while(n>0){
		cifra=n%10;
			if(cifra!=0 && y%cifra==0){
			printf("%d ",cifra);
		}
		n=n/10;
	}
	printf("\n");


return 0;
}
