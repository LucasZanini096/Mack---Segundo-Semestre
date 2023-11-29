#include <stdio.h>

int potencia(int x, int n){

  if(n == 0) return 1;

  return x * potencia(x, n-1);
  
}

int main(void) {

  int a = 3;
  int b = 3;

  int resultado = potencia(a,b);

  printf("%d", resultado);
  return 0;
}