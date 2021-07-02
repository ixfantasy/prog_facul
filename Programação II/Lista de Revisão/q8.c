#include <stdio.h>
#include <string.h>
#define TAM 1000

int main(void) {

  char str[TAM];
  int N, pos = 0;

  printf("Digite uma frase: ");
  gets(str);

  int Cont = strlen(str);

  for(int i = 0; i < Cont; i++){
    if(str[i] == 'n'){
      pos = i;
      N = 1;
    }

    if(N == 1 && (str[i] == 'p' || str[i] == 'b')){
      str[pos] = 'm';
      N = 0;
    }
  }

  printf("A frase final é: %s", str);

  return 0;
}