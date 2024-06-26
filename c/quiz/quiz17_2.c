/*
Scrivere un programma C che apre un file di testo “testo.txt”
 contenente parole ciascuna di al massimo 15 caratteri (si considerino soltanto i caratteri minuscoli).

 Il programma trova tutte le parole con almeno tre vocali e le stampa al rovescio.
 Ad esempio, se il file “testo.txt” contiene il testo:

bisogna studiare

Il programma visualizzerà il testo:

angosib eraiduts


(Input)	                                                            Expected
bisogna studiare passo e adagio per ottenere un voto alto           angosib eraiduts oigada erenetto

*/

#include<stdio.h>
#include<string.h>
#define FNAME "file/testo.txt"
#define MAXS 15
#define SOGLIA 3

int controllo_vocali (char s[MAXS+1]) {
    int count = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
            count++;
        }
    }

    if (count < 3) {
        return 0;
    } else {
        return 1;
    }
}

void inverti_stringa_e_stampa_stringa_invertita (char s[MAXS+1]) {
    int numero_caratteri_stringa = strlen(s);          // size_t strlen(const char *str);

    char stringa_inverita[MAXS+1];
    for (int i = 0, j = numero_caratteri_stringa - 1; s[i] != '\0'; i++, j--) {
        stringa_inverita[j] = s[i];
    }
    stringa_inverita[numero_caratteri_stringa] = '\0';
    printf("%s ", stringa_inverita);
}

int main(){
    int ok;
    FILE *fp;
    char p[MAXS+1];

    fp=fopen(FNAME,"r");

    do {
        fscanf(fp, "%s", p);

        ok = controllo_vocali(p);
        if (ok == 1) {
            inverti_stringa_e_stampa_stringa_invertita(p);
        }

    } while (!feof(fp));
}