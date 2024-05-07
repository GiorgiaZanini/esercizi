/* Si scriva un programma C che calcoli il quoziente della divisione tra interi x e y usando una funzione ricorsiva.
 Caso base: x < y, allora il quoziente è zero.
 Passo ricorsivo: il quozionte è 1 + il quoziente della divisione di (x-y) per y.
Il programma dovrà contenere anche una funzione leggi() richiede all’utente un intero non negativo (controllare l’input). 
Tale funzione sarà chiamata due volte all’interno della funzione main() per inizializzare x e y */

#include <stdio.h>

int leggi(void){
    int n;
    do{    
        scanf("%d", &n);
    }while(n<0);

    return n;
}

int quoziente(int x, int y){
    if(x<y){
        return 0;
    }else if(y==1){
        return x;
    }else{
        return (quoziente(1+(x-y), y));
    }
}

int main(){
    int x, y;
    int q;

    x = leggi();
    do{
        y = leggi();
    }while(y==0);

    q = quoziente(x, y);

    printf("%d", q);

    return 0;
}