#include <stdio.h>

int Fibonacci(int num){

  if(num == 0 || num == 1) return 1;

  return Fibonacci(num - 1) + Fibonacci(num - 2);
}

int main()

{

  int num = 45;

  int num_fibonacci = Fibonacci(num);

  printf("Resultado da sequência será %d", num_fibonacci);

  return 0;
}