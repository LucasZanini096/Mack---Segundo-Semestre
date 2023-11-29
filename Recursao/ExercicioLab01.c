#include <stdio.h>

void Binario(int n, char vetor[], int c) {
  if (n < 1) {
    vetor[c] = '\0';
    return;
  }

  int resto = n % 2;
  n = n / 2;
  vetor[c] = resto + '0'; 

  Binario(n, vetor, c + 1);
}

int main() {
  char vetor[10];
  int num = 255;
  int count = 0;

  Binario(num, vetor, count);

  printf("%s\n", vetor); 

  return 0;
}