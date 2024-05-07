#include <stdio.h>
int main(){
    int c, d;
    int *p1, *p2;
    int **p3; //variabile -> puntatore a puntatore ad intero (per puntare a p1)
    int **p4; //variabile -> puntatore a puntatore ad intero (per puntare a p2)

    c=54;
    d=10;

    p1=&c; //p1 punta a c

    p2=p1; //anche p2 punta a c, come p1

    printf("%d %d %d %d \n", c, d, *p1, *p2); // 54 10 54 54

    p1=&d;

    *p1 = *p1 + *p2; //operazione sugli interi a cui puntano i puntatori

    printf("%d %d %d %d \n", c, d, *p1, *p2); // 54 64 64 54

    p3=&p1;
    p4=&p2;
    *p4=*p3;

    printf("%d %d %d %d %d %d \n", c, d, *p1, *p2, **p3, **p4); // 54 64 64 64 64 64

return 0;
}