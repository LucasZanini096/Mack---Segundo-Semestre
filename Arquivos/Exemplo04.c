#include <stdio.h>

int main(void) 
{
  printf("fopen com mode = w (write). \n");
  printf("- Se o arquivo existe: arquivo é aberto para leitura.\n");
  printf("- Se o arquivo não existe: fopen retorna NULL. \n");

  const char *FILENAME = "livros.txt";
  FILE *arquivo = fopen(FILENAME, "w");

  if (arquivo == NULL)
  {
    printf("*** Erro ao abrir o arquivo '%s'!\n", FILENAME);
    return -1;
  }

  printf("Arquivo '%s' criado com sucesso!\n", FILENAME);

  fputs("O Senhor dos Anéis: A Sociedade do Anel!\n", arquivo);
  fputs("Harry Potter: A Pedra Filosofal\n", arquivo);
  fprintf(arquivo, "O Guia do Mochileiro das Galáxias\n");
    fprintf(arquivo, "Percy Jackson e o Ladrão de Raios\n");

  printf("\nIMPORTANTE! Não esqueça de fechar o arquivo com fclose()!");
  fclose(arquivo);
  return 0;
}