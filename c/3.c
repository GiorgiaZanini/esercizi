/*dato un numero n, stampa n "*" */
#include <stdio.h>
int main(){

int n;

printf("Dammi un numero: ");
scanf("%d",&n);

while (n>0){
printf("*");
n=n-1;
}

return 0;
}
