/*
Si consideri una lista dinamica di interi, i cui elementi sono del tipo definito come di seguito riportato:

    typedef struct El {
        int dato1;
        int dato2;
        struct El *next;
    } ELEMENTO;

Si codifichi in C le funzioni contamultipli e multiplo.

La funzione contamultipli
 riceve come parametro la testa della lista e
 restituisce il numero di elementi della lista che hanno il primo valore numerico (dato1) multiplo del secondo (dato2).
 Se la lista è vuota, la funzione restituisce il valore -1.

Per verificare se un valore intero è multiplo di un altro la funzione deve richiamare la funzione ricorsiva multiplo definita dallo studente.
*/

#include <stdio.h>
#include <stdlib.h>
#define DIM_LISTA 3     // dimendione per il for per creare la lista

typedef struct el {
    int dato1;
    int dato2;
    struct el *next;
} elemento;

elemento* inserisci_in_testa (int dato1, int dato2, elemento *lista) {
    elemento *testa = NULL;

    testa = (elemento*) malloc(sizeof(elemento));

    if (testa == NULL) {
        printf("\n\nerrore nell'accocazione della memoria\n");
        return lista;
    }

    testa -> dato1 = dato1;
    testa -> dato2 = dato2;
    testa -> next = lista;
    lista = testa;

    return lista;
}

int multiplo(int dato1, int dato2) {
    if (dato1 >= dato2) {
        return multiplo(dato2-dato1, dato2);
    } else {
        if (dato1 == 0) {
            return 1;
        } else {
            return 0;
        }
    }
}

int conta_multipli (elemento *testa) {
    if (testa->next == NULL) {
        return -1;
    }

    int multipli = 0;
    elemento *tmp = testa;
    while (tmp != NULL) {
        multipli += multiplo(tmp->dato1, tmp->dato2);
        tmp = tmp->next;
    }

    return multipli;
}

void stampa_lista2 (elemento *lista) {
    elemento *tmp = lista;
    while (tmp != NULL) {
        printf("\ndato1: %d\ndato2: %d\n", tmp->dato1, tmp->dato2);
        tmp = tmp->next;
    }
}

void stampa_lista (elemento *lista) {
    if (lista != NULL) {
        printf("\ndato1: %d\ndato2: %d\n", lista->dato1, lista->dato2);
        return stampa_lista(lista->next);
    } else {
        return;
    }
}

void free_lista (elemento *lista) {
    elemento *tmp = lista->next;
    if (tmp != NULL) {
        free(lista);
        return free_lista(tmp);
    }
    return;
}

int main () {
    elemento *p = NULL;
    int multipli;

    int a, b;
    for (int i = 0; i < DIM_LISTA; i++) {
        printf("\ninserisci dato1: ");
        scanf("%d", &a);
        printf("\ninserisci dato2: ");
        scanf("%d", &b);

        p = inserisci_in_testa(a,b,p);
    }

    stampa_lista2(p);
    multipli = conta_multipli(p);
    printf("\n\n numero multipli: %d", multipli);
    free_lista(p);

}