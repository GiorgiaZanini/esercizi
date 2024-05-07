// leggi mat 5x5 di int 
// coordinate i e j

#include <stdio.h>
#define N 5
int main(){
	int m[N][N];
	int i,j,h,k           ;
	
	for(i=0; i<N; i++){
		for(j=0; j<N; j++){
			scanf("%d", &m[i][j]);
		}
	}
	
	printf("inserisci 2 coordinate da 0 a 4: ");
	
	do{
		scanf("%d", &i);
	}while(i<0 || i>N-1);
	do{
		scanf("%d", &j);
	}while(j<0 || j>N-1);
	
	for(h=-1; h<2; h++){
		for(k=-1; k<2; k++){
			if(i+h>=0 && i+h<N && j+k>=0 && j+k<n && (h!=0 || k!=0)){
				m[i+h][j+k]=0;
			}																																																														
		printf("/n");	
		}
	}

return 0;
}
