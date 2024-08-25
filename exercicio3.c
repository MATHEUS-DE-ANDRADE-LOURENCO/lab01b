# include <stdio.h>
# include <stdlib.h>

int main() {
  float n1;
  printf("N1: ");
  scanf("%f", &n1);

  float n2; 
  printf("\nN2: ");
  scanf("%f", &n2);

  float n3;
  printf("\nN3: ");
  scanf("%f", &n3);
  
  float me;
  printf("\nME: ");
  scanf("%f", &me);

  int nota = (n1 + n2 * 2 + n3 * 3 + me) / 7;

  printf("\n");
  if(nota >= 9) printf("Nota: A");
  else if(nota >= 7.5) printf("Nota: B");
  else if(nota >= 6) printf("Nota: C");
  else if(nota >= 4) printf("Nota: D");
  else printf("Nota = E");

}
