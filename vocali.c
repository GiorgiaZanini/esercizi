//Scrivere un programma che legge una sequenza di caratteri di lunghezza a priori ignota
//(‘#’ per terminare)
//e conta quante vocali minuscole sono state inserite

#include <stdio.h>
int main(){
	char a;
	int count=0;

	printf("inserisci una sequenza di caratteri (separati tra loro da uno spazio): ");
	scanf("%c",&a);

		while(a!='#'){
			if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'){
				count++;
			}
		
		scanf("%c",&a);
		}
		printf("sono state inserite %d vocali minuscole\n",count);

//	printf("\n");

return 0;
}
