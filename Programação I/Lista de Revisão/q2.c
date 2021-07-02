#include <stdio.h>
#include <string.h>
#define TAM 500

int main(void) {
  char vet1[TAM], vet2[TAM];

  printf("Digite uma palavra: ");
  gets(vet1);

  printf("Digite outra palavra: ");
  gets(vet2);

  int Cont1 = strlen(vet1);
  int Cont2 = strlen(vet2);

  int ContVo1 = 0, ContVo2 = 0;

  for(int i = 0; i < Cont1; i++){
    if(vet1[i] == 'a' || vet1[i] == 'e' || vet1[i] == 'i' || vet1[i] == 'o' || vet1[i] == 'u' || vet1[i] == 'A' || vet1[i] == 'E' || vet1[i] == 'I' || vet1[i] == 'O' || vet1[i] == 'U'){
      ContVo1++;
    }
  }

  for(int i = 0; i < Cont2; i++){
    if(vet2[i] == 'a' || vet2[i] == 'e' || vet2[i] == 'i' || vet2[i] == 'o' || vet2[i] == 'u' || vet2[i] == 'A' || vet2[i] == 'E' || vet2[i] == 'I' || vet2[i] == 'O' || vet2[i] == 'U'){
      ContVo2++;
    }
  }

  if(ContVo1 < ContVo2){
    printf("A segunda palavra tem mais vogais que a primeira");
  }
  else if (ContVo1 == ContVo2){
    printf("As duas têm a mesma quantidade de vogais");
  }
  else {
    printf("A primeira palavra tem mais vogais que a segunda");
  }

  return 0;
}