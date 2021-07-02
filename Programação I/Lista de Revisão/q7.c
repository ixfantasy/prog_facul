#include <stdio.h>
#define TAM 8

int main(void) {
  int id[TAM];
  int jogo[TAM];
  int grat[TAM];
  int j = 1;

  printf("Digite o número do ID de cada cliente: \n");
  for(int i = 0; i < TAM; i++){
    printf("Cliente %d. ", j++);
    scanf("%d", &id[i]);
  }

  j = 1;

  printf("\nDigite quantos jogos cada cliente alugou: \n");
  for(int i = 0; i < TAM; i++){
    printf("Cliente %d. ", j++);
    scanf("%d", &jogo[i]);

    if(jogo[i] >= 10){
      grat[i] = jogo[i] / 10;
    }
    else {
      grat[i] = 0;
    }
  }

  printf("\n\n");
  j = 1;

  for(int i = 0; i < TAM; i++){
    printf("Cliente %d de ID: '%d' alugou %d jogos. Tem direito a %d locações grátis.\n\n", j++, id[i], jogo[i], grat[i]);
  }

  return 0;
}