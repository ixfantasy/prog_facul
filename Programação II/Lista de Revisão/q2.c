#include <stdio.h>
#define TAM 80

int main(void) {

  int vet[TAM], pos1, pos2, maior = 0, menor = 99999999, j = 0;

  printf("Informe 80 valores inteiros:\n");

  for(int i = 0; i < TAM; i++){
    printf("Valor %d: ", j++);
    scanf("%d", &vet[i]);

    if(vet[i] > maior){
      maior = vet[i];
      pos1 = i;
    }

    if(vet[i] < menor){
      menor = vet[i];
      pos2 = i;
    }
  }

  vet[pos1] = vet[0];
  vet[pos2] = vet[4];

  vet[0] = maior;
  vet[4] = menor;

  for(int i = 0; i < TAM; i++){
    printf("%d\t", vet[i]);
  }

  return 0;
}