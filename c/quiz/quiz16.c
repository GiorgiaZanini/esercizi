/*
Si scriva un sottoprogramma massimoLista
 che riceve in ingresso un puntatore ad una lista e
 restituisce il massimo tra i valori strettamente positivi contenuti nella lista,
 0 se la lista non contiene alcun valore positivo.
 Ad esempio, per una lista contenente la sequenza di interi 4 6 2 3 9 verra' restituito il valore 9.

For example:

Input	            Result
1 3 0 4 7 -1        7

*/

#include <stdio.h>
#include <stdlib.h>

/*definizione della struttura per la lista concatenata*/
typedef struct elem_{
    int num;
    struct elem_ *next;
} elem;

/*prototipi delle funzioni*/
elem* inserisciInCoda(elem*, int);
elem* distruggiLista(elem*);
int massimoLista(elem*);

int main(){
    int val;
    int r;
    elem* listav=NULL;

    scanf("%d", &val);
    while(val!=-1)
    {
        listav=inserisciInCoda(listav, val);
        scanf("%d", &val);
    }
    r=massimoLista(listav);
    printf("%d\n",r);

    listav=distruggiLista(listav);


    return 0;
}

/*inserisce un nuovo numero in coda alla lista*/
elem* inserisciInCoda(elem* lista, int num){
    elem *prec;
    elem *tmp;

    tmp = (elem*) malloc(sizeof(elem));
    if(tmp != NULL){
        tmp->next = NULL;
        tmp->num = num;
        if(lista == NULL)
            lista = tmp;
        else{
            /*raggiungi il termine della lista*/
            for(prec=lista;prec->next!=NULL;prec=prec->next);
            prec->next = tmp;
        }
    } else
        printf("Memoria esaurita!\n");
    return lista;
}

/*libera la memoria allocata per una lista*/
elem* distruggiLista(elem* lista){
    elem* tmp;
    while(lista!= NULL){
        tmp = lista;
        lista = lista->next;
        free(tmp);
    }
    return NULL;
}


int massimoLista (elem *testa) {
    elem *nodo_corrente = NULL;
    nodo_corrente = (elem *) malloc(sizeof(elem));
    if (nodo_corrente == NULL) {
        printf("\nerror\n");
        return -1;
    }

    nodo_corrente = testa;

    int max = 0;

    while (nodo_corrente != NULL) {
        if (nodo_corrente->num >= 0 && nodo_corrente->num > max) {
            max = nodo_corrente->num;
        }
        nodo_corrente = nodo_corrente->next;
    }
    return max;
}