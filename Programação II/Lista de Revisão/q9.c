#include <stdio.h>
#include <string.h>

int main() {

  char ENT[50], SAI[50];
  int Cont = 0, Cont2 = 0, x = 1, k = 0;

  printf("Digite algo: ");
  gets(ENT);

  for(int i = 0; i < 50; i++){
    if(ENT[i] != ' '){
      SAI[k] = ENT[i];
      k++;
    }
  }

  for(int i = 0; i < x; i++){
    if(ENT[i] == '\0'){
      break;
    }

    Cont++;
    x++;
  }

  x = 1;

  for(int i = 0; i < x; i++){
    if(SAI[i] == '\0'){
      break;
    }

    Cont2++;
    x++;
  }

  printf("\n%s = %d", ENT, Cont);
  printf("\n\n%s = %d", SAI, Cont2);

  return 0;
}