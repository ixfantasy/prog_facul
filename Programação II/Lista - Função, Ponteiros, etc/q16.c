#include <stdio.h>
#define TAM 5

void leitura(int *vet, int n){

  for(int i = 0; i < n; i++){
    scanf("%d", &vet[i]);
  }

}

void calculo(int *vet, int n){
  int maior = 0, menor = 99999;

  for(int i = 0; i < n; i++){
    if(vet[i] > maior){
      maior = vet[i];
    }
    if(vet[i] < menor){
      menor = vet[i];
    }
  }

  printf("%d, %d", maior, menor);
}

int main(void) {

  int vet[TAM];

  leitura(vet, TAM);

  calculo(vet, TAM);

  return 0;
}