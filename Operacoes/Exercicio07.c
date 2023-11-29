int main () {
  
  int n, i;
  float soma = 0;

  printf("Digite o valor de n:");
  scanf("%d", &n);

  for (i = 1; i <= n; i++) {
    
    soma +=  ((float)i/2) + (5*i); 
    
  }
   printf("\nSoma: %f", soma);
   return 0;
}