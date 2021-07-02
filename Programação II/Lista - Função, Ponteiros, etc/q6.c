#include <stdio.h>

int fat(int A){

  int total = A;

  for(int i = A-1; i > 0; i--){
    total *= i;
  }

  return total;
}

int main(void) {

  int x;

  printf("Digite um valor inteiro positivo: ");
  scanf("%d", &x);

  int resul = fat(x);

  printf("O resultado do fatorial é: %d", resul);

  return 0;
}