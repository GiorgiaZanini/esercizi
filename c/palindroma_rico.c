/* Definire la funzione ricorsiva int palindroma(char *, int, int) che ricevuta in ingresso una stringa,
la posizione del primo carattere valido nella stringa (di solito 0 nella chiamata nel main) e la sua lunghezza,
restituisce 1 se la stringa passata come parametro è palindroma, 0 altrimenti. */

#include <stdio.h>

int palindroma(char *stringa, int i, int j){
    if(i == j || j-i == 1){
        return 1;
    } else if (stringa[i] != stringa[j-1]) {
        return 0;
    } else {
        return palindroma(stringa, i+1, j-1);
    }
}

int main() {
    char stringa[1000];
    int flag, lunghezza = 0;

    scanf("%s", stringa);

    for (int i = 0; stringa[i] != '\0'; i++) {
        lunghezza++;
    }
    flag = palindroma(stringa, 0, lunghezza);

    printf("\n%d", flag);

    return 0;
}