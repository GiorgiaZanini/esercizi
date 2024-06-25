/*
Completare la definizione delle funzioni presenti nel programma. 
Data una stringa letta da tastiera, che si suppone non vuota e che contiene solo le lettere A, C, G e T (non serve correggere gli errori), definire le funzioni: 

- string_to_list(), 
 che restituisce una lista che rappresenta la stringa, 
 dove i nodi della lista contengono una lettera e il numero di volte che appaiono consecutivamente nella stringa di partenza.

- lista print_list(), 
 che stampa le sequenze di lettere uguali separate da uno spazio.

Per esempio, se la stringa inserita da tastiera è "AAAAGGCCCCAAATTTTTGGG", il programma stampa a video AAAA GG CCCC AAA TTTTT GGG
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 80

struct node_t {
    char c;
    int count;
    struct node_t *next;
};

struct node_t *string_to_list();
void print_list(struct node_t *head);
struct node_t *insert_on_tail(struct node_t *head, char c, int value);

int main() {
    char s[MAX_LENGTH + 1];
    scanf("%80s", s);

    struct node_t *head = string_to_list(s);
    print_list(head);
    return 0;
}

struct node_t *string_to_list(char *s) {
    int count = 1;
    struct node_t *head = NULL;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] != s[i+1]) {
            head = insert_on_tail(head, s[i], count);
            count = 0;
        }
        count++;
    }
    return head;
}

struct node_t *insert_on_tail(struct node_t *head, char c, int value) {
    struct node_t *node = (struct node_t *)malloc(sizeof(struct node_t));
    if (node == NULL) {
        printf("error");
    }
    node->c = c;
    node->count = value;
    node->next = NULL;

    if (head == NULL) {
        head = node;
    } else {
        struct node_t *current = head;

        while (current->next != NULL) {
            current = current->next;
        }
        current->next = node;
    }
    return head;
}

void print_list(struct node_t *head) {
    while (head != NULL) {
        for (int i = 0; i < head->count; i++) {
            printf("%c", head->c);
        }
        printf(" ");
        head = head->next;
    }
}
