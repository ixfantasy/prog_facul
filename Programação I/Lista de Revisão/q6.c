#include <stdio.h>
#include <string.h>
#define TAM 30

int main(void) {
  int nota[TAM];
  char conc[TAM];
  int j = 1;

  printf("Digite a nota de cada aluno: \n");

  for(int i = 0; i < TAM; i++){
    printf("Aluno %d. ", j++);
    scanf("%d", &nota[i]);
  }

  printf("\n\n");

  j = 1;
  int ContA = 0, ContB = 0, ContC = 0, ContD = 0, ContE = 0;

  for(int i = 0; i < TAM; i++){
    if(nota[i] <= 10 && nota[i] >= 9){
      conc[i] = 'A';
      ContA++;
    }
    
    if(nota[i] < 9 && nota[i] >= 7){
      conc[i] = 'B';
      ContB++;
    }

    if(nota[i] < 7 && nota[i] >= 5){
      conc[i] = 'C';
      ContC++;
    }

    if(nota[i] < 5 && nota[i] >= 3){
      conc[i] = 'D';
      ContD++;
    }

    if(nota[i] < 3 && nota[i] >= 0){
      conc[i] = 'E';
      ContE++;
    }
  }

  for(int i = 0; i < TAM; i++){
    printf("Aluno %d. tirou %d e teve conceito %c \n", j++, nota[i], conc[i]);
  }

   printf("\n\n");

  printf("%d tiraram conceito A\n%d tiraram conceito B\n%d tiraram conceito C\n%d tiraram conceito D\n%d tiraram conceito E", ContA, ContB, ContC, ContD, ContE);

  return 0;
}