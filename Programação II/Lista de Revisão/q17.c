#include <stdio.h>
#define tam 90

int main(void) {

  int mat[tam][tam], mat2[tam][tam];
  int vet[tam];
  int k = 0;

  printf("Carregue a matriz com valores inteiros: ");

  for(int i = 0; i < tam; i++){
    for(int j = 0; j < tam; j++){
      scanf("%d", &mat[i][j]);

      if(i == j){
        vet[k] = mat[i][j];
        k++;
      }
    }
  }

  printf("\n\n");

  for(int i = 0; i < tam; i++){
    for(int j = 0; j < tam; j++){
      printf("%d\t", mat[i][j]);
    }
    printf("\n");
  }

  for(int i = 0; i < tam; i++){
    for(int j = 0; j < tam; j++){
      mat2[i][j] = mat[i][j] - vet[i];
    }
  }

  printf("\n\n");

  for(int i = 0; i < tam; i++){
    for(int j = 0; j < tam; j++){
      printf("%d\t", mat2[i][j]);
    }
    printf("\n");
  }

  
  return 0;
}