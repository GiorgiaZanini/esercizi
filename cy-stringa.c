/*Scrivere una funzione che realizza un semplice algoritmo crittografico. 

La funzione riceve come parametri una stringa s1 e un intero n 
e modifica $1 sostituendola con la sua versione criptata utilizzando il seguente semplice algoritmo di cifratura:

Ogni carattere da 'a' a 'z' viene rimpiazzato dal carattere che si trova n posizioni più avanti nell'alfabeto.

L'alfabeto va gestito circolarmente, cioè il carattere 'a' è successivo al carattere 'z'.

Tutti i caratteri che non rientrano nell' intervallo da 'a' a 'z' vanno lasciati inalterati.

Scrivere anche una funzione che decodifica una stringa criptata (tale funzione deve cioè funzionare in maniera inversa rispetto alla precedente). 

Scrivere infine un programma che permette di criptare e decriptare una stringa inserita dall'utente*/

#include <stdio.h>
#define D 40

void encrypt(char *s, int n){
    int overflow;
    
    for(int i = 0; i != '\0'; i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            if(s[i] + n > 'z'){
                overflow = (n - 'z') + 'a';
                s[i] = (s[i] + overflow);
            }else{
                s[i] = (s[i] + n);
            }
        }
    }
    
}

int main(){
    char s[D+1];
    int n;

    scanf("%s %d", s, &n);

    encrypt(s, n);

    printf("%s", s);

return 0;    
}