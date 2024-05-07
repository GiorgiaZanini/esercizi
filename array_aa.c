/*Scrivere un programma che acquisisce una sequenza di caratteri s1 terminata dal carattere # (che non va considerato). 
Si ipotizzi inoltre che la sequenza sia al massimo lunga 20 caratteri e venga memorizzata in un array; 
nel caso in cui l'utente inserisce più caratteri, gli elementi in eccesso non vengono considerati.

Il programma costruisce una nuova sequenza di caratteri s2 in un nuovo array
copiando il contenuto di s1 e duplicando ciascuna VOCALE MINUSCOLA incontrata.

Infine il programma visualizza s2.

abced   aabceed               */

#include <stdio.h>
#define N 20

/*int main(){

    int count = 0;
    int i;
    char c;
    char a[N];
//    char aa[N+l];

    do{
        scanf("%c", &c);
        if(c != '#' || count < 20){
            a[count] = c;
        }
        count++;
    } while (c != '#');

    int l=0;

    for(i=0; i<N; i++){
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u'){
            l++;
        }
    }
  
printf("%d\n", N+l);

    char aa[N+l];

    for(i=0; i<N; i++){
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u'){
            aa[i]=a[i];
            aa[i+1]=a[i];
            i++;
        }else{
            aa[i]=a[i];
        }
    }

    for(i=0; i<N; i++){
        if(aa[i] != '#'){
            printf("%c", aa[i]);
        }    
    }

return 0;
}*/

int main(){

    int count = 0;
    int i, j;
    char c;
    char a[N], aa[2*N];

    do{
        scanf("%c", &c);
        if(c != '#' && count < 20){
            a[count] = c;
        }
        count++;
    } while (c != '#');

    for(i=0; i<count; i++){
        printf("%c", a[i]);
    }

    if(count>N){
        count=N;
    }

    for(i=0, j=0; i<count; i++){
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u'){
            aa[j]=a[i];
            aa[j+1]=a[i];
            j ++;
        }else{
            aa[i]=a[i];
        }
        j++;
    }        

    for(i=0; i<N; i++){
        printf("%c", aa[i]);
    }


return 0;
}