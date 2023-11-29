#include <stdio.h>

int main() {

  int valor = 27;

  //Declaração de um ponteiro
  int *ptr;

  //Apontando o valor de memória da variável valor ao ponteiro
  ptr = &valor;

  printf("Usando ponteiros\n\n");
  printf("Conteúdo da variável valor: %d\n", valor);
  printf("Endereço da variável valor: %p\n", (void *)&valor);
  printf("Conteúdo da variável ponteiro prt: %p\n", (void *)ptr);

}