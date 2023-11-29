#include <stdio.h>

int main() {

  int a = 5;
  int b = 5;
  int *p;
  int *q;
  p = &a;
  q = &b;
  int c = *p + *q;

  printf("Soma: %d\n", c);

}