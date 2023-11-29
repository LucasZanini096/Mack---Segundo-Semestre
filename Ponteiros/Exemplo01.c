#include <stdio.h>


int main()
{

  int i = 1234;
  printf(" i = %d\n", i);
  printf("&i = %ld\n", (long int)&i);
  printf("&i = %p\n", (void *)&i);

}

/*A conversão de tipo /type casting para (long int) é necessária
para que &i possa ser impressa no formato %ld.*/

/*É mais comum imprimir endereços em notação hexadecimal,
usando o formato %p que exige o casting para (void *)*/