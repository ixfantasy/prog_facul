#include <stdio.h>
#define TAM 20

int main(void) {

  int mat[TAM][TAM];
  int Cod, Peso;
  int Cobre = 0, Carvao = 0, Chumbo = 0, Ferro = 0, Alum = 0, Niq = 0, Des = 0;

  printf("Preencha a matriz:\n");

  for(int i = 0; i < TAM; i++){
    for(int j = 0; j < TAM; j++){
      scanf("%d", &mat[i][j]);

      Cod = mat[i][j] % 10;

      Peso = mat[i][j] / 10;

      if(Cod == 1){
        Cobre = Cobre + Peso;
      }

      else if(Cod == 2){
        Carvao = Carvao + Peso;
      }

      else if(Cod == 3){
        Chumbo = Chumbo + Peso;
      }

      else if(Cod == 4){
        Ferro = Ferro + Peso;
      }

      else if(Cod == 5){
        Alum = Alum + Peso;
      }

      else if(Cod == 6){
        Niq = Niq + Peso;
      }
      else {
        Des = Des + Peso;
      }
    }
  }

  printf("\nQuantidade total de:\n\n1. Cobre: %d\n2. Carvão: %d\n3. Chumbo: %d\n4. Ferro: %d\n5. Alumínio: %d\n6. Níquel: %d\n7. Desconhecido: %d", Cobre, Carvao, Chumbo, Ferro, Alum, Niq, Des);
  
  return 0;
}