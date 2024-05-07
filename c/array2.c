//Scrivere un programma che chiede all’utente di riempire un array di 10 interi,
//lo stampa a video e
//stampa a video, per ogni elemento dell’array (escluso quello in posizione 0), la somma con il precedente

#include <stdio.h>
int main(){
	int n[10];
	int i;
	int somma=0;

	printf("inserisci 10 numeri: ");
	for(i=0; i<10; i++){
		scanf("%d",&n[i]);
	}
	for(i=0; i<10; i++){
		printf("%d ",n[i]);
	}
	printf("\n");
	for(i=1; i<10; i++){
		somma += n[i];
	}
	printf("%d\n",somma);

return 0;
}
