//Scrivere un programma che stampa la tavola pitagorica

#include <stdio.h>
int main(){
	int n=0;
	int a;
	
	printf("x ");
	while(n<=10){
		printf(" %d ",n);
		n++;
	}
	printf("\n");
	
	
	for(n=0; n<=11; n++){
		printf("0  ");
	}
	printf("\n");
	
	
	printf("1 ");
	for(n=0; n<=10; n++){
		printf(" %d ",n);
	}
	printf("\n");
	
	
	n=0;
	a=0;
	printf("2 ");
	while(n<=20){
		printf(" %d ",n);
		a++;
		n=2;
		n=n*a;
	}
	printf("\n");
	
	
	n=0;
	a=0;
	printf("3 ");
	while(n<=30){
		printf(" %d ",n);
		a++;
		n=3;
		n=n*a;
	}
	printf("\n");
	
	
	n=0;
	a=0;
	printf("4 ");
	while(n<=40){
		printf(" %d ",n);
		a++;
		n=4;
		n=n*a;
	}
	printf("\n");
	
	
	n=0;
	a=0;
	printf("5 ");
	while(n<=50){
		printf(" %d ",n);
		a++;
		n=5;
		n=n*a;
	}
	printf("\n");
	
	
	n=0;
	a=0;
	printf("6 ");
	while(n<=60){
		printf(" %d ",n);
		a++;
		n=6;
		n=n*a;
	}
	printf("\n");
	
	
	n=0;
	a=0;
	printf("7 ");
	while(n<=70){
		printf(" %d ",n);
		a++;
		n=7;
		n=n*a;
	}
	printf("\n");
	
	
	n=0;
	a=0;
	printf("8 ");
	while(n<=80){
		printf(" %d ",n);
		a++;
		n=8;
		n=n*a;
	}
	printf("\n");
	
	
	n=0;
	a=0;
	printf("9 ");
	while(n<=90){
		printf(" %d ",n);
		a++;
		n=9;
		n=n*a;
	}
	printf("\n");
	
	
	n=0;
	a=0;
	printf("10 ");
	while(n<=100){
		printf(" %d ",n);
		a++;
		n=10;
		n=n*a;
	}
	printf("\n");
	
	
	
	
	
	
	
	

return 0;
}
