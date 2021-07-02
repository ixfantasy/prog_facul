#include <stdio.h>

struct pesquisa {
  char sexo;
  char olho;
  char cabelo;
  int idade;
};

int main(void) {
  struct pesquisa Resul;

  int Resp, Novo = 900, Total = 0, IdadeF = 0, ContF = 0, ContP = 0;

  while(Resp != -1){
    printf("Digite o seu sexo: ");
    scanf(" %c", &Resul.sexo);

    printf("Digite a cor do seu olho: ");
    scanf(" %c", &Resul.olho);

    printf("Digite a cor do seu cabelo: ");
    scanf(" %c", &Resul.cabelo);

    printf("Digite a sua idade: ");
    scanf("%d", &Resul.idade);

    Total++;

    if(Resul.sexo == 'm' && Resul.idade < Novo){
      Novo = Resul.idade;
    }
    if(Resul.sexo == 'f'){
      IdadeF = IdadeF + Resul.idade;
      ContF++;
    }
    if(Resul.olho == 'a' && Resul.cabelo == 'l'){
      ContP++;
    } 

    printf("Deseja prosseguir? -1 para cancelar: ");
    scanf("%d", &Resp);

    if(Resp == -1){
      break;
    }
  }

  printf("\nO homem mais novo tem %d anos.", Novo);
  printf("\nO total de entrevistados é %d.", Total);

  float MedF = (float)IdadeF / ContF;
  printf("\nA idade média das mulheres é %.2f.", MedF);

  float Perc = (float)(ContP * 100) / Total;
  printf("\nO percentual é %.2f", Perc);

  return 0;
 
}