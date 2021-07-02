#include <stdio.h>

int divisao(int dividendo, int divisor, int *resto){

  int resul = dividendo / divisor;

  *resto = dividendo % divisor;

  return resul;
}

int main(){
  int r, d;

  d = divisao(5, 2, &r);

  printf("Resultado: %d - Resto: %d", d, r);

  return 0;
}