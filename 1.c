/*
Dato un numero letto da tastiera, stampiamo il numero precedente

*/
#include <stdio.h>
int main(){
//parte dichiarativa

int n;
int prec;
//parte esecutiva
printf("Dammi un numero: ");
scanf("%d",&n);
prec=n-1;

printf("\n Il precedente di %d è %d",n,prec);

return 0;
}
