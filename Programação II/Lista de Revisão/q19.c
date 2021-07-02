#include <stdio.h>
#define tam 8

int main(void) {

  int mat[tam][tam];
  int Peao = 0, Torre = 0, Rei = 0, Bispo = 0, Rainha = 0, Cavalo = 0;

  printf("Digite as posições de cada peça. 1 = PEÃO // 2 = TORRE // 3 = REI // 4 = BISPO // 5 = RAINHA // 6 = CAVALO // 7 = VAGO\n");

  for(int i = 0; i < tam; i++){
    for(int j = 0; j < tam; j++){
      scanf("%d", &mat[i][j]);
    }
  }

  for(int i = 0; i < tam; i++){
    for(int j = 0; j < tam; j++){
      if(mat[i][j] == 1){
        Peao++;
      }
      else if(mat[i][j] == 2){
        Torre++;
      }
      else if(mat[i][j] == 3){
        Rei++;
      }
      else if(mat[i][j] == 4){
        Bispo++;
      }
      else if(mat[i][j] == 5){
        Rainha++;
      }
      else if(mat[i][j] == 6){
        Cavalo++;
      }
    }
  }

  int Total = Peao + Torre + Rei + Bispo + Rainha + Cavalo;

  printf("\n%d peças restantes.", Total);

  return 0;
}