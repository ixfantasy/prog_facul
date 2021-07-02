#include <stdio.h>

int main(void) {
  
  int n;
  float nota[n];
  int soma = 0, media;
  int j = 0;

  printf("Digite a quantidade de notas: ");
  scanf("%d", &n);

  for(int i = 0; i < n; i++){
    printf("Digite o valor da nota %d: ", i);
    scanf("%f", &nota[i]);

    soma = soma + nota[i];
  }

  media = soma / n;
  printf("A média é %d\n", media);

  for(int i = 0; i < n; i++){
    printf("nota %f ", nota[i]);
    if (nota[i] > media){
      j++;
    }
  }

  printf("%d alunos tiraram nota acima da média.", j);

  return 0;
}