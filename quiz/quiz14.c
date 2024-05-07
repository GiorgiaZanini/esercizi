/* Scrivere un sotto-programma C che conta i valori compresi in un intervallo [a, b] presenti in file di testo, utilizzando le funzioni fscanf() e feof().

Il file di test contiene il seguente testo:

5 21 7 
4 3 12

Test	                                                Result
printf("%i", count_in_range("valori.txt", 0, 20));      5           */

#include <stdio.h>
// Conta i valori contenuti in un file di testo nell'intervallo [a, b]

int count_in_range(char filename[], int a, int b) {
    FILE *f;
    int n;
    int count = 0;

    f = fopen ("../file/valori.txt", "r");
    if(f==NULL){
        printf("File non esistente\n");
    }else{
        do{
            fscanf(f, "%d", &n);

            if(n >= a && n <= b){
                count++;
            }

        }while(!feof(f));
    }

    return count;
}

int main(){
    printf("%i", count_in_range("valori.txt", 0, 20));
}