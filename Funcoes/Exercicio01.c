#include <stdio.h> 


float sum (float a, float b, float c) {
  return a + b + c;
}

int main(int argc, char **argv) {

  int a,b,c;

  printf("Digite o primeiro número: ");
  scanf("%d", &a);

  printf("\nDigite o segundo número: ");
  scanf("%d", &b);

  printf("\nDigite o terceiro número: ");
  scanf("%d", &c);

  float soma = sum((float) a, (float) b, (float) c);

  printf("\nO resultado da soma os números será %.2f", soma);

  return 0;
}