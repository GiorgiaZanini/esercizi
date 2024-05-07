#include <stdio.h>
typedef struct{ //è un tipo -> quindi non occupa spazio in memoria
    int suff;
    int insuff;
    }voti;

voti f(voti); //una funzione non può restituire array, ma variabili e struct sì (purchè sia una sola)
void f(voti *);

int main(){+
    voti n;
    n.suff=100;
    n.insuff=50;

    n=f(n);

    printf("%d %d", n.suff, n.insuff);
}

voti f(voti x){
    x.suff =+ 100;
    x.insuff =+ 100;

    return x;
}

void f(voti *x){ //se scrivo void, non imprta cosa ritorna
                    //x -> indirizzo a n (uno spazio)

    (*x).suff += 100;
    (*x).insuff += 100;

} //ho scritto direttamente nella variabile del main
//passaggio per indirizzo spreca meno spazio in memoria
//mentre le variabili hanno bisogno di più campi (spazi in memoria)