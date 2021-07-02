#include <stdio.h>

int divisao(int A, int B, int *C){

  *C = A % B;

  return (float)(A / B);
}

int main(void) {

  int x, y, res;
  float Resul;

  printf("Digite 2 valores: ");
  scanf("%d %d", &x, &y);

  Resul = divisao(x, y, &res);

  printf("\nO resultado é %.1f, e o resto da divisão é %d", Resul, res);
  


  return 0;
}