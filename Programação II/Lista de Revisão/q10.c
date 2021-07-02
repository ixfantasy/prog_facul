#include <stdio.h>
#include <string.h>
#define TAM 50

int main() {

  char str[TAM], str1[TAM];
  int Achei = 0, Cont = 0, k = 0;

  printf("Digite 1 palavra: ");
  gets(str);

  int tam = strlen(str);

  for(int i = 0; i < tam; i++){
   for(int j = 0; j < tam; j++){
     if(str[i] == str1[j]){
      Achei = 1;
     }
   }
    if(Achei == 0){
      str1[k] = str[i];
      k++;
    }
    Achei = 0;
  }

  int tam2 = strlen(str1);

  for(int i = 0; i < tam2; i++){
    Cont++;
  }

  printf("A palavra possui %d letras diferentes.", Cont);

  return 0;
}