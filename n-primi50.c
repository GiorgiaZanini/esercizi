//Scrivere un programma C che memorizza in un array di lunghezza 15 tutti i numeri primi minori di 50
//e successivamente li stampa a video.

//Un numero x è primo se è diverso da 1 ed ha come unici divisori 1 ed x.
//NB 0 non è primo in quanto ogni numero divide 0

#include <stdio.h>
#define D 15
int main(){
	int a[D];
	int i=0, j, n;
	int flag=0;
	
	for(n=2; n<=50; n++){
		for(j=2; j<50; j++){
			if(n%j==0 && n!=j){
				flag=1;
			}
		}
		if(flag==0){
			a[i]=n;
			i++;
		}
		flag=0;
	}

	for(i=0; i<D; i++){
		printf("%d ",a[i]);
	}
	printf("\n");

return 0;
}
