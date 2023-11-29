#include <stdio.h>

int main() {

  float media;
  float frequencia;

  printf("Digite a media do aluno:");
  scanf("%f", &media);

  printf("\nDigite a frequência de presença do aluno:\n");
  scanf("%f", &frequencia);


  if (frequencia < 75) {
    printf("O aluno está reprovado");
  }
  else {
    if(media >= 6) {
      printf("O aluno está aprovado");
    } else {
      printf("O aluno está de exame");
    }

  }

  return 0;
}