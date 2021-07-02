#include <stdio.h>
#define tam 2

int main(void) {

  int mat[tam][tam], x, Achei = 0;

  for(int i = 0; i < tam; i++){
    for(int j = 0; j < tam; j++){
      scanf("%d", &mat[i][j]);
    }
  }

  printf("Digite um número: ");
  scanf("%d", &x);

   for(int i = 0; i < tam; i++){
    for(int j = 0; j < tam; j++){
      if(mat[i][j] == x){
        printf("Esse número existe dentro da matriz!");
        Achei = 1;
        break;
      }
    }
  }

  if(Achei == 0){
    printf("Esse número não existe dentro da matriz!");
  }
  return 0;
}