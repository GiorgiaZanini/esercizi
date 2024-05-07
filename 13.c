//scrivere un programma in C che classifica un carattere immesso da tastiera come: 
//alfabetico (a-z oppure A-Z), cifra (0-9), speciale (tutti gli altri)

#include <stdio.h>
int main(){
	char a;
	a=' ';
	
	while(a!='s'){
	
		printf("(carattere di stop: s) \nInserisci un carattere ");
		scanf("%c",&a);
		
		if(a>='0' && a<='9'){
			printf("\ncifra \n");	
		}
		else if((a>='a' && a<='z')||(a>='A' && a<='Z')){
			printf("\nalfabetico \n");
		}
		else{
			printf("\nspeciale \n");
		}
	}

return 0;
}
