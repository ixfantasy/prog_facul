#include <stdio.h>
#define TAM 5

void exibe(int *vet, int n){
  int soma = 0;

  for(int i = 0; i < n; i++){
    soma = soma + vet[i];
  }

  if(soma % 2 == 0){
    for(int i = 0; i < n; i++){
      printf("%d", vet[i]);
    }
  }
  else {
    for(int i = n-1; i >= 0; i--){
      printf("%d", vet[i]);
    }
  }

}

int main(void) {
  int vet[TAM];

  for(int i = 0; i < TAM; i++){
    scanf("%d", &vet[i]);
  }

  exibe(vet, TAM);
  return 0;
}