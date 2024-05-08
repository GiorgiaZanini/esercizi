.section .data

titolo:
    .ascii "PROGRAMMA PER CALCOLARE QUANTE AUTO SERVONO: \n"

titolo_len:    # stampare a video
    .long . - titolo    # lunghezza del titolo

testo:
    .ascii "Totale auto richieste: "

testo_len:
    .long . - testo    # lunghezza del testo

numPersone:
    .long 152   # numero persone da dividere tra le macchine

persPerAuto:
    .long 5     # numero massimo di persone per auto

numAuto:
    .ascii "000\n"  # variabile di tipo ascii che che conterra' (assembly non riconosce accenti -> senno' usere uncode, che pero' non sono char (8 bit))

.section .text  # code
    .global _start

_start:
    movl numPersone, %eax   # metto in eax il numero delle persone

    movl persPerAuto, %ebx  # metto in ebx il numero di persone per auto

    div %bl     # prende i bit meno significativi di eax e lo divide per la sorgente (bl), poi mette il risulato di al/bl in al e il resto in ah
                # per convenzione -->   al/(quello che gli diamo)
    cmpb $0, %ah    # vedere se ho o no il resto -> compare byte
                    # verifico che il numero di persone sia divisibile per 5 -> resto = 0

    je continuazione    # se resto = 0 -> salo all'etichetta 'continuazione'
    
    incb %al            # altrimenti.. se ho il resto mi serve una nacchina in piu' (numero macchine + 1)

    xorb %ah, %ah   # azzero il registro ah

continuazione:  # cosa fare se non c'e' il resto -> da qui il resto è gia' gestito
    # il valore numerico del risultato è salvato in al
    # devo andare a creare il suo corrispondente ascii

    leal numAuto, %esi      # numAusto (stringa)
    addl $2, %esi   # la prima cifra della stringa che verra' modificata e' la terza cifra  (n % 10)
                    # per convertire il numero in ascii (in questo caso il ciclo durera' 3 iterazioni)

    movl $10, %ebx  # salvo 10 in ebx per fare le divisioni

    movl $3, %ecx   # in ecx salvo il contatore per il ciclo

inizioCiclo:
    div %bl     # quoziente in al e resto in ah
    
    addb $48, %ah   # sommo 48 al resto

    movb %ah, (%esi)    # sposto ah nella cifra "puntata" da esi

#    movb %ah, (%esi)    # sposto ah nella cifra "puntata" da esi

    xor %ah, %ah    # dpulisco il contenuto di ah
    decl %esi       # decremento esi (contatore)

    loop inizioCiclo    # ripeto la procedura -> posso fare il loop finche' ecx > 0 (perche' poi viene decrementato a ogni ciclo)
    # ecx usato sia da loop sia da system call      # per covenzione ecx funziona da contatore
# stampa a video
movl $4, %eax   # uso la write
movl $1, %ebx   # stampo su stdout (terminale)
leal titolo, %ecx   # carico l'indirizzo del titolo in ecx
movl titolo_len, %edx   # carico la lunghezza del titolo in ecx

int $0x80

movl $4, %eax   # uso la write
movl $1, %ebx   # stampo su stdout
leal testo, %ecx   # carico l'indirizzo del testo in ecx
movl testo_len, %edx   # carico la lunghezza del testo in ecx

int $0x80

movl $4, %eax
movl $1, %ebx
leal numAuto, %ecx
movl $4, %edx

int $0x80

# termino il programma
movl $1, %eax   # SystemCall exit
movl $0, %ebx   # codice di uscita 0 (return)
int $0x80
