/*Scrivere una funzione "sort" che ordina 3 interi in ordine crescente. 
La funzione non deve utilizzare un array ma 3 puntatori.*/

#include <stdio.h>
void sort(int *, int *, int *);

int main(){
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    sort(&a, &b, &c);

    printf("%d %d %d\n", a, b, c);

return 0;
}

void sort(int *a, int *b, int *c){
    int tmp;

    if(*a > *b){
        if(*b > *c){
//            printf("\ncaso 1\n");   // 3 2 1    ok
            tmp=*a;
            *a=*c;
            *c=tmp;
        }else{
            if(*a < *c){
//                printf("\ncaso 2\n");   // 2 1 3    ok
                tmp=*a;
                *a=*b;
                *b=tmp;
            }else{
//                printf("\ncaso 3\n");   // 3 1 2    ok
                tmp=*a;
                *a=*b;
                *b=*c;
                *c=tmp;
            }
        }
    }else if(*a < *b){
        if(*a > *c){
//            printf("\ncaso 4\n");   // 2 3 1    ok
            tmp=*c;
            *c=*b;
            *b=*a;
            *a=tmp;
        }else if(*b> *c){
//            printf("\ncaso 5\n");   // 1 3 2    ok
            tmp=*b;
            *b=*c;
            *c=tmp;
        }
    }
}