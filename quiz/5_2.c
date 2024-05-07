//Si completi il programma in modo che dati in input da tastiera una matrice di interi NxM (N righe, M colonne) 
//e un numero l sicuramente maggiore di 0 e sicuramente minore di N, stampi:
//- OK se nella matrice esiste almeno una sequenza verticale di lunghezza almeno l di elementi che crescono o decrescono linearmente 
//(cioè in cui la differenza tra due elementi successivi è costante).
//- KO altrimenti.
//Ad esempio, se l=3, 
//nella matrice mostrata come esempio, esiste nella terza colonna una sequenza di 3 elementi (9,6,3) 
//che decrescescono linearmente (la differenza di ogni elemento dal successivo è 3).
#include <stdio.h>

int main() {
    int n, m, l; // n (righe), m (colonne), l (lunghezza)
    printf("Inserisci il numero di righe e colonne della matrice: ");
    scanf("%d %d", &n, &m);
    printf("Inserisci la lunghezza della sequenza: ");
    do {
        scanf("%d", &l);
    } while (l <= 0 || l > n);

    int m1[n][m]; // Matrice

    printf("Inserisci i valori della matrice:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &m1[i][j]);
        }
    }

    int flag_seq = 0; // Flag per verificare se la sequenza è presente

    // Scandisci le colonne
    for (int j = 0; j < m && flag_seq == 0; j++) {
        // Scandisci le righe partendo da l
        for (int i = l - 1; i < n && flag_seq == 0; i++) {
            // Verifica se esiste una sequenza crescente o decrescente lunga almeno l
            int diff = m1[i][j] - m1[i - 1][j]; // Differenza tra elementi consecutivi
            int count = 1; // Conteggio di elementi consecutivi con la stessa differenza
            int seq_found = 0; // Flag per indicare la presenza di una sequenza
            for (int k = i - 1; k >= 0; k--) {
                if (m1[k + 1][j] - m1[k][j] == diff) {
                    count++;
                    if (count >= l) {
                        seq_found = 1; // Sequenza trovata
                    }
                } else {
                    count = 1; // Resetta il contatore se la sequenza si interrompe
                }
            }
            if (seq_found) {
                flag_seq = 1; // Sequenza trovata
            }
        }
    }

    if (flag_seq == 1) {
        printf("OK\n");
    } else {
        printf("KO\n");
    }

    return 0;
}