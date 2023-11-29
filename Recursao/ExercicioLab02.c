
#include <stdio.h>

int fibbonacci(int n) {

  if((n == 0) || (n == 1)) return 1;
  
  return fibbonacci(n-1) + fibbonacci(n-2);
}

int main(void) {

int na = 3;

int resultado_sequencia = fibbonacci(na);

printf("%d", resultado_sequencia);
return 0;
}
