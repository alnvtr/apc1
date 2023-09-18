//Faça um programa em C que calcule as raízes de uma equação do 2° grau através da fórmula de Bhaskara (-b +/- raiz_quadrada(b² - 4ac)/2a).



#include <stdio.h>
#include <math.h>

 int main() {
   int coeficiente_a = 2.0f;
   int coeficiente_b = 1.0f;
   int coeficiente_c = -3.0f;
   
  //b² -4ac
   double delta = pow(coeficiente_b, 2) - 4 * coeficiente_a * coeficiente_c;
  
   // x1 = -b + raiz(delta)/ 2a
   double raiz_x1 = (-coeficiente_b + sqrt(delta)) / 2 * coeficiente_a;
   
   // x1 = -b + raiz(delta)/ 2a
   double raiz_x1 = (-coeficiente_b - sqrt(delta)) / 2 * coeficiente_a;
   printf("as raizes da equação %dx² %d são x1 = %f e x2 = %f0\n",
     coeficiente_a, coeficiente_b,coeficiente_c, raiz_x1, raiz_x2);
   return 0;
 }