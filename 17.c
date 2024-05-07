// leggere la sequenza di numeri interi di lunghezza a priori indefinita composta da valori in [0,9]
//il programma alla fine dell'inserimento visualizza l'stogramma a barre orizzontali delle occorrenze di ciascun numero nell'inervallo [0,9]

// 0 1 0 2 2 3 2 0 5 [20]

//0:***
//1:*
//2:***
//3:*
//4:
//5:*
//6:
//7:
//8:
//9:

#include <stdio.h>
int main(){
	int f[10]={0};
	int n;
	int i;
	
	scanf("%d",&n);
	while(n>=0 && n<=9){
		f[n]++;
		scanf("%d",&n);
	}
	for(n=0; n<=9; n++){
		printf("%d:",n);
		for(i=0; i<f[n]; i++){  //ripeti f[n] volte la stampa di un *
		printf("*");
		}
		printf("\n");
	}

return 0;
}
