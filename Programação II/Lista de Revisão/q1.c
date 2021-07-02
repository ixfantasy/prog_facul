#include <stdio.h>
#define TAM 100

int main(void) {

    int vet[TAM], j = 0, maior = 0, soma1 = 0, soma2 = 0, pos;

    printf("Informe 100 valores inteiros: \n");

    for(int i = 0; i < TAM; i++){
      printf("Valor %d: ", j++);
      scanf("%d", &vet[i]);

      if(vet[i] > maior){
        maior = vet[i];
        pos = i;
      }

      if(i % 2 == 0){
        soma1 = soma1 + vet[i]; 
      }

      if(vet[i] % 2 != 0){
        soma2 = soma2 + vet[i];
      }
    }

    printf("\nO maior elemento é %d e o número da sua posição é %d.\nA soma dos elementos que estão nos índices pares é %d.\nA soma dos elementos ímpares é %d.", maior, pos, soma1, soma2);

  return 0;
}