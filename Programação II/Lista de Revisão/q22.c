#include <stdio.h>
#define TAM 9

int main(void) {

  int mat[TAM][TAM];
  int x = 1, y = 1;

  for(int i = 0; i < TAM; i++){

    printf("Tabuada do %d:\n", x);
    
    for(int j = 0; j < TAM; j++){
      mat[i][j] = x * y;
      printf("%d x %d = %d //\t", x, y, mat[i][j]);
      y++;
    }
    printf("\n\n");
    y = 1;
    x++;
  }

  return 0;
}