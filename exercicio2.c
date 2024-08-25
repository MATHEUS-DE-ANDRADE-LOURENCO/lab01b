# include <stdio.h>
# include <stdlib.h>

void imprimeVetor(int *v, int inicio, int fim) {
  for (int i = inicio; i < fim; i++) {
    printf("%d ", v[i]);
  }
  printf("\n");
}

int main() {

int tam = 0;


while(tam % 2 == 0) {
  printf("Informe o número máximo (deve ser número ímpar): ");
  scanf("%d", &tam);
}

int *vetor; 
vetor = (int*) calloc(tam, sizeof(int));

for (int i = 0; i < tam; i++) {
  vetor[i] = i+1;
}

int inicio = 0;
int fim = tam;

while(inicio < fim) {
  imprimeVetor(vetor, inicio, fim);
  inicio++;
  fim--;
  
}

}
