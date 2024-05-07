//Scrivere un programma che chiede all’utente 10 valori interi, 
//li stampa nell’ordine inserito,
//li stampa nell’ordine inverso, 
//stampa a video la somma di tutti i valori presenti nell’array e
//stampa a video quanti valori sono positivi, quanti negativi e quante volte lo zero è stato inserito.

#include <stdio.h>
int main(){
	int n[10];
	int i;
	int somma=0;
	int positivo=0, negativo=0, zero=0;
	
	printf("inserisci 10 numeri: ");
	for(i=0; i<10; i++){
		scanf("%d",&n[i]);
	}
	
	for(i=0; i<10; i++){		//ordine inserito
		printf("%d ",n[i]);
	}
	printf("\n");
	for(i=9; i>=0; i--){		//ordine inverso
		printf("%d ",n[i]);
	}
	printf("\n");
	for(i=0; i<10; i++){		//somma valori array
		somma += n[i];
	}
	printf("somma valori: %d\n",somma);
	for(i=0; i<10; i++){		//valori positivi e negativi
		if(n[i]>0){
			positivo++;
		}
		else if(n[i]<0){
			negativo++;
		}
		else{
			zero++;
		}
	}
	printf("numero valori positivi: %d\n",positivo);
	printf("numero valori negativo: %d\n",negativo);
	printf("numero volte in cui è stato inserito lo zero: %d\n",zero);

return 0;
}
