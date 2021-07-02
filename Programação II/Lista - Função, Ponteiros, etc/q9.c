#include <stdio.h>
#define TAM 80

void vetor(){
  int vet[TAM], maior = 0, menor = 9999;
  int pos1, pos2;

  for(int i = 0; i < TAM; i++){
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
  vet[pos2] = vet[TAM-1];

  vet[0] = maior;
  vet[TAM-1] = menor;

  for(int i = 0; i < TAM; i++){
    printf("%d\t", vet[i]);
  }
}

int main(void) {
  
  vetor();
  
  return 0;
}