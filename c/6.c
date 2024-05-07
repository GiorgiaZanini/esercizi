/*acquisito un valore intero, stampa 0 se pari o 1 se dispari*/
#include <stdio.h>
int main(){
	int n;
	
	printf("inserisci un numro: ");
	scanf("%d",&n);
	
	if(n%2==0){
	printf("\n %d è pari\n",n);
	}
	else{
	printf("\n %d è dispari\n",n);
	}
	
return 0;
}
