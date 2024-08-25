# include <stdio.h>

int main() {

int dimensao;

printf("Informe a dimensão da matriz quadrada: ");
scanf("%d", &dimensao);

int matriz[dimensao][dimensao];

int elemento;
  
int menor;
int linhaMenor;
  
for(int i = 0; i < dimensao; i++) {
  for(int j = 0; j < dimensao; j++) {  

    printf("Matriz[%d][%d]: ",i, j);
    scanf("%d", &elemento);
    
    matriz[i][j] = elemento;
    
    if(elemento < menor || (i == 0 && j==0)) {
     menor = elemento;
     linhaMenor = i + 1;
    }

  }

}

printf("\nLinha com o menor elemento: %d", linhaMenor);

}
