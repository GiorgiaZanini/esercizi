//Scrivere un programma C che memorizza in un array i primi 15 numeri di Fibonacci
//e li stampa a video.

//I primi due numeri di Fibonacci, Fib(0) e Fib(1), sono definiti come:
//Fib(0) = 1
//Fib(1) = 1
//Il numero di Fibonacci di un valore n >= 2 è:
//Fib(n) = Fib(n-2) + Fib(n-1)

#include <stdio.h>
#define D 15
int main(){
	int a[D];
	int i;
	
	for(i=0; i<D; i++){
		if(i>=2){
			a[i]=a[i-2]+a[i-1];
		}
		else{
			a[i]=1;
		}
	}
	for(i=0; i<D; i++){
		printf("%d ",a[i]);
	}
	printf("\n");

return 0;
}
