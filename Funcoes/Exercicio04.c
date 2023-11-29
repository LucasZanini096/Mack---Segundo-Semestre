#include <stdio.h>
#include <stdbool.h>

int verficacaoDivisor(int n, int d) {
  int resto = n % d;

  if (resto == 0) {
    return 1;

  } else {
    return 0;
  }
}

int numDivisores (int m) {
  int count = 0;

  for(int i = 1; i <= m; i++) {
    if (m % i == 0){
      count ++;
    }
  }
  return count;
}

int main(int argc, char **argv) {

  int numero, divisor,divisao;


  //printf("Digite um dividendo e um divisor: ");
  //scanf("%d, %d", &numero, &divisor);

  printf("Digite um valor para dividendo: ");
  scanf("%d", &numero);

  printf("\nDigite uma valor para divisor: ");
  scanf("%d", &divisor);

  divisao = verficacaoDivisor(numero, divisor);

  if (divisao == 1) {
    printf("\nO número %d é divisível por %d", numero, divisor);
  } else {
    printf("\nO número %d não é divisível por %d",numero,  divisor);
  }

  int numeroDivisores = numDivisores(numero);

  printf("\nO número de divisores de %d é %d", numero, numeroDivisores);

  return 0;
}