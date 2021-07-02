#include <stdio.h>

int somanum(int A, int B) {

  int soma = 0;

  for(int i = A+1; i < B; i++){
    soma += i;
  }
  
  return soma;
}

int main(){

  int A, B, Resul;

  printf("Digite dois números inteiros positivos:\n");
  scanf("%d %d", &A, &B);
  Resul = somanum(A, B);

  printf("\nO resultado da soma é: %d", Resul);
}