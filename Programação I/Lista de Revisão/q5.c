#include <stdio.h>
#include <string.h>
#define TAM 500

int main(void) {
  char vet[TAM];

  printf("Digite uma frase em letras maiúsculas (sem acentos): ");
  gets(vet);

  int Cont = strlen(vet);

  for(int i = 0; i < Cont; i++){
    if(vet[i] != ' ' && vet[i] != ',' && vet[i] != '.'){
      vet[i] = vet[i] + 32;
    }
  }

  printf("A nova frase é: '%s'", vet);

  return 0;
}