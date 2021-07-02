#include <stdio.h>

int main(void) {
  
  int i = 0, soma = 0, valor, media;
 
  while(i < 36) {
    printf("Digite um número:");
    scanf("%d", &valor);
    soma = soma + valor;
    i++;
  }

  media = soma / 36;
  printf("A média é %d", media);

  return 0;
}