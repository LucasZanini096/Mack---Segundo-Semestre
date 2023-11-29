#include <stdio.h>

void imutavel(int x) { x += 10; }

void mutavel(int *x) { *x += 10; }

int main()
{

  int a = 0;
  printf("a: %d\n", a);
  imutavel(a);
  printf("a: %d\n", a);

  int b = 0;
  printf("b: %d\n", b);
  mutavel(&b);
  printf("b: %d\n", b);

}