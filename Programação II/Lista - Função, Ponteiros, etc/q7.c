#include <stdio.h>
#define TAM 10000

int omega(int x){

  int soma = 0;

  for(int i = 1; i < x; i++){
    if(x % i == 0 && x != i){
      soma = soma + i;
    }
  }

  return soma;
}

int main() {
  
  int i = 2, vet[TAM], x = 0;

  while(i < TAM){
    
    int res = omega(i);

    if(res == 1){
    vet[x] = i;
    x++;
    }

    i++;
  }

  for(int i = 0; i < x; i++){
    printf("%d ", vet[i]);
  }

  return 0;
}