#include<stdio.h>
#define N 4

int main(){
	int m[N][N];
	int i, j;
	int flag=1;
	
	for(i=0; i<N; i++){
		for(j=0; j<N; j++){
			scanf("%d",&m[i][j]);
		}
	}
	
	for(i=0; i<N; i++){
//		flag=0;
		for(j=0; j<N && flag; j++){
			flag=0;
			if((i==j && m[i][j]==1) || (i!=j && m[i][j]==0)){
				flag=1;
			}
		}
	}
	
	printf("%d", flag);

return 0;
}