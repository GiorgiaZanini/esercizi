//dato un numero > 0, 1 se è primo, 0 alrimenti

#include <stdio.h>
int main(){
	int num;
	int flag;
	int div;
	
	do{
		scanf("%d",&num);
	}while(num<=0);
	flag=1
	
	for(div=2; div<num; div++){
		if(num%div==0){
			flag=0;
		}
	}
	if(flag)
		printf("Primo");
	else
		printf("Non primo");
}
