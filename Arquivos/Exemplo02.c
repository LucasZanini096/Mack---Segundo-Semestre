#include <stdio.h>

int main(void) 
{
  printf("fopen com mode = a (append). \n");
  printf("- Se o arquivo existe: arquivo é aberto para leitura.\n");
  printf("- Se o arquivo não existe: fopen retorna NULL. \n");

  const char *FILENAME = "livros.txt";
  FILE *arquivo = fopen(FILENAME, "a"); //Se o arquivo já existir, vai haver a inserção de mais conteúdo 

  if (arquivo == NULL)
  {
    printf("*** Erro ao abrir o arquivo '%s'!\n", FILENAME);
    return -1;
  }

  printf("Arquivo '%s' aberto com sucesso!\n", FILENAME); //O arquivo foi aberto !!

  fputs("A arte de resolver problemas\n", arquivo); //Vai ser inserido após a última linha do arquivo
  fprintf(arquivo, "Jogos Vorazes\n"); //Possui quase a mesma de fputs, pórém não há quebra de linha

  printf("\nIMPORTANTE! Não esqueça de fechar o arquivo com fclose()!");
  fclose(arquivo);
  return 0;
}