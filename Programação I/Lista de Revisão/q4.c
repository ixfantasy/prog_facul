#include <stdio.h>
#define TAM 12

int main(void) {
  int sal[TAM];
  int anual = 0;

  printf("Digite o valor de cada salário: ");
  for(int i = 0; i < TAM; i++){
    scanf("%d", &sal[i]);
    anual = anual + sal[i];
  }

  for(int i = 0; i < TAM; i++){
    printf("%d. %d \n", i, sal[i]);
  }

  printf("Total anual: %d", anual);

  return 0;
}