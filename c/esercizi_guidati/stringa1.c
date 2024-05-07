//conta numero di parole

#include <stdio.h>
#define N 200
int main(){
    char frase[N+1];
    int i=0, count=1; //cont a 1 -> così conta anche la prima parola, perchè conta da quando trova il primo spazio
    char c;

    scanf("%c", &c);
    if(c=='\n'){
        printf("%d", count-1);
    }else{
        while (c!='\n' && i<N){
            frase[i]=c;
            i++;
            scanf("%c", &c);
        }

        frase[i]='\0'; //rendo la frase una stringa

        for(i=0; frase[i]!='\0'; i++){
            if(frase[i]==' '){
                count++;
            }
        }
    }

    return 0;
}