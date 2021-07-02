#include <stdio.h>
#define TAM 40
#define tam 50

int main(void) {

  int mat[TAM][tam], maior = 0, posli, poscol;

  printf("Digite valores inteiros:\n");

  for(int i = 0; i < TAM; i++){
    for(int j = 0; j < tam; j++){
      scanf("%d", &mat[i][j]);

      if(mat[i][j] > maior){
        maior = mat[i][j];
        posli = i;
        poscol = j;
      }
    }
  }

  printf("\n\n");

  for(int i = 0; i < TAM; i++){
    for(int j = 0; j < tam; j++){
      printf("%d\t", mat[i][j]);
    }
    printf("\n");
  }

  printf("\n\nO maior elemento é: %d.\n\nSua posição é:\nLinha %d e Coluna %d.", maior, posli, poscol);

  return 0;
}