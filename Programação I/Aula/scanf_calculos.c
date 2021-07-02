#include <stdio.h>

int main(void) {
  int x;
  int y;
  int z;

  printf("Digite o primeiro número inteiro:");
  scanf("%d",&x);
  printf("Digite o segundo número inteiro:");
  scanf("%d",&y);

  printf("Resultados:");

  z = x + y;
  printf("A soma dos números é: %d\n",z);

  z = x * y * y;
  printf("O produto do primeiro número pelo quadrado do segundo é: %d\n",z);

  z = x * x;
  printf("O quadrado do primeiro número é: %d\n",z);

  z = x % y;
  printf("O módulo do primeiro número pelo segundo é: %d",z);

  return 0;
}