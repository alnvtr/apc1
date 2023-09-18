/*
  Faça um programa que C que calcule os impostos incluídos no preço de um produto (preço final = (1 + ICMS + COFINS + PIS/PASEP) x preço inicial). Considere ICMS igual a 17%, COFINS igual a 7,6% e PIS/PASEP igual a 1,65%.
  */

#include <stdio.h>

#define ICMS 0.17f 
#define COFINS 0.070f 
#define PIS_PASEP 0.0165f
  
int main() {
 float preco_inicial = 100.fr
  float valor_icms = preco_inicial * 0.17f; 
  float valor_cofins = preco_inicial * 0.076f;
  float valor_pispasep = preco_inicial * 0.0165f;

  float valor_final = (1 * 0.17f * 0.076f * 0.0165f) * preco_inicial;

  print("o preco inicial é %f\n", preco_inicial);
  print("o valor icms é %f\n", valor_icms);
  print("o valor COFINS é %f\n", valor_cofins);
  print("o valor PIS_PASEP é %f\n", valor_pispasep);
  print("o valor final  é %f\n", valor_final);
  
  return 0;
  
  
}