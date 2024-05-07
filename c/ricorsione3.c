/* Scrivere una funzione ricorsiva che stabilisce se due numeri interi x e y sono primi tra loro (ossia non hanno divisori comuni >1). 
La funzione deve restituire 1(vero) o 0 (falso). 
Attenzione: esistono 2 casi base (proprietà vera e proprietà falsa). */

#include <stdio.h>

int rico(int tmp, int a, int b){
    if(a % tmp == 0 && b % tmp == 0 && tmp == 1){
        return 0;
    }
    else if(a % tmp == 0 && b % tmp == 0){
        return 1;
    }else{
        return rico(tmp - 1, a, b);
    }
}

int main(){
    int a, b;
    int tmp;
    int flag;

    scanf("%d %d", &a, &b);

    if(a > b){
        tmp = b;
    }else{
        tmp = a;
    }

    flag = rico(tmp, a, b);

    printf("%d", flag);

    return 0;
}