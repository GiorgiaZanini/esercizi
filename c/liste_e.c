/*
Dato il seguente tipo

    struct list {
        int val;
        struct list *next;
    };

Definire la funzione RICORSIVA   int liste_uguali(struct list * L1, struct list * L2)   seguente:
 la funzione deve restituire 1 se e solo se le liste hanno lo stesso numero di nodi,
 e l'i-esimo nodo della lista L1 contiene lo stesso valore (campo val) dell'i-esimo nodo della lista L2.
*/

#include <stdio.h>
#include <stdlib.h>

struct list {
    int val;
    struct list *next;
};

int conta_nodi (struct list * testa) {
    struct list * nodo_corrente = testa;
    int i;

    for (i = 0; nodo_corrente != NULL; i++) {
        nodo_corrente = nodo_corrente->next;
    }

    return i;
}

// 1 -> hanno lo stesso numero di nodi,
//      i-esimo nodo contiene lo stesso valore in L1 e L2
int liste_uguali (struct list * L1, struct list * L2) {
    int numero_nodi_1 = conta_nodi(L1);
    int numero_nodi_2 = conta_nodi(L2);

    if (numero_nodi_1 != numero_nodi_2)
        return 0;

    struct list * nodo_corrente_1 = L1;
    struct list * nodo_corrente_2 = L2;

    while (nodo_corrente_1 != NULL) {
        if (nodo_corrente_1->val != nodo_corrente_2->val) {
            return 0;
        }
        nodo_corrente_1 = nodo_corrente_1->next;
        nodo_corrente_2 = nodo_corrente_2->next;
    }

    return 1;
}

struct list * crea_lista (struct list * testa, int valore) {
    struct list * nuovo_nodo = NULL;
    nuovo_nodo = (struct list *) malloc(sizeof(struct list));
    if (nuovo_nodo == NULL) {
        printf("errore nell'allocazione della memoria");
    }

    nuovo_nodo->val = valore;

    if (testa == NULL) {
        testa = nuovo_nodo;
        return testa;
    }

    struct list * nodo_corrente = testa;

    while (nodo_corrente->next != NULL) {
        nodo_corrente = nodo_corrente->next;
    }

    nodo_corrente->next = nuovo_nodo;

    return testa;
}

int main () {
    struct list *testa_L1 = NULL;
    struct list *testa_L2 = NULL;
    int n;

    printf("inserisci i valori della prima lista\n");

    scanf("%d", &n);
    while (n >= 0) {
        testa_L1 = crea_lista(testa_L1, n);
        scanf("%d", &n);
    }


    printf("inserisci i valori della seconda lista\n");

    scanf("%d", &n);
    while (n >= 0) {
        testa_L2 = crea_lista(testa_L2, n);
        scanf("%d", &n);
    }

    int uguali = liste_uguali(testa_L1, testa_L2);

    if (uguali == 1) {
        printf("le liste sono uguali (1)");
    } else {
        printf("le liste non sono uguali (0)");

    }

    return 0;
}