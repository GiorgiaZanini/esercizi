/*Dati due numeri a e b stampare SI se a è multiplo di b, NO in caso contrario*/
#include <stdio.h>
int main(){
	int a,b;
	printf("\n Inserisci due numeri: ");

	scanf("%d",&a);
	scanf("%d",&b);
	
	if (a%b==0){
	printf("\n SI\n");
	}
	else{
	printf("\n NO\n");
	}
	
	return 0;
}
