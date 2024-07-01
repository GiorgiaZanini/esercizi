/*
Completare il programma definendo il sottoprogramma crealista
 che riceve in ingresso una stringa (chiamata str) e un carattere (chiamato sep).

 La stringa str è senz’altro composta da più sequenze di cifre (’0’, ..., ’9’)
 separate da una singola occorrenza del carattere sep (si assuma che la stringa sia ben formata).
 Il sottoprogramma crea e restituisce una lista di interi strettamente positivi (str non contiene il carattere ’-’)
 in cui ciascun elemento della lista contiene un valore intero corrispondente ad una sequenza di cifre presenti nella stringa str.

 Non è consentito modificare la stringa di ingresso. Esempio: ingressi: str: ”132,34,9121,1,29” (sep: ’,’)  uscita: 132−>34−>9121−>1−>29

For example:

Input	                Result
132,34,9121,1,29        132 -> 34 -> 9121 -> 1 -> 29

1,2,3                   1 -> 2 -> 3

*/

#include <stdio.h>
#include <stdlib.h>
#define SEP ','
#define DIM 50
/*definizione della struttura per la lista concatenata*/
typedef struct elem_{
    int num;
    struct elem_ *next;
} elem;

/*prototipi delle funzioni*/
elem* crealista(char*, char);
void visualizza(elem*);

elem* inserisci_in_coda (int, elem*);

int main(){
    char str[DIM+1];
    elem* lista;

    scanf("%s",str);
    lista=crealista(str,SEP);
    visualizza(lista);
}


/* visualizza i numeri contenuti nella lista */
void visualizza(elem* lista){
    while(lista != NULL){
        if(lista->next != NULL)
            printf("%d -> ", lista->num);
        else printf("%d", lista->num);
        lista = lista->next;
    }
    printf("\n");
}

/* analizza la stringa e inserisce un nuovo numero in coda alla lista */
// crea e restituisce una lista di interi strettamente positivi
// in cui ciascun elemento della lista contiene un valore intero corrispondente ad una sequenza di cifre presenti nella stringa str.
elem* crealista(char *str, char sep){

    elem *testa = NULL;

    int numero_da_inserire_nel_nodo = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (i == 0) {
            numero_da_inserire_nel_nodo = ((int) str[i]) - '0';
        } else {
            if (str[i-1] == sep){
                numero_da_inserire_nel_nodo = (int) str[i] - '0';
            } else {
                numero_da_inserire_nel_nodo *= 10;
                numero_da_inserire_nel_nodo += (int) str[i] - '0';
            }
        }

        if (str[i+1] == sep) {
//            printf("%d ", numero_da_inserire_nel_nodo);
            testa = inserisci_in_coda(numero_da_inserire_nel_nodo, testa);
            numero_da_inserire_nel_nodo = 0;
            i++;
        }
        if (str[i+1] == '\0') {
//            printf("%d ", numero_da_inserire_nel_nodo);
            testa = inserisci_in_coda(numero_da_inserire_nel_nodo, testa);
            numero_da_inserire_nel_nodo = 0;
        }
    }

    return testa;
}

elem* inserisci_in_coda (int n, elem *testa) {
//    printf("%d\n", n);
    elem *nodo_corrente = testa;
    elem *nodo_da_aggiungere = NULL;
    nodo_da_aggiungere = (elem*) malloc(sizeof(elem));
    if (nodo_da_aggiungere == NULL) {
        printf("\nerrore nella creazione del nodo\n");
    }

    nodo_da_aggiungere->num = n;
    nodo_da_aggiungere->next = NULL;
//    printf("nodo %p\n", nodo_da_aggiungere);

    if (testa == NULL) {
        testa = nodo_da_aggiungere;
//        printf("testa\n");
    } else {
        while (nodo_corrente->next != NULL) {
            nodo_corrente = nodo_corrente->next;
        }

        nodo_corrente->next = nodo_da_aggiungere;
    }
    return testa;
}



// n0 -> n1 -> n2 -> x
//             n2 -> n3



