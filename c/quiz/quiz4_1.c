#include <stdio.h>
#define N 3 
int main(){
	int m[N][N];
	int x, y;
	int somma;

	for(x=0; x<N; x++){		//righe
		for(y=0; y<N; y++){		//colonne
			scanf("%d", &m[x][y]);
		}
	}
	
	for(x=0; x<N; x++){
		somma=0;
		for(y=0; y<N; y++){
			somma += m[x][y];
		}
		for(y=0; y<N; y++){
			if(x==y){
				m[x][y]=somma;
			}
		}
	}



// visualizzazione
	for(x=0; x<N; x++){
		for(y=0; y<N; y++){
			printf("%3d ", m[x][y]);
		}
		printf("\n");
	}

return 0;
}