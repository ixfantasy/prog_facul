#include <stdio.h>

int potenciaInt(int base, int expoente){

  int total = base;

  for(int i = 0; i < expoente - 1; i++){
    total *= base;
  }

  return total;

}

int main(void) {

  int base, expoente;

  printf("Digite o valor da base e seu expoente: ");
  scanf("%d %d", &base, &expoente);

  int Resul = potenciaInt(base, expoente);

  printf("%d", Resul);

  return 0;
}