/*Scrivere una funzione che riceve come parametri due stringhe s1 e s2 e due indici i e j, e copia in s2 la sottostringa di s1 che va dal carattere i-esimo al carattere j-esimo. 
Ad esempio, se s1 fosse "altalena', i fosse 2 e j fosse 5, in s2 dovrebbe essere inserita la stringa "'tale". 
Scrivere poi un programma che usa la funzione scritta. 
Nota: nello scrivere la funzione si assuma che s2 sia lunga almeno quanto s1 e che gli indici siano validi.*/

#include <stdio.h>
#define D 40

int sottostringa(char *s1, char *s2, int i, int j){
    int index = 0;

    for(int k = i; k <= j; k++){
        s2[index] = s1[k];
        index++;
    }

    s2[index] = '\0';
}

int main(){
    char s1[D+1], s2[D+1];
    int i, j;

    printf("inserisci una stringa: ");
    scanf("%s", s1;);

    printf("inserisci due indici: ");
    scanf("%d %d", i, j;);

    sottostringa(s1, s2, i, j);
    printf("%s", s2);

return 0;
}