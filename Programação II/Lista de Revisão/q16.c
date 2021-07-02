#include <stdio.h>
#define tam 50

int main(void) {

  int mat1[tam][tam], mat2[tam][tam], mat3[tam][tam];

  printf("Carregue a primeira matriz:\n");

  for(int i = 0; i < tam; i++){
    for(int j = 0; j < tam; j++){
      scanf("%d", &mat1[i][j]);
    }
  }

  printf("\nCarregue a segunda matriz:\n");

  for(int i = 0; i < tam; i++){
    for(int j = 0; j < tam; j++){
      scanf("%d", &mat2[i][j]);
    }
  }

  for(int i = 0; i < tam; i++){
    for(int j = 0; j < tam; j++){
      mat3[i][j] = mat1[i][j] + mat2[i][j];
    }
  }

  printf("\nResultado:\n");

  for(int i = 0; i < tam; i++){
    for(int j = 0; j < tam; j++){
      printf("%d\t", mat3[i][j]);
    }
    printf("\n");
  }

  return 0;
}