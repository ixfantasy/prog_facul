#include <stdio.h>
#define TAM 50

int main(void) {

  int vet[TAM], x, Achei = 0, j = 0;

  printf("Informe 50 elementos inteiros:\n");

  for(int i = 0; i < TAM; i++){
    printf("Valor %d: ", j++);
    scanf("%d", &vet[i]);
  }

  printf("\nDigite um valor inteiro qualquer: ");
  scanf("%d", &x);

  for(int i = 0; i < TAM; i++){
    if(vet[i] == x){
      Achei = 1;
      printf("\nO número %d existe na posição %d.", vet[i], i);
      break;
    }
  }

  if(Achei == 0){
    printf("\nO número %d não existe no vetor.", x);
  }

  return 0;
}