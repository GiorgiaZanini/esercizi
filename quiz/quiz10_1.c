/* Scrivere la funzione cambia,
che presa in ingresso una stringa di massimo 10 caratteri,
cambia tutti i caratteri corrispondenti a cifre numeriche con un asterisco 
e restituisce al chiamante quante sostituzioni sono state fatte.

Input	    Result

a2abcda     a*abcda 1    */

#include<stdio.h>
#define DIM 10
int cambia(char *);

int main(){
	char stringa[DIM+1];
	int r;
	
	scanf("%s", stringa);
	
	r = cambia(stringa);

	printf("%s %d", stringa, r);

	return 0;

}

int cambia(char *stringa){
    int count = 0;

    for(int i = 0; stringa[i] != '\0'; i++){
        if(stringa[i] >= '0' && stringa[i] <= '9'){
            stringa[i] = '*';
            count++;
        }
    }

    return count;
}