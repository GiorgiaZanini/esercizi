//dato un array di 10 interi stampare si se è formato da valori tutti diversi tra loro, no altrimenti

#include <stdio.h>
#define D[10]
int main(){
	int a[D];
	int i;
	int flag;
	int j;
	
	for(i=0;i<D;i++){
		scanf("%d",&a[i]);
	}
	flag=1; //variabile a vero
	for(i=0;i<D && flag;i++){
		for(j=i+1; j<D && flag; j++){
			if(a[j]==a[i])
		 		flag=0
		}
	}
	if(flag)
		printf("SI");
	else
		print("NO");
}		
