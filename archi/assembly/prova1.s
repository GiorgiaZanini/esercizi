# per compilare, linkare, eseguire

# as -o hello.o hello.s
# ld -o hello.x hello.o
# ./hello.x

# codice compilato per sistemi 32 bit
# as prova1.s -32 -o prova1.o
# ld prova1.o -m elf_i386 -o prova1.x
# ./prova1.x

.section .data 

hello:
    .ascii "Hello Word\n"   # stringa che voglio stampare

hello_len:
    .long . -hello          # lunghezza della stringa, recuperato per differenza tra etichette

.section .text
    .global _start          # punto di inizio del programma, è puntato all'etichetta _start

_start:
#    pushl %eax
    movl $4, %eax           # carica il codice della SysCall 4 (WRITE) su EAX
    movl $1, %ebx           # scrivi nello standard output

    leal hello, %ecx        # cosa stampare, va messo in ECX

    movl hello_len, %edx    # quanti caratteri stampare

    int $0x80               # esegue ls SysCall write tramite interrupt generico 0x80

    movl $1, %eax           # metto a 1 EAX per chiamare la SysCall EXIT
    xorl %ebx, %ebx         # xor -> hanno lo stesso valore, quindi non è vero -> 0      # metti a 0 il codice di errore EBX

    int $0x80               # esegue la SysCall EXIT tramite interrupt generico 0x80
    