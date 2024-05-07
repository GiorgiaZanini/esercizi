//Scrivere un programma C che chiede in ingresso due numeri a e b e verifica se a è multiplo di b, oppure b è multiplo di a e stampa un opportuno messaggio a video

#include <stdio.h>
int main(){
	int a, b;
  	printf("inserisci due numeri ");
  	scanf("%d",&a);
	scanf("%d",&b);
	
	if(a%b==0){
	printf("%d è multiplo di %d\n",a,b);
	}
	else if(b%a==0){
	printf("%d è multiplo di %d\n",b,a);
	}
	else{
	printf("i numeri non sono multipli\n");
	}


return 0;
}
