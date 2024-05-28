#include <stdio.h>
#include <stdlib.h>

typedef struct nodo{    //tipo
    int num;
    struct nodo *next;
}elem;  //tipo -> nome abbreviato di struct nodo

elem * inserisci_in_testa (elem * lista, int n) {
    elem * tmp;
    tmp = (elem *) malloc(sizeof (elem));
    if (tmp != NULL){
        tmp -> num = n;
        tmp -> next = lista;
        lista = tmp;
    }
    return lista;
}

void visualizza (elem * l) {
    while (l != NULL) {
        printf("%3d", l -> next);
        l = l -> next;
    }
}

elem * distruggi (elem * l){
    elem * tmp;
    while (l != NULL) {
        tmp = l;
        l = l -> next;
        free(tmp);
    }
}

int esiste (elem * lista, int n){
    int flag = 0;
    while (lista != NULL && !flag){
        if (lista -> num == n) {
            flag = 1;
        }
        lista = lista -> next;
    }
    return flag;
}

int esister (elem * lista, int n) {
    if (lista == NULL) {
        return 0;
    }
    if (lista -> num == n) {
        return 1;
    }
    return esister(lista -> next, n);
}

int main () {
    int num;
    elem *lista = NULL;

    scanf("%d", &num);
    while (num > 0) {

        while (num > 0) {
            lista = inserisci_in_testa (lista, num%10);
            num = num/10;
        }
        visualizza(lista);
        * lista = distruggi(lista);

        scanf("%d", &num);
    }
}