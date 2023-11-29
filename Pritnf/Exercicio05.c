#include <stdio.h>

int main() {

  float Celsius;

  printf("Digite uma temperatura em Celsius: ");
  scanf("%f", &Celsius);

  float Fahrenheit = ((9 * Celsius) / 5) + 32;

  printf("A temperatura convertida em Fahrenheit é de %.2f", Fahrenheit);

  return 0;
}