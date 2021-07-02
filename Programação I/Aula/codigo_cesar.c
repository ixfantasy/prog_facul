#include <stdio.h>
#include <string.h>
#define TAM 500
#define gets(a) fgets(a,sizeof(a),stdin);  a[strcspn(a, "\n")] = '\0';

int main(void) {

  char frase[TAM];
  int x, y, z;

  printf("Digite uma frase: ");
  gets(frase);

  printf("Digite um número: ");
  scanf("%d", &x);

  int tam = strlen(frase);

  for(int i = 0; i < tam; i++){
    if(frase[i] != ' '){
    frase[i] = frase[i] + x;
    }
    if(frase[i] > 122) {
      y = frase[i] - 122;
      frase[i] = '@' + y;
    }
  }

  printf("A frase nova é: %s", frase);
  

  return 0;
}