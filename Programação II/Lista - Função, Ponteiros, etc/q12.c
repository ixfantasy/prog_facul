#include <stdio.h>

void soma(int n){
  int soma1 = 0, soma2 = 0;

  for(int i = 0; i <= n; i++){
    if(i % 2 == 0){
      soma1 = soma1 + i;
    }

    if(i % 2 != 0){
      soma2 = soma2 + i;
    }
  }

  printf("Soma dos pares: %d, Soma dos ímpares: %d", soma1, soma2);
}

int main(void) {
  int x;

  printf("Digite um valor: ");
  scanf("%d", &x);
  soma(x);
  
  return 0;
}