#include <stdio.h>

float celsiusFahrenheit(float c) { return (9 * c / 5) + 32; }

float fahrenheitCelsius(float f) { return 5 * (f - 32) / 9; }

int main(int argc, char **argv) {

  int escolha, tc, tf;
  float conversao;

  do {
    printf("\nDigite uma das seguintes opções");
    printf("\n");
    printf("\n1 -> Celsius para Fahrenheit");
    printf("\n2 -> Fahrenheit par Celsius");
    printf("\n");
    printf("\nOpção desejada:");
    scanf("%d", &escolha);


    if (escolha == 1) { // Celsius para Fahrenheit

      printf("Digite uma temperatura em Celsius: ");
      scanf("%d", &tc);

      conversao = celsiusFahrenheit((float)tc);

      printf("\nA temperatura em Fahrenheit será %.2fK", conversao);

    } else if (escolha == 2) { // Fahrenheit para Celsius
      printf("Digite uma temperatura em Fahrenheit: ");
      scanf("%d", &tf);

      conversao = celsiusFahrenheit((float)tf);

      printf("\nA temperatura em Celsius será %.2f°C", conversao);
    } else {

      printf("\nVocê não digitou nenhuma das opções !!");
      printf("\nDigite novamente uma opção válida");
    }

  } while (escolha != 1 || escolha != 2);

  return 0;
}