//Scrivere un sottoprogramma che dati due interi, 
//verifica se il primo è multiplo del secondo e restituisce 1 o 0 al chiamante

#include <stdio.h>
//int multiplo(int,int);
int multiplo(int x, int y){
	if(x%y==0){
		return 1;
	}else{
		return 0;
	}
}
int main(){
	int x, y;
	int m;
	
	printf("inserisci due numeri: ");
	scanf("%d %d",&x,&y);
	m=multiplo(x,y);
	if(m==1){
		printf("%d è multiplo di %d",x,y);
	}else{
		printf("%d è non multiplo di %d",x,y);
	}
	
return 0;
}
