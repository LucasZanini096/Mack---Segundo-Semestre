#include <stdio.h>

int mul(int x, int n){

  if(n == 0) return 0;

  return x + mul(x, n-1);
  
}

int main(void) {

  int a = 3;
  int b = 3;

  int resultado = mul(a, b);

  printf("%d", resultado);
  
  return 0;
}