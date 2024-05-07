/* Scrivere un programma C che prese 2 stringhe di massimo 30 caratteri (senza spazi), 
crea e stampa a video una stringa ottenuta concatenando secondo l'ordine lessicografico le due stringhe in input. 

Ad esempio, date in input "esempio" e "concatenazione" verrà stampata la stringa "concatenazioneesempio".


Input	            Result

ciao amico          amicociao
albero albergo      albergoalbero    */

#include <stdio.h>
#define N 30

void ordina(char *s1, char *s2, char *s3, int flag, int count1, int count2){
    int i;

    if(flag == 1){
        for(i = 0; i <= (count1 + count2); i++){
            if(i < count1){
                s3[i] = s1[i];
            }else{
                s3[i] = s2[i - count1];
            }
        }
        s3[i] = '\0';
    }
    else{
        for(i = 0; i < (count1 + count2); i++){
            if(i < count2){
                s3[i] = s2[i];
            }else{
                s3[i] = s1[i - count2];
            }                
        }
        s3[i] = '\0';
    }
}

int main(){
	char s1[N+1];
	char s2[N+1];
	char s3[2*N+1];
	int i, count1 = 0, count2 = 0;
    int flag, esci = 1;

    scanf("%s", s1);
    scanf("%s", s2);

    for(i = 0; s1[i] != '\0'; i++){
        count1++;
    }
    for(i = 0; s2[i] != '\0'; i++){
        count2++;
    }

    if(count1 <= count2){
        flag = 1;
        
        for(i = 0; s1[i] != '\0' && esci; i++){
            if(s1[i] != s2[i]){
                if(s1[i] < s2[i]){
                    flag = 1;
                    esci = 0;
                }else{
                    flag = 0;
                    esci = 0;
                }
            }
        }

        ordina(s1, s2, s3, flag, count1, count2);

    }else{
        flag = 0;

        for(i = 0; s2[i] != '\0' && esci; i++){
            if(s1[i] != s2[i]){
                if(s1[i] < s2[i]){
                    flag = 1;
                    esci = 0;
                }else{
                    flag = 0;
                    esci = 0;
                }
            }
        }

        ordina(s1, s2, s3, flag, count1, count2);

    }

    printf("%s", s3);

return 0;
}