int Primo(int n, int contador, int divisor) {
  
  if (divisor > n) return contador;

  int restoDivisao = n % divisor;

  if (restoDivisao == 0) contador++;

  return Primo(n, contador, divisor + 1);
}

int main() {
  
  int num;
  int divisor = 1;
  int contador = 0;

  scanf("%d", &num);

  int resultado = Primo(num, contador, divisor);

  printf("%d\n", resultado);
  
  if (resultado == 2) {
    printf("0");
  } else {
    printf("1");
  }

  return 0;
}