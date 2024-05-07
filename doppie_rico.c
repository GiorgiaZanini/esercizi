/*
Definire la funzione ricorsiva int doppie(char *) che presa per parametro una stringa,
restituisce 1 se la stringa contiene almeno un carattere doppio (ripetuto in posizioni consecutive, es «gatto»), 0 altrimenti.
*/

#include <stdio.h>

int doppie(char* stringa){
    printf("%c %c\n", *stringa, *(stringa+1));
    if(*stringa == '\0') {
        return 0;
    } else if (*(stringa+1) == *stringa) {
        return 1;
    } else {
        return doppie(stringa+1);
    }
}

int main() {
    char stringa[1000];
    int flag;

    scanf("%s", stringa);

    flag = doppie(stringa);

    printf("%d", flag);

    return 0;
}