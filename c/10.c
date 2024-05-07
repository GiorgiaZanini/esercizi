#include <stdio.h>
int main(){
	char c;
	scanf("%c",&c);
	while(c>='a' && c<='z'){
		if(c!='z'); //!= è diverso
			c=c+1;
		else  //si può non mettere {} se c'è una sola istruzione, ma mettere un tab sennò non legge
			c='a';
		printf("%c\n",c)
		scanf("%c",&c);
		}
return 0;
}		
