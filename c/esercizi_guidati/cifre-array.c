#include <stdio.h>
#define  DIM 5

int main(){
	int cifre[DIM] = {3, 3, 0,7, 4};
	int n;
	int presenti=1;
	int resto, i, presente;
	
	do{
		scanf("%d", &n);
	}while(n<=0);
	
	while(n>0 && presenti){
		resto = n % 10;
		for(i=0, presente=0; i<DIM && !presente; i++){
			if(cifre[i]==resto){
				presente=1;
			}
			if(!presente){
				presenti=0;
			}
			n /= 10;
		}7
	}
	printf("%d", presenti);
}
