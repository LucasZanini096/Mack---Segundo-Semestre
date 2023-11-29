
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int verificacaoPalindromo(char *str){

  int i, j;

  for (i = 0, j = strlen(str)-1; i < j; i++, j-- ){
    if(str[i] != str[j])
      return 0;
  }
  return 1;
}

int mystrlen(char *str){

  int count = 0;
  for (int i = 0; str[i] != '\0'; i++){
    count++;
  }
  return count;
}

char remove_newline(char *str) {

    
    int str_length = mystrlen(str);

    if (str[str_length - 1] == '\n'){
        str[str_length - 1] = '\0';
        str_length = str_length - 1;
    }

    return *str;

}


int main(void) {

  
char palavra[50];

  printf("Digite uma palavra:");
  fgets(palavra, 50, stdin);

  remove_newline(palavra);
  int resultado = verificacaoPalindromo(palavra);


  if (resultado == 1){
    puts("A palavra digitada é um palíndromo");
  } else {
    puts("A palavra digitada não é um palíndromo");
  }
   return 0;
}
