#include <stdio.h>

int main() {

  int a;
  int b;
  int c;

  printf("Digite a medida de lado a:");
  scanf("%d", &a);

  printf("\nDigite a medida de lado b:");
  scanf("%d", &b);

  printf("\nDigite a medida de lado c:");
  scanf("%d", &c);

  if ((a < b+c) && (b< a+c) && (c < a + b)) {
    printf("Existe um triângulo com os lados digitados");
  }
  else {
    printf("Não existe um triângulo com os lados digitados");
  }

  return 0;
}
