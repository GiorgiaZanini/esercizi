/*Scrivere un programma che richiede all’utente le lunghezze dei cateti di 4 triangoli  
(nella richiesta di input non utilizzare la funzione printf(), ma soltanto la funzione scanf(). 

Per ciascun triangolo l’utente dovrà fornire la lunghezza del primo cateto (c1) e quella del secondo cateto (c2) (di tipo double). 
Le lunghezze dei due cateti di ciascun triangolo devono essere salvate all’interno dei campi c1 e c2 di un tipo strutturato (struct) 
chiamato triangolo e così organizzato:

• nome: tipo char 

• c1: tipo double

• c1: tipo double

Il campo nome della struct deve essere inizializzato automaticamente (cioè senza richiederlo all’utente) con un carattere progressivo da ’A’ ad ’E’ 
(cioè ’A’ per il primo punto, ’B’ per il secondo, ecc.). 
Ad esempio, se l’utente per il primo triangolo inserisce le lunghezze c1 = 2.0 e c2 = 5.0 allora la variabile strutturata per quel triangolo conterrà i valori (’A’, 2.0, 5.0).

Le informazioni dei quattro triangoli devono poi essere salvate in un array di tipo triangolo. 
Successivamente, il programma deve deve calcolare la lunghezza dell’ipotenusa dei quattro triangoli 
e stampare a video il nome, le lunghezze dei cateti e la lunghezza dell’ipotenusa del triangolo con ipotenusa di lunghezza più grande nel seguente formato di output

(nome,c1,c2,ipotenusa)

con tutti i numeri formattati con 2 cifre dopo la virgola.

Se esistono più triangoli con ipotenusa massima, si dovranno stampare le informazioni del primo di essi. Ad esempio, 
se i dati inseriti inizialmente sono relativi ai quattro triangoli (’A’, 2.0, 3.0), (’B’, 10.0, 2.0), (’C’, 3.0, 3.0), (’D’, 2.5, 10.0) si otterrà l’output: 

(D, 2.5,10.00,10.31). Attenzione a non aggiungere spazi nell’output.

Nota: la lunghezza dell’ipotenusa del triangolo si calcola con la formula sqrt((C1)^2 + (C2)^2). 
Nel linguaggio C la funzione per il calcolo della radice quadrata di un numero x è sqrt(x) e la funzione per il calcolo del quadrato di un numero x è pow(x,2).*/

#include <stdio.h>
#include <math.h>

#define N 4

typedef struct{
    char name;
    double c1;
    double c2; 
    double ipotenusa;   
}triangle;


int main(){

    triangle a[4];
    int i;
    int max = 0;
    triangle A, B, C, D;

    A.name=0; A.c1=0; A.c2=0; A.ipotenusa=0;
    B.name=0; B.c1=0; B.c2=0; B.ipotenusa=0;
    C.name=0; C.c1=0; C.c2=0; C.ipotenusa=0;
    D.name=0; D.c1=0; D.c2=0; D.ipotenusa=0;*

    //definizione array
    //ogni posto nell'array corrisponde a un'indirizzo della struct

    a[0] = A;
    a[1] = B;
    a[2] = C;
    a[3] = D;

    //acquisizione

    for(i = 0; i < 4; i++){
        a[i].name = i+'A';
        scanf("%lf", &a[i].c1);
        scanf("%lf", &a[i].c2);
    }

    //calcolo ipotenusa

    for(i = 0; i < 4; i++){

        a[i].ipotenusa = sqrt(pow(a[i].c1,2) + pow(a[i].c2,2));

        //ipotenusa massima
        
        if(a[i].ipotenusa > a[max].ipotenusa && i!=0){
            max = i;
        }
    }

    for(i=0; i<4; i++){
        printf("%c\t", a[i].name);
        printf("%lf\t", a[i].c1);
        printf("%lf\t", a[i].c2);
        printf("%lf\n", a[i].ipotenusa);
    }

	printf("(%c,%.2f,%.2f,%.2f)", a[max].name, a[max].c1, a[max].c2, a[max].ipotenusa);

	return 0;
}