//Scrivere un programma che chiede all'utente due caratteri e verifica se sono uno il successivo dell'altro (ad esempio i caratteri 'a' e 'b' sono uno il successivo dell'altro)

#include <stdio.h>
int main(){
	char a,b;
	
	printf("inserisci due caratteri ");
	scanf("%c %c",&a,&b);
	
	if(a++==b || b++==a){
	printf("i caratteri sono successivi\n");
	}
	else{
	printf("i caratteri non sono successivi\n");
	}

return 0;
}
