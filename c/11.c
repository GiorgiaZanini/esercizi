#include <stdio.h>
int main(){
	int a, b, mcd, mcm;
	
	do{
	scanf("%d",&a);
	}while(a<=0);
	
	do{
	scanf("%d",&b);
	}while(a<=0);
	
	if(a>b)
		mcd=b;
	else
		mcd=a;
	while(!(a%mcd==0 && b%mcd==0)){
		mcd--;
	}
	
	
	mcm=(a*b)/mcd;
	
	printf("%d %d",mcd,mcm);
	
return 0;
}
