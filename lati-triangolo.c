//Si scriva un programma che legga da input le lunghezze dei lati di un triangolo e determini se il triangolo è equilatero, isoscele o scaleno

#include <stdio.h>
int main(){
	float a,b,c;
	
	printf("inserisci la lunghezza dei lati del triangolo:\n");
	scanf("%f %f %f",&a,&b,&c);
	
	if(a==b==c){
		printf("il triangolo è equilatero\n");
	}
	else if(a==b || b==c || c==a){
		printf("il triangolo è isoscele\n");
	}
	else{
		printf("il triangolo è scaleno\n");
	}
	
return 0;
}
