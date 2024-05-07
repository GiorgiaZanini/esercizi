//Scrivere un programma che chiede all’utente un numero intero positivo n 
//(rifiuta eventuali valori non corretti) 
//e stampa a video la somma di tutti i naturali compresi tra 0 e n incluso

#include <stdio.h>
int main(){
	int n;
	int i;
	int somma=0;

	do{
		printf("inserisci un numero: ");
		scanf("%d",&n);
	}while(n<0);	//controlla che il numero sia positivo

	for(i=0;i<=n;i++){
		somma+=i;
	}

	printf("%d\n",somma);

return 0;
}
