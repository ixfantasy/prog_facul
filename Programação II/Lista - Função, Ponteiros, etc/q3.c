#include <stdio.h>

int arit(float A, float B, float C){

  float media;

  media = (A + B + C) / 3;

  return media;
}

int pond(float D, float E, float F){

  float media;

  media = (D + E + F) / (5 + 3 + 2);

  return media;
}

int main() {
  
  float nota1, nota2, nota3;
  char letra;
  float MA, MP;

  printf("Digite as 3 notas de um aluno: ");
  scanf("%f %f %f", &nota1, &nota2, &nota3);

  printf("\nEscolha o método A ou P: ");
  getchar();
  scanf("%c", &letra);

  if(letra == 'a' || letra == 'A'){
    MA = arit(nota1, nota2, nota3);

    printf("\nA média é %.0f.", MA);
  }
  else if(letra == 'p' || letra == 'P'){
    MP = pond(nota1, nota2, nota3);

    printf("\nA média ponderada é %.0f.", MP);
  }
 
  return 0;
}