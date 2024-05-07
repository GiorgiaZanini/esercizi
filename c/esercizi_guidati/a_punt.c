#include <stdio.h>
int main(){
    char s[21]; //stringa
    int i;
    char *p;
    int count = 0;

    scanf("%s", s);

                //s[i]
    for(i = 0; *(s + i) != '\0', i++){
        if(*(s + i) >= '0' && *(s + i) <= '9'){
            count++;
        }
    }

    count=0;

    for(p = s; *p != '\0', p++){    //p punta al primo indirizzo dell'array, s->"array", p->puntatore
        if(*p >= '0' && *p <= '9'){
            count++;
        }
    }
}