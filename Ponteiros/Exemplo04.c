#include <stdio.h>

int main() {

  int i = 1234;
  int *p = &i;
 
  printf("*p = %d\n", *p); //Valor de i
  printf(" p = %ld\n", (long int)p); //Valor de p em long int
  printf(" p = %p\n", (void *)p); //Valor de p em hexadecimal
  printf("&p = %p\n", (void *)&p); //Endereço de memória de p

}

