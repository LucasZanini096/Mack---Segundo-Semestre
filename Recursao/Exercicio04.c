#include <stdio.h>

int Mdc_recursiva(int a, int b) {

  if (a == 0)
    return b;

  else if (b == 0)
    return a;

  else {

    int resto = a % b;

    return Mdc_recursiva(b, resto);
  }
}

int main() {

  int a = 123;
  int b = 60;
  int Mdc;

  if (a > b) Mdc = Mdc_recursiva(a, b);

  Mdc = Mdc_recursiva(b, a);

  printf("%d", Mdc);

  return 0;
}