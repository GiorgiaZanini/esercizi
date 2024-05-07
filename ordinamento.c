#include <stdio.h>
#define N 5

int main() {
    int a[N];
    int tmp, i, j;

    for(i = 0; i < N; i++){
        scanf("%d", &a[i]);
    }

    int max = a[0];

    for(i = 1; i < N; i++){
        if(a[i] > max){
            max = a[i];
        }
    }

    printf("il max è %d\n", max);


    i = N;
    while (i >= 0) {
        for (j = 0; j < N; j++) {
            if (a[j] == max) {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;

                i--;
            }

            max--;
        }
    }

    for(i = 0; i < N; i++){
        printf("%d ", a[i]);
    }

    return 0;
}