//Definire un tipo di dato strutturato per rappresentare una frazione
//in termini di numeratore e denominatore (due numeri interi).
//Scrivere un programma che acquisisce due frazioni ed esegue la somma. 
//Il programma deve in seguito semplificare il risultato dell'operazione 
//rappresentando l'eventuale segno meno nel numeratore.

#include<stdio.h>

int find_common_divider (int s_d, int s_n)
{
	int minore = s_d;
	int maggiore = s_n;
	
	if(s_d > s_n){
		minore = s_n;
		maggiore = s_d;
	}
	
	//printf("maggiore %d, minore %d \n", maggiore, minore);
	
	for(int i = 2; i <= minore; i++)
	{
		//printf("Provo divisore %d\n", i);
		if(minore % i == 0)
		{
			//printf("%d divide minore\n", i);
			if(maggiore % i == 0)
			{			
				//printf("%d divide maggiore\n", i);
				return i;
			}	
		}
		
	}
	
	// nessun divisore trovato
	return 1;	
}

int main(){
	typedef struct{
		int n;
		int d;
	}frazione;
	
	frazione a, b, somma;

//acqisizone frazioni	
	printf("inserisci la prima frazione: ");
	scanf("%d/%d",&a.n, &a.d);
	while(a.d == 0){
		printf("reinserisci il denominatore: ");
		scanf("%d",&a.d);
	}
	
	printf("\ninserisci la seconda frazione: ");
	scanf("%d/%d",&b.n, &b.d);
	while(b.d == 0){
		printf("reinserisci il denominatore: ");
		scanf("%d",&b.d);
	}
	
	//somma
	somma.d = a.d * b.d;
	somma.n = (a.n * b.d) + (b.n * a.d);
	
	//semplificazione
	int divider = 0;
	
	while(divider != 1)
	{
		divider = find_common_divider(somma.d, somma.n);
		printf("Trovato divisore comune: %d\n", divider);
		
		somma.d = somma.d / divider;
		somma.n = somma.n / divider;
	}	
	
	
	if(somma.n == somma.d || somma.n == 0)
	{
		printf("%d \n", somma.n);
	}
	else
	{
		printf("\n%d/%d\n",somma.n, somma.d);	
	}
		
	return 0;
}
