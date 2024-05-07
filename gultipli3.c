//Scrivere un programma che chiede all’utente un numero intero positivo n (rifiuta eventuali valori non corretti) 
//e stampa a video quanti multipli di 3 sono presenti tra 0 e n incluso

#include <stdio.h>
int main(){
	int n;
	int i;

	do{
		printf("inserisci un numero: ");
		scanf("%d",&n);
	}while(n<0);	//controlla che il numero sia positivo

	for(i=1;i<=n;i++){
		if(i%3==0){
			printf("%d ",i);
		}
	}
	printf("\n");

return 0;
}
