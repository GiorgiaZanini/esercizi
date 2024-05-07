/*Scrivere una funzione ricorsiva che calcola la somma di tutti i naturali compresi tra 0 e x 
(x viene letto da tastiera nel main, deve essere positivo, e viene passato come parametro alla funzione).*/

#include <stdio.h>

int scala(int x){

    if(x==0){
        return 0;
    }else{
        return x + scala(x - 1);
    }

}

int main(){
    int x;
    int sum;

    do{
        scanf("%d", &x);
    }while(x < 0);

    sum = scala(x);

    printf("%d", sum);

    return 0;
}