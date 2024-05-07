#include <stdio.h>
int main(){

    int n;
    int a;

    scanf("%d", &n);

    switch (n){
    case 1:
        printf("♥");
        break;
    
    default:
        printf("☺");
        break;
    }

    a = n < 10 ? 1:0; //se a<10 a=1, altrimenti a=0
    printf("\n%d\n", a);

return 0;    
}