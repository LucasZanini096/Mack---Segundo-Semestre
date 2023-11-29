#include <stdio.h>

int main(void) 
{
  printf("fopen com mode = (read). \n");
  printf("- Se o arquivo existe: arquivo é aberto para leitura.\n");
  printf("- Se o arquivo não existe: fopen retorna NULL. \n");

  const char *FILENAME = "arquivo.txt";
  FILE *arquivo = fopen(FILENAME, "w");

  if (arquivo == NULL)
  {
    printf("*** Erro ao abrir o arquivo '%s'!\n", FILENAME);
    return -1;
  }

  printf("Arquivo '%s' aberto com sucesso!\n", FILENAME);

  printf("\nIMPORTANTE! Não esqueça de fechar o arquivo com fclose()!");
  fclose(arquivo);
  return 0;
}