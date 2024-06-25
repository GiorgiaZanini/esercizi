/*

Completare il programma scrivendo le seguenti funzioni:
• anagramma che date in ingresso due stringhe restituisce 1 se le due stringhe sono una l’anagramma 
(gli stessi caratteri ma in posizioni anche diverse) dell’altra, 0 altrimenti.

• dimmianagrammi che riceve in ingresso una stringa contenente un vocabolo restituisce il numero di vocaboli presenti nel file di testo dizionario.txt 
che sono anagrammi della stringa in ingresso. 
I vocaboli presenti nel dizionario sono di al più 25 caratteri, uno per riga. 
Nel caso in cui ci siano problemi di accesso al file, il sottoprogramma restituisce -1.

Per esempio, se il sottoprogramma riceve in ingresso la stringa mira e il file dizionario.txt contiene i vocaboli ammira armi mari miramira rami rima la funzione restituisce 4.


miramira    1
*/

#include <stdio.h>
#define DIM 25

/*prototipi delle funzioni*/
int anagramma(char*, char*);
int dimmianagrammi(char*);

int main(){
    char str[DIM+1];
	int num;
	
	scanf("%s",str);
	num=dimmianagrammi(str);
	printf("%d",num);
}


int anagramma(char *s1, char *s2){
    int i, j;
    int lettere[26] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

    for (i = 0; s1[i] != '\0'; i++);
    for (j = 0; s2[j] != '\0'; j++);
    if (i != j) {
        return 0;
    }

    for (i = 0; s1[i] != '\0'; i++) {       // scorro la stringa    (faccio il contrllo del terminatore solo sulla prima stringa perché hanno la stessa dimensione)
        for (j = 0; j < 26; j++) {       // scorro l'array
            if (s1[i] == j+'a') {
                lettere[j] ++;
            }
            if (s2[i] == j+'a') {
                lettere[j] --;
            }
        }
    }

    for (j = 0; j < 26; j++) {
        if (lettere[j] != 0) {
            return 0;
        }
    }

    return 1;
}

int dimmianagrammi(char *str1){
    FILE *f;
    int a;
    int count = 0;
    char sf[26];
    f = fopen("/home/giorgia/CLionProjects/esercizi/c/file/dizionario.txt", "r");
    if (f == NULL) {
        return -1;
    } 

    do {
        fscanf(f, "%s", sf);
        a = anagramma(str1, sf);
        count += a;
    } while (!feof(f));

    return count;
}