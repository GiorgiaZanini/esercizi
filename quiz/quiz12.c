/* Scrivere la funzione esiste 
che data una stringa di massimo 30 caratteri (senza spazi nè andate a capo) e un carattere, 
restituisce 1 se il carattere è presente nella stringa, 0 altrimenti.

For example:

Input	    Result
prova o     1   */

#include<stdio.h>
#define N 30
int esiste(char *, char);

int main(){
	char stringa[N];
	char c;
	int r;
	
	scanf("%s", stringa);
	scanf(" %c",&c);
	
	r=esiste(stringa,c);
	printf("%d",r);
	return 0;
	
}

int esiste(char *stringa, char c){
    if (*stringa == '\0') return 0;
    if (*stringa == c) return 1;

    return esiste(stringa+1, c);

}