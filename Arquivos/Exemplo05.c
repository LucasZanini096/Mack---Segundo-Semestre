#include <stdio.h>

int main(void) 
{
  printf("fopen com mode = r (read). \n");
  printf("- Se o arquivo existe: arquivo é aberto para leitura.\n");
  printf("- Se o arquivo não existe: fopen retorna NULL. \n");

  const char *FILENAME = "livros.txt";
  FILE *arquivo = fopen(FILENAME, "r");

  if (arquivo == NULL) //Se o arquivo não existir, o programa irá emitir um erro!
  {
    printf("*** Erro ao abrir o arquivo '%s'!\n", FILENAME); 
    return -1;
  }

  printf("Arquivo '%s' criado com sucesso!\n", FILENAME);

  char linha[128]; //Me permite ler uma linha inteira

  while (!feof(arquivo)){ //feof(arquivo) verifica se chegou ao final do arquivo.
    
    if (NULL != fgets(linha, 128, arquivo)) //Se a linha não for vazia, ela vai ser printada
    printf("Valor lido: %s\n", linha); //print da linha no terminal

  else
    printf("Erro de leitura!\n"); //print de erro em caso ela não exista
  }
  
  printf("Leituras realizadas com sucesso");

  printf("\nIMPORTANTE! Não esqueça de fechar o arquivo com fclose()!");
  fclose(arquivo); //Fechamento do arquivo
  return 0; 
}