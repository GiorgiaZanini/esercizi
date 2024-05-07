//sequenza di interi che termina con uno 0
//per ogni valore letto il programma stabilisce se è il doppio del precedente 
//stampa quante coppie soddisfano 

#include <stdio.h>
int main(){
	int a, b;
	int cont=0; //variabile contatore
	scanf("%d",&a);
	
	if(a!=0){
		scanf("%d",&b);
	while(b!=0){
		if(a*2==b)
			cont++;
		a=b;
		scanf("%d",&b);
	}
	printf("%d",cont);
	}
	else {
		printf("Sequenza vuota");
	}

return 0;
}	

// ??
