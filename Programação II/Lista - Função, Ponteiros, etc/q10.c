#include <stdio.h>
#define tam 15
#define TAM 10

char gab[TAM];
int alun[tam];
int nota[tam];

void gabar(){

  int j = 1;

  printf("Digite o gabarito da prova:\n");
  for(int i = 0; i < TAM; i++){
    printf("Questão %d: ", j++);
    scanf(" %c", &gab[i]);
    getchar();
  }
}

void aluno(){

  int k = 1, Nota = 0;
  char letra;

  for(int i = 0; i < tam; i++){
    printf("\nDigite o número do aluno: ");
    scanf("%d", &alun[i]);

    printf("Digite as respostas do aluno:\n");
    for(int j = 0; j < TAM; j++){
      printf("Questão %d: ", k++);
      scanf(" %c", &letra);

      if(letra == gab[j]){
        Nota++;
      }
    }
    nota[i] = Nota;
    Nota = 0;
    k = 1;
  }

  printf("\n\n");

  for(int i = 0; i < tam; i++){
    printf("Número do aluno: %d, Nota: %d\n", alun[i], nota[i]);
  }
}

void aprov(){

  float Resul;
  int Cont = 0;

  for(int i = 0; i < tam; i++){
    if(nota[i] >= 2){
      Cont++;
    }
  }

  Resul = (float)(Cont * 100) / tam;

  printf("\nPorcentagem de aprovação: %.2f.", Resul);
}

int main(void) {

  gabar();

  aluno();

  aprov();

  return 0;
}