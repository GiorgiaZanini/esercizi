/* Scrivere un sottoprogramma che calcola l'area e il perimetro di un cerchio di raggio dato. 

Il sottoprogramma riceve come parametri un numero in virgola mobile 
che rappresenta il raggio del cerchio e altri due parametri, sempre in virgola mobile, 
in cui verranno salvati i due risultati richiesti.

Scrivere un programma che chiede all'utente la lunghezza del raggio del cerchio, 
calcola mediante la funzione sopra e visualizza il perimetro e l'area del cerchio.

In seguito il programma chiede all'utente se vuole continuare o meno 
(0 per continuare, qualsiasi altro valore per terminare). */

#include <stdio.h>
#include <math.h>
#define π 3.14
void calculation(double *, double *, double *);

int main(){

    double r;
    double p=0, a=0;
    int continua=0;
//    char continua=1;

/*    do{
    //istructions    
        if(continua==1){
            printf("(enter the radius measurement of the circle to calculate its perimeter and area)\ninserisci la misura del raggio del cerchio per calcolarne perimetro e area: ");
        }else{
            printf("(enter the radius)\ninserisci il raggio: ");
        }
        scanf("%lf", &r);


    //code
        calculation( &r, &p, &a);

        printf("\n(perimeter) perimetro:\t%.2lf\n(area) area:\t%.2lf\n", p, a);
        

    //istructions
        printf("\n(enter '0' to continue, any other character to end)\ninserisci '0' per continuare, qualsiasi altro carattere per terminare: ");
        scanf("%c", &continua);
    }while(continua==0);    */
    //da sistemare while -> esce dal ciclo senza fare lo scanf di continua

    while(continua==0){
        printf("inserisci la misura del raggio del cerchio per calcolarne perimetro e area: ");
        scanf("%lf", &r);

        calculation( &r, &p, &a);

        printf("\nperimetro:\t%.2lf\narea:\t%.2lf\n\ninserisci '0' per continuare, qualsiasi altro numero intero per terminare: ", p, a);

        scanf("%d", &continua);

        printf("\n");
    }

return 0;    
}

void calculation(double *r, double *p, double *a){
    // A = π r²
    *a = (π * (pow(*r,2)));

    // C = 2 r π
    *p = (2 * (*r) * π);
}


