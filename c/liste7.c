/*
gestione di lista non ordinata

 *  struct list t *new_list ()
 crea una nuova lista, inizialmente vuota

 *  void insert_on head (struct list_t *list int value)
 inserisce il numero value in testa alla lista list

 *  void print (struct list_t *list)
 stampa, procedendo dalla testa verso la coda, il contenuto della lista list

 *  void check_malloc (void *p); // Funzione di utilità
 *      if (p == NULL) {
 *          printf ("Could not allocate memory!\n");
 *          exit(-1);
 *      }
 *  }



 * void insert on _tail (struct list t *list, int value)
 inserisce il numero value in coda alla lista list

 * bool contains (struct list_t *list, int value)
 verifica se il numero value è presente nella lista list O

 * void remove from list (struct list t *list, int value)
 elimina il nodo della lista list contenente il valore value
 NB: la lista può contenere valori duplicati, in questo caso uno solo dei nodi deve essere eliminato O

 * void empty list (struct list t *list)
 svuota l'intera lista list

 * void free list (struct list t *list)
 svuota l'intera lista list e poi rimuove list
*/

#include <stdio.h>
#include <stdlib.h>

struct list t *new_list ()

int main () {

}