//Scrivere un programma C che legge da tastiera una sequenza di numeri 
//(di lunghezza a priori indefinita e che termina con uno 0 – che non fa parte della sequenza) 
//e stampare quanti di essi sono primi

#include <stdio.h>
int main(){
	int n;
	int i;
	int count=0;
	int flag=1; //numero è primo
	
	printf("inserisci una sequenza di numeri (per terminare digita 0): ");
	scanf("%d",&n);
	while(n!=0){
			for(i=2; i<n; i++){
				if(n%i==0){	
					flag=0; //numero non è primo
				}		
//				printf("%d, %d, %d\n",i,n,flag);		
			}
			if(flag==1){
					count++;
				}
			flag=1;
		scanf("%d",&n);
	}
	if(count==0){
		printf("non ci sono numeri primi\n");
	}
	if(count!=0){
		printf("ci sono numeri %d primi\n",count);
	}	

return 0;
} 
