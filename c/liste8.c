#include <stdio.h>
#include <stdlib.h>
#define DIM 10

typedef struct list {
    int val;
    struct list *next;
} list;

struct list * inserisci_in_testa (struct list *testa, int n) {
    if (testa == NULL) {

        testa = (struct list *) malloc(sizeof(struct list));
        if (testa == NULL) {
            printf("errore nell'allocazione del nodo\n");
            return testa;
        }

        testa->val = n;
        testa->next = NULL;

        return testa;
    }

    struct list *nodo_da_aggiungere = NULL;
    nodo_da_aggiungere = (struct list *) malloc(sizeof(struct list));
    if (nodo_da_aggiungere == NULL) {
        printf("errore nell'allocazione del nodo\n");
        return testa;
    }

    nodo_da_aggiungere->val = n;
    nodo_da_aggiungere->next = testa;

    return nodo_da_aggiungere;
}

struct list * inserisci_in_coda (struct list *testa, int n) {
    if (testa == NULL) {

        testa = (struct list *) malloc(sizeof(struct list));
        if (testa == NULL) {
            printf("errore nell'allocazione del nodo\n");
            return testa;
        }

        testa->val = n;
        testa->next = NULL;

        return testa;
    }

    struct list *nodo_corrente = testa;
    while (nodo_corrente->next != NULL) {
        nodo_corrente = nodo_corrente->next;
    }

    struct list *nodo_da_aggiungere = NULL;
    nodo_da_aggiungere = (struct list *) malloc(sizeof(struct list));
    if (nodo_da_aggiungere == NULL) {
        printf("errore nell'allocazione del nodo\n");
        return testa;
    }
    nodo_da_aggiungere->val = n;
    nodo_da_aggiungere->next = NULL;

    nodo_corrente->next = nodo_da_aggiungere;

    return testa;
}

void print_list (struct list *testa) {
    struct list *nodo_corrente = testa;

    while (nodo_corrente != NULL) {
        printf("%d ", nodo_corrente->val);
        nodo_corrente = nodo_corrente->next;
    }
}

struct list * inserimento_ordinato (struct list *testa, int numero_da_inserire) {
    if (testa == NULL) {
        testa = (struct list *) malloc(sizeof(struct list));
        if (testa == NULL) {
            printf("errore nell'allocazione del nodo\n");
            return testa;
        }

        testa->val = numero_da_inserire;
        testa->next = NULL;

        return testa;
    }

    struct list *nodo_da_aggiungere = NULL;
    nodo_da_aggiungere = (struct list *) malloc(sizeof(struct list));
    if (nodo_da_aggiungere == NULL) {
        printf("errore nell'allocazione del nodo\n");
        return testa;
    }
    nodo_da_aggiungere->val = numero_da_inserire;

    struct list *nodo_corrente = testa;
    while ((nodo_corrente->next->val < numero_da_inserire) && (nodo_corrente->next != NULL)) {
        nodo_corrente = nodo_corrente->next;
    }

    nodo_da_aggiungere->next = nodo_corrente->next;
    nodo_corrente->next = nodo_da_aggiungere;

    return testa;
}

struct list * eliminazione_nodo (struct list *testa, int numero_da_eliminare) {
    if (testa == NULL) {
        return testa;
    }

    struct list *nodo_da_eliminare = NULL;
    struct list *nodo_corrente = testa;

    while ((nodo_corrente->next->val != numero_da_eliminare) && (nodo_corrente->next != NULL)) {
        nodo_corrente = nodo_corrente->next;
    }

    nodo_da_eliminare = nodo_corrente->next;
    nodo_corrente->next = nodo_corrente->next->next;
    free(nodo_da_eliminare);

    return testa;
}

void free_list (struct list *testa) {
    struct list *nodo_da_cancellare = NULL;

    while (testa != NULL) {
        nodo_da_cancellare = testa;
        testa = testa->next;
        free(nodo_da_cancellare);
    }
}

int main() {
    int array[DIM] = {2, 9, 0, 1,6,7,3, 4, 8, 5};
    int array2[DIM] = {2, 9, 0, 1,6,7,3, 4, 8, 5};

    int array3[DIM-1] = {0,1,2,4,5,6,7,8,9};
    int array4[DIM+1] = {0,1,2,3,3,4,5,6,7,8,9};
    int array5[DIM+1] = {0,1,2,3,3,4,5,6,7,8,9};

/*
    for (int i = 0; i < DIM; i++) {
        scanf("%d", &array[i]);
    }
*/

    // inserimento in testa
    struct list *testa = NULL;
    for (int i = 0; i < DIM; i++) {
        testa = inserisci_in_testa(testa, array[i]);
    }

    // inserimento in coda
    struct list *testa2 = NULL;
    for (int i = 0; i < DIM; i++) {
        testa2 = inserisci_in_coda(testa2, array2[i]);
    }

    print_list(testa);
    printf("\n");
    print_list(testa2);


    // da lista già ordinata, inserimento ordinato di un numero
    struct list *testa3 = NULL;
    for (int i = 0; i < DIM-1; i++) {
        testa3 = inserisci_in_coda(testa3, array3[i]);
    }

    printf("\n");
    print_list(testa3);
    int numero_da_inserire = 3;
//    scanf("%d", &numero_da_inserire);
    testa3 = inserimento_ordinato(testa3, numero_da_inserire);
    printf("\n");
    print_list(testa3);


    // eliminazione di un nodo, dato un numero
    struct list *testa4 = NULL;
    for (int i = 0; i < DIM-1; i++) {
        testa4 = inserisci_in_coda(testa4, array4[i]);
    }
    printf("\n");
    print_list(testa4);
    int numero_da_rimuovere = 3;
//    scanf("%d", &numero_da_rimuovere);
    testa4 = eliminazione_nodo(testa4, numero_da_rimuovere);
    printf("\n");
    print_list(testa4);


    // eliminazione di tutti i nodi che contengono un dato numero
    // ordinamento lista

    free_list(testa);
    free_list(testa2);
    free_list(testa3);
    free_list(testa4);

    return 0;
}