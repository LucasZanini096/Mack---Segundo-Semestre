#include <stdio.h>


int main() {

  float pi = 3.141592;
  float area;
  float raio;

  printf("Digite o tamanho do raio da esfera: ");
  scanf("%f", &raio);

  area = 4 * pi * (raio * raio);

  printf("A área superficial da esfera é de %.2f", area);
}
