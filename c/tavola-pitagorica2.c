//Scrivere un programma che stampa la tavola pitagorica

#include <stdio.h>
int main(){
	int n;
	int a=1;

		while(a<=10){
			for(n=1; n<=10; n++){
				printf(" %d ",n*a);
			}
			a++;
			printf("\n");
		}
	

return 0;
}
