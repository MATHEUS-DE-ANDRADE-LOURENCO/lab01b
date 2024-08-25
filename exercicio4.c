# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main() {
  char nome1[20];
  printf("Primeiro nome: ");
  scanf("%s", nome1);
  
  char nome2[20];
  printf("Segundo nome: ");
  scanf("%s", nome2);

  if(strcmp(nome1, nome2) < 0) printf("\n\nPrimeiro: %s\nSegundo: %s\n", nome1, nome2);
  else printf("\n\nPrimeiro: %s\nSegundo: %s\n", nome2, nome1);
}
