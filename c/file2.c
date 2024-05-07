/*Scrivere un programma C che apre in lettura un file di nome input1.txt 
e ne mostra il contenuto a video. 
Non sapendo cosa contiene il file leggete un carattere alla volta (con fscanf %c).*/

#include <stdio.h>

int main() {
    FILE *f;
    char a;

    f = fopen ("file/input1.txt","r");
    if (f == NULL) {
        printf("File non esistente\n");
    } else {
        do {
            fscanf (f, "%c", &a);
            printf ("%c", a);
        } while (!feof(f));
    }

    return 0;
}