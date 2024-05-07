#include <stdio.h>
#define N 2
int main(){
    int m[N][N];
    int i, j;
    int max=0, min, diff=0, ind;


    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            scanf("%d", &m[i][j]);
        }
    }

    for(j=0; j<N; j++){
        for(i=0; i<N; i++){
            if(m[i][j] > max){
                max = m[i][j];
            }
            if(i==0){
                min = m[i][j];
            }else if(m[i][j] < min){
                min = m[i][j];
            }
        }
        if(max-min>diff){
            diff=max-min;
            ind=j;
        }
    }

    printf("%d", ind);

    return 0;
}