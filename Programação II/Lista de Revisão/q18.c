#include <stdio.h>
#define tam 2

int main(void) {

  int mat[tam][tam];
  int LIN[tam], COL[tam], soma1 = 0, soma2 = 0;

  printf("Carregue a matriz:\n");

  for(int i = 0; i < tam; i++){
    for(int j = 0; j < tam; j++){
    scanf("%d", &mat[i][j]);
    }
  }

  for(int i = 0; i < tam; i++){
    for(int j = 0; j < tam; j++){
    soma1 = soma1 + mat[i][j];
    }
    LIN[i] = soma1;
  }

  for(int j = 0; j < tam; j++){
    for(int i = 0; i < tam; i++){
    soma2 = soma2 + mat[i][j];
    }
    COL[j] = soma2;
  }

  printf("\n\n");

  for(int i = 0; i < tam; i++){
    printf("Valor LIN: %d / Valor COL: %d\n", LIN[i], COL[i]);
  }

  return 0;
}