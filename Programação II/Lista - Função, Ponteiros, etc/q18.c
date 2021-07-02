#include <stdio.h>
#include <string.h>

int ultima(char *str, char c){

  int pos;

  int tam = strlen(str);

  for(int i = 0; i < tam; i++){
    if(c == str[i]){
      pos = i;
    }
  }

  return pos;
}

int primeira(char *str, char c){

  int pos;

  int tam = strlen(str);

  for(int i = 0; i < tam; i++){
    if(str[i] == c){
      pos = i;
      return pos;
    }
  }

  return -1;
}


int main(void) {
  char str []= "teste";

  int q = ultima(str, 't');
    printf("%d", q);

  q = primeira(str, 'e');
    printf("\n%d", q);
  return 0;
}