/* Scrivere un programma C che apre un file di testo “testo.txt” contenente parole ciascuna di al massimo 15 caratteri. 
Il programma identifica e stampa a video tutte le parole che rappresentano un numero (cioè composte soltanto da cifre). 

Ad esempio, se il file “input3.txt” contiene il testo:

oggi è il 30 marzo 2020 e per superare l’esame è necessario prendere almeno 18 nella prova1 di programmazione

Il programma stamperà a video:

30
2020
18

Variante: stampare le parole che contengono almeno 3 vocali minuscole   */

#include <stdio.h>
int main(){
    FILE *f;
    char s[15];
    int flag = 1;

    f = fopen ("file/input3.txt", "r");
    if(f==NULL){
        printf("File non esistente\n");
    }else{
        do{
            fscanf(f, "%s", s);

            flag = 1;

            for(int i = 0; s[i] !='\0'; i++){
                if(s[i] < '0' || s[i] > '9'){
                    flag = 0;
                }
            }

            if(flag){
                printf("%s\n", s);
            }

        }while(!feof(f));
    }
}