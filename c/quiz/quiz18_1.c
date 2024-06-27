/*
Scrivere un programma C che data in input da tastiera una stringa, stampa a video il numero di sequenze di caratteri consecutivi presenti nella stringa.
 In particolare, completare la definizione delle seguenti funzioni presenti nel programma:

- run_length,
 che data una stringa s e un carattere c,
 restituisce il numero di caratteri c consecutivi presenti all'inizio della stringa s

- count_run_lengths,
 che data una stringa s,
 ritorna il numero di sequenze di caratteri consecutivi presenti nella stringa di ingresso.

For example:

Input	            Result
aaaaabbbbbbaa       3

qqq                 1

*/

// Completare la definizione delle funzioni presenti nel programma.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 80

int run_length(char *s, char c);
int count_run_lengths(char *s);

int main() {
    char s[MAX_LENGTH + 1];
    scanf("%s", s);
    printf("%d\n", count_run_lengths(s));
    return 0;
}

// FUNZIONE RICORSIVA
// Restituisce il numero di caratteri c consecutivi presenti all'inizio della stringa s.
int run_length(char *s, char c) {

// s++
}

/*
 * Ritorna il numero di sequenze di caratteri consecutivi presenti nella stringa di ingresso.
 * Per esempio, per s = "aaaaabbbbbbaa" ritorna 3,
 * perchè ci sono tre sequenze: una sequenza di 'a', una sequenza di 'b' e una sequenza di 'a'
 */
int count_run_lengths(char *s) {
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] != s[i+1]) {
            count++;
        }
    }

    return count;
}