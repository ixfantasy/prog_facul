#include <stdio.h>
#include <string.h>
#define TAM 80

int main(void) {

  char str[TAM];
  int S = 0, R = 0, ContS = 0, ContR = 0;

  printf("Digite uma frase: ");
  gets(str);

  int Cont = strlen(str);

  for(int i = 0; i < Cont; i++){
    if(str[i] == 's'){
      S++;
      if(S == 2){
        ContS++;
        S = 0;
      }
    }

    if(str[i] == 'r'){
      R++;
      if(R == 2){
        ContR++;
        R = 0;
      }
    }

    if(S == 1 && str[i] != 's'){
      S = 0;
    }

    if(R == 1 && str[i] != 'r'){
      R = 0;
    } 
  }

  int Total = ContR + ContS;

  printf("Total de pares: %d + %d = %d", ContR, ContS, Total);

  return 0;
}