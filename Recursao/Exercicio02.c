#include <string.h>
#include <stdio.h>


int contarDigitos(int numero) {
    int contador = 0;

    // Se o número for negativo, transforma-o em positivo
    if (numero < 0) {
        numero = -numero;
    }

    // Loop para contar os dígitos
    do {
        numero /= 10;
        contador++;
    } while (numero != 0);

    return contador;
}


int digito_atual(int num, int contador){

  char text_num[20];
  sprintf(text_num, "%d", num); 

  int digito = text_num[contador] - '0';
  
  return digito;
  
}

int soma_digitos(int num, int tamanho_num){

  if(tamanho_num < 0) return 0;

  int digito = digito_atual(num, tamanho_num);

  return digito + soma_digitos(num, tamanho_num - 1);
    
}

int main(void) {

  int a = 123;
  int tamanho_num = contarDigitos(a) - 1;
  int resultado = soma_digitos(a, tamanho_num);

  printf("Resultado: %d", resultado);
  
  return 0;
}