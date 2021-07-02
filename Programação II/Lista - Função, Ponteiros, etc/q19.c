#include <stdio.h>
#include <string.h>

int contadepois(char *string, char let){
  int Cont = 0, Flag = 0;

  int tam = strlen(string);

  for(int i = 0; i < tam; i++){
    if(Flag == 1){
      Cont++;
    }

    if(string[i] == let){
      Flag = 1;
    }
  }

  if(Flag == 1){
    return Cont;
  } else {
    return -1;
  }
}

int main(void) {
  char string[1000];
  int var;

  var = contadepois("avaliando", 'a');

  printf("%d", var);

  return 0;
}