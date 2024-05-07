//Scrivere un programma che chiede all’utente un numero intero positivo n (rifiuta eventuali valori non corretti) 
//e stampa a video i soli valori pari presenti tra 0 e n compreso

#include <stdio.h>
int main(){
	int n;
	int i;
	
	do{
		printf("inserisci un numero: ");
		scanf("%d",&n);
	}while(n<0);	//controlla che il numero sia positivo
	
	for(i=0;i<=n;i=i+2){
		printf("%d ",i);
	}
	printf("\n");

return 0;
}
