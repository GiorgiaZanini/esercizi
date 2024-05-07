#include <stdio.h>
#define D 30

int conta(char a[]){
    int i, r = 0,

    for(i = 1; a[i] != '\0'; i++){
        if(a[i] == a[i - 1]){
            r++;
        }
    }

    return r;
}

int crea(char s[], int n[]){     //restitusce quanti valori ha inserito nell'array
    int i, count = 0;

    for(i = 0; s{i} != '\0'; i++){
        if(s[i] >= '0' && s[i] <= '9'){
            n(count) = s[i] - '0';          // --> esercizio da tema d'esame
            count++;
        }
    }

    return count;
}

int main(){
    char s[D + 1];
    int count;
    
    int val[D];
    int i;
    int d;

    scanf("%s", s);

    count = conta(s);

    printf("%d", count);

    d = crea(s, val);
    
    for(i = 0; i < d; i++){
        printf("%3d", val[i]);
    }

return 0;    
}