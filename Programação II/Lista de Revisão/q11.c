#include <stdio.h>
#include <string.h>
#define TAM 2

int main(void) {

  int vetSal[TAM], MaiorSal = 0, j = 1;
  char strNome[TAM][100];

  printf("Digite o nome do funcionário e quanto é o seu salário:\n");

  for(int i = 0; i < TAM; i++){
    printf("\nNome: ");
    gets(strNome[i]);

    printf("Salário: R$");
    scanf("%d", &vetSal[i]);

    getchar();

    if(vetSal[i] > MaiorSal){
      MaiorSal = vetSal[i];
    }
  }

  for(int i = 0; i < TAM; i++){
    printf("\nFuncionário %s / Salário: R$%d", strNome[i], vetSal[i]);
  }

  printf("\n\nQuem recebe menos da metade do maior salário:\n");

  int Novo = MaiorSal / 2;

  int tam, Flag = 0;
  char Sob[500];
  
  for(int w = 0; w < TAM; w++){
    if(Novo > vetSal[w]){
      strcpy(Sob, strNome[w]);

      tam = strlen(Sob);

      for(int k = 0; k < tam; k++){
        if(Flag == 1){
          printf("%c", Sob[k]);
        }

        if(Sob[k] == ' '){
          Flag = 1;
        }
      }
      printf("\n");
    }
    Flag = 0;
  }
  printf("\n\nValor do salário de quem se chama Maria:");

  for(int i = 0; i < TAM; i++){
    if(strncmp(strNome[i], "Maria ", 6) == 0){
      printf("\nSalário %d: R$%d", j++, vetSal[i]);
    }
  }
  
  return 0;
}