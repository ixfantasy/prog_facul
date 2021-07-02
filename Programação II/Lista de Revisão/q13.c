#include <stdio.h>
#define TAM 140
#define tam 40

int main(void) {

  int mat[TAM][tam], soma = 0;

  printf("Digite valores inteiros: ");

  for(int i = 0; i < TAM; i++){
    for(int j = 0; j < tam; j++){
      scanf("%d", &mat[i][j]);

      soma = soma + mat[i][j];
    }
  }

  printf("A soma dos elementos é %d.", soma);

  return 0;
}