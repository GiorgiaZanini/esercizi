/*
Si scriva un programma C che calcoli il quoziente della divisione tra interi x e y usando una funzione ricorsiva.
 Caso base: x < y, allora il quoziente è zero.
 Passo ricorsivo: il quozionte è 1 + il quoziente della divisione di (x-y) per y.

Il programma dovrà contenere anche una funzione leggi() richiede all’utente un intero non negativo (controllare l’input).
Tale funzione sarà chiamata due volte all’interno della funzione main() per inizializzare x e y.
*/

#include <stdio.h>

int leggi() {
    int n;
    do{
        scanf("%d", &n);
    }while(n < 0);
    return n;
}

int div(int x, int y) {
    if(x < y){
        return 0;
    } else {
        return 1 + div((x-y), y);
    }
}

int main() {
    int x, y;
    int ris;

    x = leggi();
    y = leggi();

    ris = div(x, y);

    printf("%d", ris);

return 0;
}