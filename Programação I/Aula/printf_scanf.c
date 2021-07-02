#include <stdio.h>

int main() {
  int idade;
  float altura;

  printf("Digite sua idade:");
  scanf("%d",&idade);
  printf("Sua idade é %d\n",idade);

  printf("Digite sua altura:");
  scanf("%f",&altura);
  printf("Sua altura é %.2f",altura);
  
  return 0;
}