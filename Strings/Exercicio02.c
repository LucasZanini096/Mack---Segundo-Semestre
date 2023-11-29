
#include <stdio.h>
#include <string.h>

int numeroVogais(char string[]) {
  int tamanhoString = strlen(string);
  char vogais[5] = {'a', 'e', 'i', 'o', 'u'};
  char caracterAtual;
  int count = 0;

  for (int i = 0; string[i] != '\0'; i++) {
    
    caracterAtual = string[i];
    for (int j = 0; j < 5; j++) {
      if (vogais[j] == caracterAtual) {
        count++;
      }
    }
  }
  return count;
}

int main(void) {

  int tamanhoPalavra;

  printf("Digite o tamanho da palavra:");
  scanf("%d", &tamanhoPalavra);

  char palavra[tamanhoPalavra]; //O delimitador é colocado automaticamente

  printf("\nDigite a palavra de tamanho %d:", tamanhoPalavra);
  scanf("%s", palavra);

  int qtdVogais = numeroVogais(palavra);

  printf("A string possui %d vogais", qtdVogais);

  return 0;
}s