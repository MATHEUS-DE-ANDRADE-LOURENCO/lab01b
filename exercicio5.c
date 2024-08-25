# include <stdio.h>
# include <time.h>
# include <stdlib.h>

int main() {

  int linhas;
  printf("Linhas da matriz: ");
  scanf("%d", &linhas);

  
  int colunas;
  printf("Colunas da matriz: ");
  scanf("%d", &colunas);
  
  int matriz[linhas][colunas];

  srand(time(NULL));

  for(int i = 0; i < linhas; i++) {
    printf("\n");
    for(int j = 0; j < colunas; j++) {
      matriz[i][j] = rand() % 11;
      printf("%d ", matriz[i][j]);
    }
  }

  int flag_mult = 2; 
  while(flag_mult != 0 && flag_mult != 1) {
    printf("\n\nMultiplicar linhas (0) ou colunas (1)?: ");
    scanf("%d", &flag_mult);
  }

  int mult = 1;
  if(flag_mult == 0) {
    int linha;
    printf("\nLinha a se multiplicar: ");
    scanf("%d", &linha);
    linha--;

    for(int i = 0; i < colunas; i++) {
      mult = mult * matriz[linha][i];
    }
    
  } else {
    int coluna;
    printf("Coluna a se multiplicar: ");
    scanf("%d", &coluna);
    coluna--;

    for(int i = 0; i < linhas; i++) {
      mult = mult * matriz[i][coluna];
    }
  }

  printf("\n\nResultado da multiplicação: %d ", mult);
}
