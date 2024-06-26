/*
Completare il programma con:

- la funzione stampa_lista per visualizzare una lista di interi
 (creata con inserimento in testa fino all'inserimento del valore -1 che non fa parte della lista).

- monotona
 che data la testa della lista restituisce -1 in caso di lista vuota, 1 se la lista è strettamente monotona crescente
 (cioè se ogni elemento è strettamente superiore al suo predecessore),
 0 negli altri casi.


For example:

Input	        Result
3 4 5 -1        5 4 3
                0

5 4 3 -1        3 4 5
                1

5 4 3 3 -1      3 3 4 5
                0

*/

#include <stdio.h>
#include <stdlib.h>


struct node_t{
    int numero;
    struct node_t * next;
};

typedef struct node_t node;

node* inserisciInTesta(node*, int);
void stampa_lista(node *);
int monotona(node *);

int main()
{
    int v;
    node *lista = NULL;
    scanf("%d",&v);
    while(v!=-1){
        lista=inserisciInTesta(lista,v);
        scanf("%d",&v);
    }
    stampa_lista(lista);
    printf("\n");
    int r = monotona(lista);
    printf("%d",r);
    return(0);
}

/*inserisce un nuovo numero in testa alla lista*/
node* inserisciInTesta(node* lista, int num){
    node *tmp;

    tmp = (node*) malloc(sizeof(node));
    if(tmp != NULL){
        tmp->numero = num;
        tmp->next = lista;
        lista = tmp;
    }
    return lista;
}


// -1 -> lista vuota
// 1 -> strettamente monotona crescente
// 0 -> altri casi
int monotona (node *testa) {
    if (testa == NULL) {
        return -1;
    }

    node *nodo_corrente = testa;

    while (nodo_corrente->next != NULL) {
        if ((nodo_corrente->numero) >= ((nodo_corrente->next)->numero)) {
            return 0;
        }
        nodo_corrente = nodo_corrente->next;
    }

    return 1;
}

void stampa_lista (node *testa) {
    if (testa == NULL) {
        return;
    }

    node *nodo_corrente = testa;

    while (nodo_corrente != NULL) {
        printf("%d ", nodo_corrente->numero);
        nodo_corrente = nodo_corrente->next;
    }
}