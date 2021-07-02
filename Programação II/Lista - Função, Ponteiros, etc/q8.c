#include <stdio.h>
int i = 0;
int vet[10000];

void invert(){

  for(int j = i-1; j >= 0; j--){
    printf("%d\t", vet[j]);
  }
}

int main(void) {

  int x;
  
  while(1){
  printf("Digite um valor: ");
  scanf("%d", &x);

  if(x == 00){
    break;
  }

  vet[i] = x;

  i++;

  getchar();
  }

  invert();

  return 0;
}