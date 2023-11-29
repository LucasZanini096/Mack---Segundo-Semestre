#include <stdio.h>

void tabuada (int num) {
  for (int i = 0; i <= 9; i++) {
    int multiplicacao = num * i;
    printf("\n%d * %d = %d", i, num, multiplicacao);
  }
}

int main (int argc, char **argv) {

  int numero;

  printf("Digite um número: ");
  scanf("%d", &numero);

  printf("Tabuada de %d", numero);
  tabuada(numero);

}