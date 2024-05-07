//Si completi il programma in modo che dato in input da tastiera un numero n sicuramente maggiore di 0,
//stampi a video 1 se nella matrice di interi NxM inserita da tastiera 
//tutte le sottomatrici quadrate di dimensione n hanno la moltiplicazione di tutti gli elementi uguale a 0.
//In caso contrario verrà stampato a video 0

//2				1
//1 0 -3 0
//4 2 -2 6
//0 8 0 10


#include<stdio.h>
#define M 3
#define N 4
int main(){
	int n, i, j;
	int m[M][N]={{1,0,-3,0},{4,2,-2,6},{0,8,0,10}};
	int a, b;
	int prodotto = 1;
	int proprieta = 1;
	
	do{
		scanf("%d", &n);
	}while(n<=0 || n>M);
	
	for(i=0;i<M;i++){
		for(j=0;j<N;j++){
			scanf("%d",&m[i][j]);
		}
	}
	
	
	for(a=0; a<M-n+1 && proprieta; a++){ 
		for(b=0; b<N-n+1 && proprieta; b++){
		
			prodotto = 1;
			
			for(i=a;i<n+a;i++){				
				for(j=b;j<n+b;j++){
					prodotto *= m[i][j];
				}
			}
			
			if(prodotto!=0){
				proprieta = 0;
			}	
		}
	}
	
	printf("%d", proprieta);
	
return 0;
}
