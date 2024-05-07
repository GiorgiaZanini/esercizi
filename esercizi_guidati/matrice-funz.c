#include <stdio.h>
#define D 4

void read(int m[][D]){
    int i, j;

    for(i = 0; i < D; i++){
        for(j = 0; j < D; j++){
            scanf("%d", &m[i][j]);
        }
    }
}

void print_matrix(int m[][D]){
    int i, j;

    for(i = 0; i < D; i++){
        for(j = 0; j < D; j++){
            printf("%3d", m[i][j]);
        }
        printf("\n");
    }l
}

int symmetrical(int m[][D]){
    int i, j;
    int flag = 1;

    for(i = 0; i < D && flag; i++){
        for(j = 0; j < D && flag; j++){
            if(m[i][j] != m[j][i]){
                flag = 0;
            }
        }
    }

    return flag;
}

int main(){
    int m[D][D], r;

    read(m);

    print(m);

    r = symmetrical(m);

    printf("%d", r);

return 0;
}