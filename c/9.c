#include <stido.h>
int main()
{
	int n;
	int i;
	printf("Quale tabellina? ");
	
	do{
	scanf("%d",&n);
	}while(n<=0); 
	//chiede un valore e finchè non va bene continua a richiedere
		//scanf("%d"&n)
		//while(n<=0){
		//scanf("%d%,&n);
		//}
	i=1;
	do{
	printf("%d",n*i);
	i++;
	}while(i<=10)
	
	//esegue una volta tutto il ciclo,
	//po verifica la condizione, e se è vera ripete il ciclo
	
return 0;
}
