#include <stdio.h>

int main(void) {

  int i = 1, valor = 0;

  while (i < 100) {
    if (i % 2 == 0) {
      valor = valor + i;
    }
    i++;
  }

  printf("O valor é %d", valor);

    return 0;
}