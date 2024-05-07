#include <stdio.h>
#define D 10

void leggi(int *, int); //per passare l'array usare il puntatore
void stampa(int *, int);
int somma(int *, int);

int main(){
    int n[D];
    int s;

    leggi(n, D);    //per passare l'array -> nome solo dell'array (n)
                    //D -> per passare la dimensione dell'array
    stampa(n, D);

    s = somma(n, D/* /2 */); 

return 0;    
}

void leggi(int a[], int dim){
    int i;

    for(i = 0; i < dim; i++){
        scanf("%d", &a[i]);
    }
}

void stampa(int *a, int dim){
    int i;

    for(i = 0; i < dim; i++){
        printf("%d", a[i]);
    } 
}

int somma(int a[], int dim){
    int i, count = 0;

    for(i = 0; i < dim; i++){
        count += a[i];
    }

    return count;
}