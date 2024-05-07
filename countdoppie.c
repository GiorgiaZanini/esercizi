/*Definire la funzione ricorsiva int contadoppie(char *) che presa per parametro una stringa,
restituisce quante coppie di doppie la stringa contiene, es. «ammiccare» ne contiene 2. */

#include <stdio.h>

int count_doppie(char *stringa) {
    printf("%c", *stringa);
    if(*stringa == '\0'){
        return 0;
    } else if (*stringa == *(stringa+1)) {
        return (1 + count_doppie(stringa+1));
    } else {
        return count_doppie(stringa+1);
    }
}

int main() {
    char stringa[1000];
    int flag;

    scanf("%s", stringa);

    flag = count_doppie(stringa);

    printf("\n%d", flag);

    return 0;
}