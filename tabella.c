//Scrivere un programma che chiede all’utente un numero intero n positivo e
//stampa a video una tabella che ha in ogni posizione il prodotto tra l’indice di riga e di colonna (partire dall’indice 1); 
//ad esempio, se l’utente inserisce il numero 3
// 1 2 3
// 2 4 6
// 3 6 9

#include <stdio.h>
int main(){
	int n;
	int i=1;
	int a=1;

	printf("inserisci un numero: ");
	scanf("%d",&n);
	while(a<=n){
		for(i=1; i<=n; i++){
			printf("%d ",a*i);
		}
		i++;
		a++;
		printf("\n");
	}

return 0;
}
