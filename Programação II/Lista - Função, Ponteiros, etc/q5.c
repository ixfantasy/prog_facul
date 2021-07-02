#include <stdio.h>

int mold(int A, int B, char C){

  int mat[A][B], car = 0;

  for(int i = 0; i < A; i++){
    for(int j = 0; j < B; j++){
      if(i == 0){
        printf("%c", C);
        car++;
      }

      if((i != 0 && i != A-1) && (j == 0 || j == B-1)){
        printf("%c", C);
        car++;
      }

      if((i != 0 && i != A-1) && (j != 0 && j != B-1)){
        printf(" ");
      }

      if(i == A-1){
        printf("%c", C);
        car++;
      }
  }
  printf("\n");
  }

  return car;
}

int main(void) {

  int a, b;
  char c;
  
  printf("Entre com dois valores inteiros: ");
  scanf("%d %d", &a, &b);

  printf("Escolha uma letra: ");
  scanf(" %c", &c);

  int Total = mold(a, b, c);

  printf("\n%d foram utilizados.", Total);

  return 0;
}