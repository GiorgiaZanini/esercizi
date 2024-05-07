//Dato un numero intero n>0 letto da tastera, stampare a video quante cifre pari contiene. 
//Esempio, il numero 8 ha 1 cifra pari, il numero 256 ha 2 cifre pari.

#include <stdio.h>
int main(){
	int n;
	int count=0;
	
	scanf("%d",&n);
	while(n>0){
		n%10;
		if(n%2==0){
		count++;
		}
		n=n/10;
	}
	printf("le cifre pari sono %d\n",count);

return 0;
}
