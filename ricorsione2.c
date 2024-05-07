/* Si scrivano le versioni ricorsiva ed iterativa (utilizzo di while) di una funzione double f(double a, int n) 
che calcola il seguente valore: sommatoria i=1 fino a n (a -i/a) */

#include <stdio.h>

double f(double a, int n){
    if(n == 1){
        return (a - (n  /a));
    }else{
        return (a - (n  /a)) + f(a, n - 1);
    }
}

int main(){
    double sum;
    double a;
    int n;

    scanf("%lf %d", &a, &n);

    sum = f(a, n);

    printf("%lf", sum);

    return 0;
}