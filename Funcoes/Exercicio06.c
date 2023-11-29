#include <stdio.h>
#include <math.h>

float operacao(int num) {

  float soma = 0;
  for (float i = 1; i <= num; i++) {
    soma += (i/powf(i, 2)) * powf(-1, i+1);
  }
  return soma;
}

int main(int argc, char *argv[]) {
  
  int numero;

  printf("Digite um número: ");
  scanf("%d", &numero);

  float resultado = operacao(numero);

  printf("O resultado da operação será %.2f ", resultado);
 
  return 0;
}