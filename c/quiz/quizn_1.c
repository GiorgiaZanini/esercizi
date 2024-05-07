/*Si definisce bisottratto un numero intero positivo che gode delle seguenti due proprietà:

formato da almeno 3 cifre;
a partire dalla terza cifra meno significativa, ogni cifra deve essere pari alla differenza in valore assoluto delle due cifre precedenti (precedenti nel senso di meno significative).

Scrivere un sottoprogramma generabisottratto che riceve in ingresso tre parametri c0, c1 e dim (senz’altro coerenti):

c0: come cifra meno significativa
c1: come penultima cifra meno significativa 
dim: numero di cifre
e restituisce il numero bisottratto. 

Se non esiste alcun numero bisottratto con le caratteristiche richieste (c0, c1 e dim) il sottoprogramma restituisce −1. 
Se, per esempio, passo 3, 6, 5, non "arrivo" alla dimensione richiesta.



For example:

Input	Result
2 5 5   12352

3 0 4   3303        */



#include <stdio.h>
#define BASE 10
#define ERROR -1

int generabisottratto(int c0, int c1, int dim);

int main(){
    int c0;
    int c1;
    int dim;
    int r;
    scanf("%d", &c0);
    scanf("%d", &c1);
    scanf("%d", &dim);

    r=generabisottratto(c0, c1, dim);
    printf("%d\n", r);
    return 0;
}
// (10 ^)

int generabisottratto(int c0, int c1, int dim){
    int n, diff; 
    int i, sum = 1;
    int count;

    if (dim<3){
        return ERROR;
    }
    

    n = c0;
    n = n + (BASE * c1);

    for(count=2; count<dim; count++){

        diff = c0 - c1;

        if(diff < 0){
            diff = -diff;
        }else if(diff == 0){
            return ERROR;
        }

    //elevamento a potenza
        sum=1;
        for(i=0; i<count; i++){
            sum = sum * BASE;
        }

//        sum = BASE^count;     ^ -> XOR -> (vero (1) se i due numeri (in binario) sono uguali)

        n = n + (sum * diff);
        
        c0 = c1;
        c1 = diff;
    }

    return n;
}
