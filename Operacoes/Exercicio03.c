int main() {
  int diaSemana;

  printf("Digite um número de 0 a 6: ");
  scanf("%d", &diaSemana);

  if (diaSemana <= 6 && diaSemana >= 0) {

    switch (diaSemana) {

    case 0:
      printf("Segunda-Feira");
      break;

    case 1:
      printf("Terça-Feira");
      break;

    case 2:
      printf("Quarta-Feira");
      break;

    case 3:
      printf("Quinta-Feira");
      break;

    case 4:
      printf("Sexta-Feira");
      break;

    case 5:
      printf("Sábado");
      break;

    case 6:
      printf("Domingo");
      break;

      return 0;
    }
  } else {
    printf("Você digitou um número inválido");
    return 0;
  }
}