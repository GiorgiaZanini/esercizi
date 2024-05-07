//Sia dato un numero intero positivo N inserito da tastiera.
//Si scriva un programma in linguaggio C che calcoli i numeri interi che sono divisori di N.
//Dire inoltre se N è un numero primo

#include <stdio.h>
int main(){
	int n;
	int i;
	int flag=0;

	scanf("%d",&n);
	for(i=2; i<n; i++){
		if(n%i==0){
			flag=1;
			printf("%d ",i);
		}
	}
	if(flag==0){
		printf("è un numero primo");
	}
	printf("\n");

return 0;
}
