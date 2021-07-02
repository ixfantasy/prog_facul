#include <stdio.h>
#include <math.h>

float dist(int x1, int x2, int y1, int y2){
  float d;

  d = (pow((x2 - x1), 2) - pow((y2 - y1), 2)) / 2;

  return d;
}


int main(void) {

  int x1, x2, y1, y2;
  
  printf("Digite o valor de x1 e x2: ");
  scanf("%d %d", &x1, &x2);

  printf("Digite o valor de y1 e y2: ");
  scanf("%d %d", &y1, &y2);

  float resul = dist(x1, x2, y1, y2);

  printf("\n\nO resultado da distância é: %.2f", resul);

  return 0;
}