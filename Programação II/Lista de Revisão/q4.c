#include <stdio.h>
#define TAM1 40
#define TAM2 50

int main(void) {

  int vetA[TAM1], vetB[TAM2], vetC[90];
  int x = 0, y = 0, w = 0, Achei = 0;

  printf("Infome 40 elementos inteiros para o vetor A:\n");

  for(int i = 0; i < TAM1; i++){
    printf("Valor %d: ", x++);
    scanf("%d", &vetA[i]);
  }

  printf("\nAgora, informe 50 elementos inteiros para o vetor B:\n");

  for(int i = 0; i < TAM2; i++){
    printf("Valor %d: ", y++);
    scanf("%d", &vetB[i]);
  }

  for(int i = 0; i < TAM2; i++){
   for(int j = 0; j < TAM1; j++){
     if(vetA[j] == vetB[i]){
       Achei = 1;
     }
   }
   if(Achei == 0){
    vetC[w] = vetB[i];
    w++;
  }
  Achei = 0;
  }

  for(int i = 0; i < TAM1; i++){
   for(int j = 0; j < TAM2; j++){
     if(vetA[i] == vetB[j]){
       Achei = 1;
     }
   }
   if(Achei == 0){
    vetC[w] = vetA[i];
    w++;
  }
  Achei = 0;
  }

printf("\nVetor C (elementos diferentes de A e B:\n");

for(int i = 0; i < w; i++){
  printf("%d\t", vetC[i]);
}

  return 0;
}