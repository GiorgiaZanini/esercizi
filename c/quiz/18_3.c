#include <stdio.h>
#include <stdlib.h>
#define SEP ','
#define DIM 50

/* Definizione della struttura per la lista concatenata */
typedef struct elem_{
    int num;
    struct elem_ *next;
} elem;

/* Prototipi delle funzioni */
elem* crealista(char*, char);
void visualizza(elem*);
elem* inserisci_in_coda (int, elem*);

int main() {
    char str[DIM+1];
    elem* lista;

    scanf("%s", str);
    lista = crealista(str, SEP);
    visualizza(lista);

    // Liberazione della memoria
    elem* temp;
    while (lista != NULL) {
        temp = lista;
        lista = lista->next;
        free(temp);
    }

    return 0;
}

/* Visualizza i numeri contenuti nella lista */
void visualizza(elem* lista) {
    while (lista != NULL) {
        if (lista->next != NULL)
            printf("%d -> ", lista->num);
        else
            printf("%d", lista->num);
        lista = lista->next;
    }
    printf("\n");
}

/* Analizza la stringa e inserisce un nuovo numero in coda alla lista */
// Crea e restituisce una lista di interi strettamente positivi
// in cui ciascun elemento della lista contiene un valore intero corrispondente ad una sequenza di cifre presenti nella stringa str.
/*elem* crealista(char *str, char sep) {
    elem *testa = NULL;

    int numero_da_inserire_nel_nodo = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != sep) {
            numero_da_inserire_nel_nodo *= 10;
            numero_da_inserire_nel_nodo += (int) (str[i] - '0');
        }

        if (str[i] == sep || str[i+1] == '\0') {
            testa = inserisci_in_coda(numero_da_inserire_nel_nodo, testa);
            numero_da_inserire_nel_nodo = 0;
        }
    }

    return testa;
}*/

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

        if (str[i+1] == sep || str[i+1] == '\0') {
            inserisci_in_coda(numero_da_inserire_nel_nodo, testa);
            numero_da_inserire_nel_nodo = 0;
            i++;
        }
    }

    return testa;
}

elem* inserisci_in_coda(int n, elem *testa) {
    elem *nodo_corrente = testa;
    elem *nodo_da_aggiungere = (elem*) malloc(sizeof(elem));
    if (nodo_da_aggiungere == NULL) {
        printf("\nerrore nella creazione del nodo\n");
        return testa; // Restituisci la lista invariata in caso di errore
    }

    nodo_da_aggiungere->num = n;
    nodo_da_aggiungere->next = NULL;

    if (testa == NULL) {
        // La lista è vuota, il nuovo nodo diventa la testa
        testa = nodo_da_aggiungere;
    } else {
        // Trova l'ultimo nodo
        while (nodo_corrente->next != NULL) {
            nodo_corrente = nodo_corrente->next;
        }
        // Aggiungi il nuovo nodo in coda
        nodo_corrente->next = nodo_da_aggiungere;
    }
    return testa;
}
