//scrivere un programma in C che richiede all'utente 10 voti (compresi tra 18 e 30, correggere gli errori) e li memorizza all'interno di un array, il voto massimo, minimo e medio

#include <stdio.h>
int main(){
	int voti[10];
	int n;
	int i;
	i=0;
	int max;
	int min;
	
	for(i=0; i<10; i++){
	printf("Inserisci il voto: ");
	scanf("%d",&n);
		if(n>=18 && n<=30){
		
		voti[i]=n;
		
		}
	}
	
}
