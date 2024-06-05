/*
Si completi il file (skeleton) ESI_20062018_A_1.c di modo che:

¢ la funzione crea_lista riceve in input una stringa, converte la stringa in una lista di caratteri e restituisce il puntatore alla testa della lista.
 La struttura struct node_t deve essere utilizzata come definizione dei nodi della lista.

¢ la funzione stampa_lista stampa la lista in input.
¢ la funzione raddoppia_vocali riceve in input una lista (il puntatore al
primo nodo) e raddoppia i nodi della lista che contengono delle vocali.
L’output del programma é il seguente:
la mia stringa
laa miiaa striingaa
NOTA: Lo studente NON deve ges*re la deallocazione della lista.
*/

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

struct node_t {
    char value;
    struct node_t* next;
};

struct node_t* crea_lista(char* s);
void raddoppia_vocali(struct node_t* head);
void stampa_lista(struct node_t* n);

int main() {
    char s[] = "la mia stringa";
    printf("start crea_lista\n");
    struct node_t* head = crea_lista(s);
    stampa_lista(head);
    raddoppia_vocali(head);
    stampa_lista(head);
    return 0;
}



/*
 *  N1
 *  N2
 *  N1.next = N2
 *
 */
struct node_t* crea_lista (char* s) {
    // Creao nodo N0, la testa della lista
    struct node_t *testa_della_lista = NULL;
    testa_della_lista = (struct node_t*) malloc(sizeof(struct node_t));
    if (testa_della_lista != NULL) {
        testa_della_lista->value = s[0];
        testa_della_lista->next = NULL;     // metto lista->next a NULL per segnare che per ora è l'ultimo nodo della lista
    }

    // Creao il resto della lista, da N1 a Nx
    struct node_t *nuovo_nodo_da_aggiungere = NULL;
    struct node_t *ultimo_nodo_della_lista = testa_della_lista;

    for (int i = 1; s[i] != '\0'; i++) {
        nuovo_nodo_da_aggiungere = (struct node_t*) malloc(sizeof(struct node_t));
        if (nuovo_nodo_da_aggiungere != NULL) {
            nuovo_nodo_da_aggiungere->value = s[i];
            nuovo_nodo_da_aggiungere->next = NULL;
        }

        ultimo_nodo_della_lista->next = nuovo_nodo_da_aggiungere;
        ultimo_nodo_della_lista = nuovo_nodo_da_aggiungere;
    }

    return testa_della_lista;
}

void stampa_lista(struct node_t* n) {
    struct node_t* tmp = n;
    while (tmp != NULL) {
        printf(" %c", tmp->value);
        tmp = tmp->next;
    }
    printf("\n");
}

/*  N0 = l -> N1 = a -> N2 = ' '
 *                                                      (N1->next) = N1.5       (N1->next)->next == N1.5->next = N2
 *                                  N1->next            N1->next->next
 *
*                       --
 *  N0 = l ->       N1 = a ->               N1.5 = a ->                 N2 = ' '
 *                  nodo_corrente           nodo_corrente->next         nodo_corrente->next->next
 *
 */
void raddoppia_vocali(struct node_t* head) {
    struct node_t* nodo_corrente = head;
    struct node_t* nuovo_nodo = NULL;

    while (nodo_corrente != NULL) {
        printf("lettera corrente: %c\n", nodo_corrente->value);
        if (nodo_corrente->value == 'a' || nodo_corrente->value == 'i') {
            nuovo_nodo = (struct node_t*) malloc(sizeof(struct node_t));

            if (nuovo_nodo != NULL) {
                nuovo_nodo->value = nodo_corrente->value;
                nuovo_nodo->next = nodo_corrente->next;
                nodo_corrente->next = nuovo_nodo;
                nodo_corrente = nodo_corrente->next->next;
            }
        } else {
            nodo_corrente = nodo_corrente->next;
        }
    }

}