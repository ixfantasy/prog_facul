#include <stdio.h>
#include <string.h>
#define TAM 200

int main(void) {

  char frase[TAM];

  printf("Digite uma frase: ");
  gets(frase);

  int tam = strlen(frase);

  for(int i = 0; i < tam; i++){
    if(frase[i] != ' '){
      printf("%c%c", frase[i], frase[i]);
    } else {
      printf("%c", frase[i]);
    }
  }

  return 0;
}