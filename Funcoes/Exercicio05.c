#include <stdbool.h>

bool primo(int m) {
  int count = 0;

  if (m <= 1) {
    return false;
  }

  for (int i = 0; i <= m; i++) {
    if (m % i == 0) {
      count++;
    }
  }

  if (count == 2) {
    return true;

  } else {
    return false;
  }
}

void intervaloPrimos(int a, int b) {

  printf("\nOs números primos que estão no intervalo de %d e %d são", a, b);

  if (a < b) {
    for (int i = a; a <= b; ++i) {
      if (primo(i)) {
        printf("\nO número %d", i);
      }
    }
  } else {
    for (int i = b; b <= a; ++i) {
      if (primo(i)) {
        printf("\nO número %d", i);
      }
    }
  }
}

int main(int argc, char **argv) {

  int num1, num2;

  printf("Digite um número:");
  scanf("%d", &num1);

  printf("\nDigite outro número:");
  scanf("%d", &num2);

  intervaloPrimos(num1, num2); 

  return 0;
}