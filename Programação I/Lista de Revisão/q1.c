#include <stdio.h>
#include <string.h>
#define tam 500

int main(void) {
  char vet[tam];

  printf("Digite o seu nome: ");
  gets(vet);

  for(int i = 0; i < 4; i++){
    printf(" %c ", vet[i]);
  }

  return 0;
}