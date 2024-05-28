#include <stdio.h>

int conta (int n) {
    if (n == 0){
        return 0;
    }
    return 1 + conta(n/10);
}

int main(){
    int n, cifre;

    scanf("%d", &n);
    while (n > 0) {
        cifre = conta(n);
        printf("\n %d %d", n, cifre);

        scanf("%d", &n);
    }
}