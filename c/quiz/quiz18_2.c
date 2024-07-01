/*
Completare il programma definendo:

- il sottoprogramma parola_valida
 che prende in input una stringa, un intero n ed un intero k e
 restituisce 1 se la stringa ricevuta in ingresso è lunga almeno n caratteri e contiene almeno k cifre (caratteri numerici), 0 altrimenti.

- il sottoprogramma conta_valide
 che riceve in ingresso un intero n ed un intero k,
 apre il file "origine.txt" che contiene un insieme di parole, e
 restituisce il numero delle parole valide (ovvero che contengono almeno n caratteri e almeno k cifre).

Le parole presenti nel file di origine sono di al più 25 caratteri, una per riga.
Nel caso in cui ci siano problemi di accesso al file, il sottoprogramma restituisce -1.

Per esempio, se il sottoprogramma riceve in ingresso 8 e 2, ed il file origine.txt contiene le parole:
 ammirato programmazione1 programmazione23 val1d023 il sottoprogramma stampa 2 (sono valide le parole programmazione23 e val1d023).

For example:

Input	Result
8 2     2

*/

#include <stdio.h>
#define DIM 25

/*prototipi delle funzioni*/
int parola_valida(char*,int,int);
int conta_valide(int,int);

int main(){
    int num;
    int ncar, ncifre;
    scanf("%d",&ncar);
    scanf("%d",&ncifre);
    num=conta_valide(ncar,ncifre);
    printf("%d\n",num);

}


// 1 -> lunga almeno n caratteri
//      contiene almeno k cifre
// 0 -> altrimenti
int parola_valida(char *s1, int n, int k){
    int i, count = 0;
    for (i = 0; s1[i] != '\0'; i++) {
        if (s1[i] >= '0' && s1[i] <= '9') {
            count++;
        }
    }

    if (i < n || count < k) {
        return 0;
    }
    return 1;
}

// apre il file "origin.txt"
// restituisce il numero delle parole valide (parola_valida)
int conta_valide(int n, int k){
    FILE *f = NULL;
    char s[DIM+1];
    int valida, count = 0;

    f = fopen("file/origin.txt", "r");
    if (f == NULL) {
        return -1;
    }

    while (fscanf(f, "%s", s) == 1) {
        valida = parola_valida(s, n, k);
        if (valida == 1) {
            count++;
        }
    }

    fclose(f);

    return count;
}


/*

int incrementa (int* a) {
    a = a+1;
    return 1; //successo
}

int test () {
    int a = 0;

    if (incrementa(a) == 1) {
        a = incrementa(a);
        return a;
    }


}

 */