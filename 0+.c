//Scrivere un algoritmo che chiede in ingresso un numero positivo n e restituisce in uscita tutti i numeri da 0 a n.

#include <stdio.h>
int main(){
	int n;
	int i;
		
	printf("Inserisci un numero ");
	scanf("%d",&n);
	i=0;
	
	while(i<=n){
		printf("%d ",i);
		i++;
	}
	printf("\n");

return 0;
} 
