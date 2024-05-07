// Array di massimo 100 caratteri con "*" per terminare, costruire un nuovo
// array con consonanti copiate, e vocali copiate + 'f' se la vocale è minuscola
// e 'F' se la vocale è maiuscola

#include <stdio.h>
#define N 100

int main() {
  char vet1[N], vet2[N * 3];
  int i = 0, j = 0;

  scanf("%c ", &vet1[i]);
  while (vet1[i] != '*' && i < N) {
    if (vet1[i] == 'a' || vet1[i] == 'A' || vet1[i] == 'e' || vet1[i] == 'E' ||
        vet1[i] == 'i' || vet1[i] == 'I' || vet1[i] == 'o' || vet1[i] == 'O' ||
        vet1[i] == 'u' || vet1[i] == 'U') {
      vet2[j] = vet1[i];
      j++;
      if (vet1[i] == 'a' || vet1[i] == 'e' || vet1[i] == 'i' ||
          vet1[i] == 'o' || vet1[i] == 'u') {
        vet2[j] = 'j';
        j++;
      } else {
        vet2[j] = 'J';
        j++;
      }
    } else {
      vet2[j] = vet1[i];
      j++;
    }
    i++;
    scanf("%c ", &vet1[i]);
  }
  for (i = 0; i < j; i++) {
    printf("%3d", vet2[i]);
  }
  return 0;
}
