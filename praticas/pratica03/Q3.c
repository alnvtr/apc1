/*Faça um programa em C que imprima um qualitativo associado a uma nota lida conforme a tabela: 1 = Ruim; 2 = Insuficiente; 3 = Suficiente, 4 = Bom, 5 = Ótimo, e imprima Nota inválida nos demais casos.*/
#include <stdio.h>
int main(){
  int nota = 0;
  printf("de uma nota entre 1 e 5:");
    scanf("%i", &nota);
    if (nota == 1) {
    printf("ruim\n");
    } else if (nota == 2){
    printf("insuficiante\n");
    } else if (nota == 3){
    printf("suficiente\n");
    } else if (nota == 4){
    printf("bom\n");
    } else if (nota == 5){
    printf("otimo\n");
    } else{
    printf("nota invalida\n");
    }



  return 0;
}

