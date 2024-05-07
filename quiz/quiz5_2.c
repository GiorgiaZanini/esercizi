//Si completi il programma in modo che dati in input da tastiera una matrice di interi NxM (N righe, M colonne) 
//e un numero l sicuramente maggiore di 0 e sicuramente minore di N, stampi:
//- OK se nella matrice esiste almeno una sequenza verticale di lunghezza almeno l di elementi che crescono o decrescono linearmente 
//(cioè in cui la differenza tra due elementi successivi è costante).
//- KO altrimenti.
//Ad esempio, se l=3, 
//nella matrice mostrata come esempio, esiste nella terza colonna una sequenza di 3 elementi (9,6,3) 
//che decrescescono linearmente (la differenza di ogni elemento dal successivo è 3).

//3           OK
//0 3 -3 
//1 2 9 
//3 4 6 
//3 5 3

#include <stdio.h>
#define M 3
#define N 4

int main(){
    int l = 3;
	int m[N][M] = {{0, 3, -3},{1, 2, 3},{3, 4, 6},{3, 5, 3}};
    int i, j, k;
    int sottocolonna;
    int fail;
    int differenza;
	int flag=0;
    int count;
	
	
// Acquisizione dati

    do{
        scanf("%d", &l);
    }while(l<=0 || l>N);

    for(i=0; i<N; i++){
        for(j=0; j<M; j++){
            scanf("%d",&m[i][j]);
        }
    }
  
//verifica la proprietà

    for(j=0; j<M; j++){
        for(i=0; i<N; i++){
            
            differenza = m[i+1][j] - m[i][j];   
            count=1;
            fail=0;
            k=i;

            for(sottocolonna=k+1; sottocolonna<M && (flag==0 || count>l); sottocolonna++){

                if(m[k+1][j] - m[k][j] == differenza && fail==0){
                    count++;
                }  
                else{
                    fail=1;
                } 
                if(count>=l && fail==0){
                    flag=1;
                }
            }

        }
    }
	
    if(l == 1){
        printf("OK");
    }else if(flag == 1){
        printf("OK");
    }else{
        printf("KO");
    }
	
    return 0;
}

/*#include <stdio.h>
#define M 3
#define N 4

int main(){
    int l;
    int m[N][M];
    int i, j;
    int sottocolonna;
    int fail;
    int differenza;
    int flag=0;
    int count;
	
// Acquisizione dati

    do{
        scanf("%d", &l);
    }while(l<=0 || l>N);

    for(i=0; i<N; i++){
        for(j=0; j<M; j++){
            scanf("%d",&m[i][j]);
        }
    }
  
//verifica la proprietà

    for(j=0; j<M; j++){
        for(i=0; i<N; i++){
            
            differenza = m[i+1][j] - m[i][j];    
            count=0;
            fail=1;
            
            for(sottocolonna=i+1; sottocolonna<M && flag==0 && fail==1; sottocolonna++){

                if(m[i+1][j] - m[i][j] == differenza || count>l){
                    fail=1;
                }  
                if(count==l && fail==0){
                    flag=1;
                }
            }

        }
    }
	
    if(flag == 1){
        printf("KO");
    }else{
        printf("OK");
    }
	
    return 0;
}*/