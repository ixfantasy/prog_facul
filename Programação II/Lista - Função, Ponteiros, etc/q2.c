#include <stdio.h>

int transf(int A){

  int hor, y, min, seg;

  hor = A / 3600;

  y = A % 3600;

  min = y / 60;

  seg = y % 60;

  printf("\nO tempo vale %dh : %dm : %ds", hor, min, seg);

  return 0;

}

int main() {

  int seg;
  
  printf("Digite o tempo em segundos: ");
  scanf("%d", &seg);

  transf(seg);

  return 0;
}