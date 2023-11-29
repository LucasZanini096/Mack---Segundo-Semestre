#include <stdio.h>


int main() {

  int num1;
  int num2;

  printf("Escreva um número: \n");
  scanf("%d", &num1);

  printf("Escreva outro número: \n");
  scanf("%d", &num2);

  int sum = num1 + num2;
  float mean = (float) sum / 2;

  printf("A soma de ambos será %d\n", sum);
  printf("A média de ambos será %.2f\n", mean);

  return 0;
}