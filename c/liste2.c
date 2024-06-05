/*
Sia data una lista i cui nodi sono definiti tramite la seguente struttura C:

    struct nodo{
        int valore;
        struct nodo *next;
    };

Scrivere due funzioni C RICORSIVE che ricevendo in ingresso un puntatore alla lista:
 (1) stampano la lista e
 (2) contano quanti multipli di 3 sono presenti nella lista.

NB: per testare il programma, scrivere la funzione inserisci in testa per creare una lista con 10 valori.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int valore;
    struct node *next;
} nodo;

nodo * inserisci_in_testa (nodo * lista, int valore) {      // lista --> puntatore al primo nodo della lista
    nodo * testa = NULL;    //nodo tmp

    testa = (nodo*) malloc(sizeof(nodo));       // alloco spazio memoria grande "nodo", a cui punta il puntatore temporaneo "testa"

    if (testa != NULL) {

        testa->valore = valore;     // partendo dallo spazio a cui punta testa (il nuovo nodo creato)   ->
                                    // valore (all'intereno del nodo) = valore (passato come parametro)

        testa->next = lista;        // partendo dallo spazio a cui punta testa (il nuovo nodo creato)   ->
                                    // all'interno del nodo c'è il puntatore "next"
                                    // quindi   "next" è uguale al puntatore che punta al primo nodo della lista ("lista")

        lista = testa;      // ora che ho un puntatore che punta al primo nodo della lista
                            // posso modificare il primo puntatore
                            // e farlo putere al nodo creato, sostituendo così quello a cui puntava prima
    }

    return lista;
}

void stampa (nodo *p) {
    if (p == NULL) {
        return;
    } else {
        printf("Valore nodo lista: %d\n", (*p).valore);
        printf("Valore nodo lista: %d\n\n", p->valore);

        return stampa(p->next);
    }
}

void free_lista (nodo * testa) {
    nodo *tmp;

    while (testa != NULL) {
        tmp = testa;
        testa = testa->next;
        free(tmp);
    }
}

int conta_multipli (nodo *p) {
    if (p == NULL) {
        return 0;
    } else {
        if (p->valore % 3 == 0) {
            return 1 + conta_multipli(p->next);
        } else {
            return 0 + conta_multipli(p->next);
        }
    }
}

int main() {
    nodo *p = NULL;
    int valori[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i = 0; i < 10; i++) {
        p = inserisci_in_testa(p, valori[i]);
    }

    stampa(p);
    int multipli = conta_multipli(p);

    printf("\nnumero multipli di 3: %d\n", multipli);

    free_lista(p);
    return 0;

}