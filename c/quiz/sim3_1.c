/*
Scrivere un programma che riceve in ingresso:

- la dimensione n di una matrice (es: 6)

- la dimensione d della forma geometrica da disegnare (es: 3)

- un numero type compreso tra 0 e 2 inclusi (es: 1)


Il programma ritorna in uscita:

    - Se type=0: una matrice di zeri (0) con disegnato, a partire dalla cella (n-2,1),
    un quadrato di uni (1) di dimensione dxd

    - Se type=1: una matrice di zeri (0) con disegnato, a partire dalla cella (n-2,1),
    un trianagolo rettangolo di uni (1) con cateti di dimensione d e angolo retto nella cella (n-2,1)

    - Se type=2: una matrice di zeri (0) con disegnati, a partire dall'angolo in alto a sinistra (i.e., (0,0)),
    dei quadrati di dimensione dxd parzialmente sovrapposti fino a raggiungere l'angolo in basso a destra (i.e., (n-1,n-1)),
    dove il quadrato i-esimo e' spostato in basso ed a destra di i celle e contiene nelle sue celle il numero i:



6       0 0 0 0 0 0
3       0 0 0 0 0 0
0       0 1 1 1 0 0 
        0 1 1 1 0 0 
        0 1 1 1 0 0 
        0 0 0 0 0 0


6       0 0 0 0 0 0
4       0 1 0 0 0 0 
1       0 1 1 0 0 0
        0 1 1 1 0 0 
        0 1 1 1 1 0 
        0 0 0 0 0 0


6       1 1 1 0 0 0 
3       1 2 2 2 0 0 
2       1 2 3 3 3 0 
        0 2 3 4 4 4 
        0 0 3 4 4 4 
        0 0 0 4 4 4

*/

#include<stdio.h>

void print_matrice (int dimensione_matrice, int matrice[dimensione_matrice][dimensione_matrice]) {
    for (int i = 0; i < dimensione_matrice; i++) {
        for (int j = 0; j < dimensione_matrice; j++) {
            printf("%d ", matrice[i][j]);
        }
        printf("\n");
    }
}

void quadrato (int dimensione_matrice, int dimensione_forma, int matrice[dimensione_matrice][dimensione_matrice]) {
    for(int i = 0; i < dimensione_forma; i++) {
        for (int j = 0; j < dimensione_forma; j++) {
            matrice[dimensione_matrice - 2 - i][j + 1] = 1;
        }
    }

/*
    for (int h = 0; h < dimensione_forma; h++) {
        for (int k = 0; k < dimensione_forma; k++) {

            matrice[ dimensione_matrice - 2 - h][k + 1] = 1;

        }
    }
*/

    print_matrice (dimensione_matrice, matrice);
}

void triangolo (int dimensione_matrice, int dimensione_forma, int matrice[dimensione_matrice][dimensione_matrice]) {
    for(int i = 0; i < dimensione_forma; i++) {
        for (int j = 0; j < dimensione_forma - i; j++) {
            matrice[dimensione_matrice - 2 - i][j + 1] = 1;
        }
    }

    print_matrice (dimensione_matrice, matrice);
}

void diagonale (int dimensione_matrice, int dimensione_forma, int matrice[dimensione_matrice][dimensione_matrice]) {

    int count = dimensione_matrice - (dimensione_forma - 1);

    for (int k = dimensione_matrice - 1; k >= 0; k--) {

        for (int i = 0; i < dimensione_forma; i++) {
            for ( int j = 0; j < dimensione_forma; j++) {

                if(matrice[k-i][k-j] == 0) {
                    matrice [k-i][k-j] = count;
                }

            }
        }

        count --;

    }

/*
    for (int h = dimensione_matrice - 1; h > dimensione_forma; h--) {
        for (int k = dimensione_matrice - 1; k > dimensione_forma; k--) {

            for (int i = 0; i < dimensione_forma; i++) {
                for ( int j = 0; j < dimensione_forma; j++) {

                    if(matrice[h-i][k-j] == 0) {
                        matrice [h-i][k-j] = count;
                    }

                }
            }

            count --;

        }
    }
*/
    print_matrice (dimensione_matrice, matrice);
}

int main(){
    int n, d, type, i, j;

    // Acquisizione dati
    scanf("%d", &n);

    int m1[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            m1[i][j]=0;
        }
    }

    scanf("%d", &d);
    scanf("%d", &type);

    switch (type) {
        case 0:
            quadrato(n,d,m1);
            break;

        case 1:
            triangolo(n,d,m1);
            break;

        case 2:
            diagonale(n,d,m1);
            break;
    }
}