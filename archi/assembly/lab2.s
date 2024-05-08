# filename: code readstr.s

# legge una stringa da tastiera e genera l'output della stessa stringa sul monitor

.section .data

# riservare dello spazio a una stringa che non sappiamo quanto grande sara'
.section .bss
    str: .string ""     # e' come se avesssi scritto in C: char * str = "" (stringa di lunghezza sconosciuta)

.section .text
    .global _start

_start:         # stream:  si usa per leggere un file
    movl $3, %eax   # per fare system call, metter nei registri valori per ogni system call
    movl $0, %ebx   # tastira, quindi standard input (stream)
    leal str, %ecx  # destinazione
    movl $50, %edx  # lunghezza della stringa
    int $0x80   # esegui system call (interrupt)

    movl $4, %eax   # systemcall a write (per scrivere su terminale)
    movl $1, %ebx   # standard output
    leal str, %ecx
    movl $50, %edx
    int $0x80

    movl $1, %eax   #system call a exit
    xorl %ebx, %ebx
    int $0x80

    # make file -> programma (utility) che permette di automatizzare il flusso di compilazione 
    # per creare eseguiblile -> linkare file oggetto 
    # eseguibile dipende da file oggetto (.x) -> creare eseguibile (.o) -> che dipende dai .s
