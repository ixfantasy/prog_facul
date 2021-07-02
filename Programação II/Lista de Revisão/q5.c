#include <stdio.h>

int main(void) {

  int RESUL[13] = {1, 0, 2, 1, 0, 2, 1, 0, 2, 1, 0, 2, 1}, APOSTA[13], Cartao, Ponto, j;

  while(1){
    j = 1;
    Ponto = 0;

    printf("(para cancelar a operação, digite 0)\nDigite o número do seu cartão: ");
    scanf("%d", &Cartao);

    if(Cartao == 0){
      break;
    }

    printf("\nDigite a sua aposta:\n");
    for(int i = 0; i < 13; i++){
      printf("Coluna %d: ", j++);
      scanf("%d", &APOSTA[i]);

      if(APOSTA[i] == RESUL[i]){
        Ponto++;
      }
    }

    if(Ponto == 13){
      printf("\nParabéns! Você acertou os 13 pontos!\n\n");
    }
    else if(Ponto > 1 && Ponto <= 12){
      printf("\nVocê acertou %d pontos!\n\n", Ponto);
    }
    else if(Ponto == 1){
      printf("\nVocê acertou somente 1 ponto!\n\n");
    }
    else if(Ponto < 1){
      printf("\nVocê não possui pontos! :(\n\n");
    }
  }

  printf("\nVolte sempre!");

  return 0;
}