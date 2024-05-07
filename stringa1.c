/*Scrivere un programma che acquisisce una stringa di al più 100 caratteri che può contenere spazi e segni di punteggiatura.
Il programma conta quante consonanti doppie sono presenti nella stringa. 
NOTE: assumere che la stringa NON sia vuota ed inoltre che non contenga lettere maiuscole. 
Infine non possono verificarsi casi di consonanti triple o più.*/

#include <stdio.h>
#define N 100

int main() {
    char s[N+1];
    int count=0, i=0;

    do{
        scanf("%c", &s[i]);
/*        if(i==0 && s[i]==s[i-1] && s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u'){
            count++;
        }               */
        i++;
    }while(s[i]=='\n' && i<=N);

    s[i]='\0';

    for(int j=0; j<i; j++){
        if(s[i]==s[i+1] && s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u'){
            count++;
        }
    }

    printf("%d", count);
}