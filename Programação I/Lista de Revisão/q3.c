#include <stdio.h>
#define TAM 100

int main(void) {
  int vet[TAM];
  int j = 0;

  for(int i = 0; i < 320; i++){
    if(i % 3 == 0){
      printf("%d. %d \n", j, i);
      vet[j] = i;
      j++; 
    }
  }

  return 0;
}