#include <stdio.h> // função scanf e printf

int main(){
  char item1[61];
  int quantidade1;
  float valor1;

  char item2[61];
  int quantidade2;
  float valor2;

  char item3[61];
  int quantidade3;
  float valor3;

  
  printf("entre com nome o item1: ");
  scanf("%s", item1);
  printf("entre com a qtde do item 1: ");
  scanf("%i", &quantidade1);
  printf("entre com o valor do item 1: ");
  scanf("%f",&valor1);

  printf("entre com nome o item2: ");
  scanf("%s", item2);
  printf("entre com a qtde do item 2: ");
  scanf("%i", &quantidade2);
  printf("entre com o valor do item 2: ");
  scanf("%f",&valor2);

  printf("entre com o nome item 3: ");
  scanf("%s", item3);
  printf("entre com a qtde do item 3: ");
  scanf("%i", &quantidade3);
  printf("entre com o valor do item 3: ");
  scanf("%f",&valor3);

  float total = quantidade1 * valor1 ;
  total = total + quantidade2 * valor2; 
  total = total + quantidade3 * valor3 ;
    
  printf("------------------------------\n");
  printf("          NOTA LEGAL          \n");
  printf("------------------------------\n");
  printf("Item           Qtd. valor    \n");
  printf("%-14.14s %03i %10.2f\n", item1, quantidade1, valor1);
  printf("%-14.14s %03i %10.2f\n", item2, quantidade2, valor2);
  printf("%-14.14s %03i %10.2f\n", item3, quantidade3, valor3);

 
  printf("------------------------------\n");
  printf("Total %26.2f\n",total);
  printf("------------------------------\n");

  



  
  
  return 0;
}