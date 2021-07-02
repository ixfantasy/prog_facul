#include <stdio.h>
#define TAM 45
#define tam 3

int main(void) {

  int mat[TAM][tam], soma = 0, soma2 = 0;
  int med[TAM];

  printf("Digite as notas:\n");

  for(int i = 0; i < TAM; i++){
    for(int j = 0; j < tam; j++){
      scanf("%d", &mat[i][j]);

      soma = soma + mat[i][j];

      soma2 = soma2 + mat[i][j];
    }
    med[i] = soma / tam;
    soma = 0;
  }

  int k = 1;
  int Med = soma2 / (TAM * tam);

  printf("Média da turma: %d\nMédia de cada aluno:\n", Med);

  for(int i = 0; i < TAM; i++){
    printf("Aluno %d: %d\n", k++, med[i]);
  }

  return 0;
}