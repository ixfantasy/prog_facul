#include <stdio.h>
#define tam 5

int main(void) {

  int vet[tam];

  //leitura de valores
  printf("Digite os valores:\n");

  for(int i = 0; i < tam; i++){
    printf("%d: ", i);
    scanf("%d", &vet[i]);
}

  //somar tudo com 10
  for(int i = 0; i < tam; i++){
    vet[i] = vet[i] + 10;
  }

  //mostrar na tela
  printf("\nSeu vetor somado com 10 em cada elemento é:\n");

  for(int i = 0; i < tam; i++){
    printf("%d ", vet[i]);
  }

  return 0;

}