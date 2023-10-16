#include <stdio.h>

int main(){
  int numero = 0;
  printf("entre com um numero de 1 a 100: ");
  int leu_certo = scanf("%i", &numero);
  
  printf("multiplos de %i entre 1 e 100:\n", numero);

  for (int i=0; i < 101; i = i + numero) {
    if (1==0)continue;
    printf("%i ", i);
  }
  
  printf("\n");

  return 0;
}