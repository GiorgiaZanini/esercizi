//Data una sequenza di numeri interi che termina con lo 0 (sentinella), 
//stampare a video quanti multipli di 5 o di 7 sono contenuti nella sequenza 
//(attenzione: se un numero è divisore sia di 5 che di 7 non deve essere contato 2 volte)

#include <stdio.h>
int main(){
	int n;
	
	scanf("%d",&n);
		while(n!=0){

				
			if(n%5==0 && n%7==0){
				printf("%d_prova1\n",n);
			}
			else if(n%5==0){
				printf("%d_prova2\n",n);
			}
			else if(n%7==0){
				printf("%d_prova3\n",n);
			}
			
		scanf("%d",&n);
		}

return 0;
}
