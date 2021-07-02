#include <stdio.h>

int main(void) {

  int i, tam = 8;
  int j, tan = 2;

  for(i = 0; i < tam; i++){
    for (j = 0; j < tan; j++){
      printf("[ ]");
   }
    tan++;
    printf("\n");
  }
  
  return 0;
}