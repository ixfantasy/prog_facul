#include <stdio.h>
#include <string.h>
#define TAM 100

int main(void) {

  char str[TAM];
  int Dig = 0;

  printf("Digite uma frase: ");
  gets(str);

  int Cont = strlen(str);

  for(int i = 0; i < Cont; i++){
    if(str[i] > 47 && str[i] < 58){
      Dig++;
    }
  }

  printf("\nA frase '%s' possui %d dígitos.", str, Dig);
  return 0;
}