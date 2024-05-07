//dati 50 numeri trovo il più alto
#include <stdio.h>
//definire la costante --> non occupa spazio in memoria
#define N 50 //(es. se sono 500 numeri si può cambiare con 500)
int main(){
	int n, max;
	int i;
	printf("Inserisci degli interi ");
	scanf("%d",&n);
	max=n;
	i=1;
	while(i<N){
		scanf("%d",&n);
		if(n>max){ //"è più alto del massimo?"
		max=n; //se è maggiore, n diventa in nuovo massimo
		i++; //aggiungi 1 a i
		}
	printf("%d",max);

return 0;
}

//non si può fare while(N>0) oppure N--   perchè N è una costante
