#include <stdio.h>

int fat(int x){

  int ft = 1;

  for(int i = x; i > 0; i--){
    ft = ft * i;
  }

  return ft;
}

int arr(int x, int y){
  int ft = 1;

  for(int i = x; i > 0; i--){
    ft = ft * i;
  }

  int ft2 = 1;

  for(int i = x - y; i > 0; i--){
    ft2 = ft2 * i;
  }

  return ft / ft2;
}

int main(void) {

  int n, k;

  printf("Digite um valor: ");
  scanf("%d", &n);

  int resul1 = fat(n);
  printf("Resultado do fatorial: %d", resul1);

  printf("\n\nDigite outro valor: ");
  scanf("%d", &k);

  int resul2 = arr(n, k);
  printf("Resultado do arranjo: %d", resul2);

  return 0;
}