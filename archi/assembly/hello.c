#include <stdio.h>
int main(){
    printf("hello world");
return 0;    
}

//per vedere il codice assembly
// gcc -S hello.c      (generare un elenco di assembly del codice sorgente C)
//cat hello.s       (visualizzarne il contenuto)

//gcc hello.c -o hello -ggdb        (generare informazioni di debug e memorizzarle nel programma compilato)
//gdb hello      (possiamo accedere alle informazioni di debug utilizzando gdb)
//break main      (Inserire un punto di interruzione all'inizio del programma)
//run       (avviare il debug)
//exit      (uscire da gdb)

//man gcc       (info gcc)