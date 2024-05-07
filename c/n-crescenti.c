//Scrivere un programma C che legge da tastiera una sequenza di numeri
//(di lunghezza a priori indefinita e che termina con uno 0 – che non fa parte della sequenza)
//e stabilisce se si tratta di una sequenza crescente di numeri.

#include <stdio.h>
int main(){
	int n;
	int max;
	int a=1;
	
	printf("inserisci una sequenza di numeri (per terminare digita 0): ");
	scanf("%d",&n);
	while(n!=0){
			max=n;
		scanf("%d",&n);
		if(n<=max && n!=0){
			a=0;
		}
	}
	if(a==1){
		printf("la sequenza è crescente\n");
	}
	else if(a==0){
		printf("la sequenza è non crescente\n");
	}

return 0;
} 
