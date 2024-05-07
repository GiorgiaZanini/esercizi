/*Scrivere un programma che richiede all’utente 5 punti del piano cartesiano 
(nella richiesta di input non utilizzare la funzione printf(), ma soltanto la funzione scanf()). 

Per ciascun punto l’utente dovrà fornire le coordinate x ed y (di tipo double). 
Le due coordinate di ciascun punto devono essere salvate all’interno dei campi x ed y di un tipo strutturato (struct) chiamato punto e così organizzato:

• nome: tipo char 

• x: tipo double

• y: tipo double

Il campo nome della struct deve essere inizializzato automaticamente (cioè senza richiederlo all’utente) 
con un carattere progressivo da ’a’ ad ’e’ (cioè ’a’ per il primo punto, ’b’ per il secondo, ecc.). 

Ad esempio, se l’utente per il primo punto inserisce i valori 0.0 per la coordinata x e 2.3 per la coordinata y 
la variabile strutturata per quel punto conterrà i valori (’a’, 0.0, 2.3).

Le informazioni dei 5 punti del piano devono essere salvate in un array di struct. 

Successivamente, il programma deve richiedere all’utente le coordinate x ed y di un sesto punto, 
anch’esse da salvare all’interno di una variabile di tipo punto.

Il programma deve calcolare la distanza euclidea tra il sesto punto e ciascuno dei primi cinque punti, 
e stampare a video il nome, le coordinate e la distanza del punto più vicino al sesto nel seguente formato di output

(nome,x,y,distanza)

con tutti i numeri formattati con 2 cifre dopo la virgola.

Se esistono più punti alla minima distanza dal sesto, si dovranno stampare le informazioni del primo di essi.

Ad esempio, se si generano inizialmente i 5 punti (a, 0.0, 0.0), (b, 2.0, 2.0), (c, 3.0, 3.0), (d, 5.0, 5.0), (e, 9.0, 9.0) 
e per il sesto punto si inseriscono le coordinate x = 5.5 ed y = 5.6 si otterrà l’output: (d,5.00,5.00,0.78). 
Attenzione a non aggiungere spazi nell’output.

Nota: la distanza euclidea tra due punti si calcola come sqrt((x1 − x2)^2 + (y1 − y2)^2). 
Nel linguaggio C la funzione per il calcolo della radice quadrata di un numero x è sqrt(x) e la funzione per il calcolo del quadrato di un numero x è pow(x,2).

For example:

Input	Result
0 0     (d,5.00,5.00,0.78)
2 2
3 3
5 5
9 9
5.5 5.6

-1 -1   (c,0.00,0.00,0.42)
0 -1
0 0
1 1
2 2
0.3 0.3                         */



#include <stdio.h>
#include <math.h>

#define N 5

int main(){

    typedef struct{
        char nome;
        double x;
        double y;
        double distanza;
    }punto;
    
	punto a[6];
    punto A, B, C, D, E, F;
    int i, min;

    a[0] = A;
    a[1] = B;
    a[2] = C;
    a[3] = D;
    a[4] = E;
    a[5] = F;

    for(i=0; i<=N; i++){
        a[i].nome = i+'a';
        scanf("%lf", &a[i].x);
        scanf("%lf", &a[i].y);
    }

    for(i=0; i<N; i++){

        a[i].distanza = sqrt(pow((F.x - a[i].x),2) + pow((F.y - a[i].y), 2));
        
        if(i!=0 && a[i].distanza < a[min].distanza){
            min = i;
        }
    }
	
	
	printf("(%c,%.2f,%.2f,%.2f)", a[min].nome, a[min].x, a[min].y, a[min].distanza );
	return 0;
}
