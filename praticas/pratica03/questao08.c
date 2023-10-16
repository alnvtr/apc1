//faça um rograma em c que calcule o fatorial de um numero inteiro.
#include <stdio.h>

int main() {
  int numero = 0;
  int fatorial = 1;
  printf("digite um numero inteiro: ");
  int leu_certo = scanf("%i", &numero);
  
  for(int i = numero; i>1; i--){
    fatorial = fatorial * i;
  }    
printf("o fatorial de %i é %i\n", numero, fatorial);
  


  return 0;
}