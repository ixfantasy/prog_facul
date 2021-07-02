#include <stdio.h>

int main() {
  int x,ano;

  printf("Digite o ano de seu nascimento:");
  scanf("%d",&ano);

  x = 2019 - ano;
  printf("Sua idade é %d",x);

  return 0;
}